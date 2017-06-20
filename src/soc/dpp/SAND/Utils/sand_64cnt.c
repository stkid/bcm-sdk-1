/* $Id: sand_64cnt.c,v 1.3 Broadcom SDK $
 * $Copyright: (c) 2016 Broadcom.
 * Broadcom Proprietary and Confidential. All rights reserved.$
*/



#include <shared/bsl.h>
#include <soc/dpp/drv.h>



#include <soc/dpp/SAND/Utils/sand_64cnt.h>
#include <soc/dpp/SAND/Utils/sand_os_interface.h>


/*****************************************************
*NAME
* soc_sand_64cnt_clear
*TYPE:
*  PROC
*DATE:
*  9-Sep-03
*FUNCTION:
*  Clears all fields in the counter pointed by 'counter'.
*INPUT:
*  SOC_SAND_DIRECT:
*    SOC_SAND_64CNT* counter -
*      Counter to clear.
*  SOC_SAND_INDIRECT:
*    None.
*OUTPUT:
*  SOC_SAND_DIRECT:
*    void
*  SOC_SAND_INDIRECT:
*    NON
*REMARKS:
*  None.
*SEE ALSO:
*****************************************************/
void
  soc_sand_64cnt_clear(
    SOC_SAND_INOUT SOC_SAND_64CNT* counter
  )
{
  if(NULL == counter)
  {
    goto exit;
  }

  soc_sand_os_memset(
    counter,
    0x0,
    sizeof(SOC_SAND_64CNT)
  );

exit:
  return;
}

/*****************************************************
*NAME
* soc_sand_64cnt_clear_ov
*TYPE:
*  PROC
*DATE:
*  9-Sep-03
*FUNCTION:
*  Clears Over-Flow field in the counter pointed by 'counter'.
*INPUT:
*  SOC_SAND_DIRECT:
*    SOC_SAND_64CNT* counter -
*      Counter to clear.
*  SOC_SAND_INDIRECT:
*    None.
*OUTPUT:
*  SOC_SAND_DIRECT:
*    void
*  SOC_SAND_INDIRECT:
*    NON
*REMARKS:
*  None.
*SEE ALSO:
*****************************************************/
void
  soc_sand_64cnt_clear_ov(
    SOC_SAND_INOUT SOC_SAND_64CNT* counter
  )
{
  if(NULL == counter)
  {
    goto exit;
  }

  counter->overflowed = FALSE;

exit:
  return;
}

/*****************************************************
*NAME
* soc_sand_64cnt_add_long
*TYPE:
*  PROC
*DATE:
*  9-Sep-03
*FUNCTION:
*  Add uint32 value to counter.
*INPUT:
*  SOC_SAND_DIRECT:
*    SOC_SAND_64CNT* counter -
*      Counter to add.
*    uint32 value_to_add -
*      32 bit value to add to the counter.
*  SOC_SAND_INDIRECT:
*    None.
*OUTPUT:
*  SOC_SAND_DIRECT:
*    void
*  SOC_SAND_INDIRECT:
*    NON
*REMARKS:
*  None.
*SEE ALSO:
*****************************************************/
void
  soc_sand_64cnt_add_long(
    SOC_SAND_INOUT SOC_SAND_64CNT*   counter,
    SOC_SAND_IN    uint32 value_to_add
  )
{
  SOC_SAND_64CNT
    add_val;

  if(NULL == counter)
  {
    goto exit;
  }

  soc_sand_64cnt_clear(&add_val);
  add_val.u64.arr[0] = value_to_add;

  soc_sand_64cnt_add_64cnt(counter, &add_val);

exit:
  return;
}

/*****************************************************
*NAME
* soc_sand_64cnt_add_64cnt
*TYPE:
*  PROC
*DATE:
*  9-Sep-03
*FUNCTION:
*  Add long value to counter.
*INPUT:
*  SOC_SAND_DIRECT:
*    SOC_SAND_64CNT* counter -
*      Counter to add.
*    uint32 value_to_add -
*      64 bit counter to add to the counter.
*  SOC_SAND_INDIRECT:
*    None.
*OUTPUT:
*  SOC_SAND_DIRECT:
*    void
*  SOC_SAND_INDIRECT:
*    NON
*REMARKS:
*  None.
*SEE ALSO:
*****************************************************/
void
  soc_sand_64cnt_add_64cnt(
    SOC_SAND_INOUT SOC_SAND_64CNT* counter,
    SOC_SAND_IN    SOC_SAND_64CNT* value_to_add
  )
{
  uint32
    overflowed;
  if( (NULL == counter)       ||
      (NULL == value_to_add)
    )
  {
    goto exit;
  }

  overflowed = soc_sand_u64_add_u64(
                 &counter->u64,
                 &value_to_add->u64
               );

  /*
   * If any has overflow
   */
  if( (TRUE == overflowed)              ||
      (TRUE == counter->overflowed)     ||
      (TRUE == value_to_add->overflowed)
    )
  {
    counter->overflowed = TRUE;
  }

exit:
  return;
}


#if SOC_SAND_DEBUG
/* { */
/* $Id: sand_64cnt.c,v 1.3 Broadcom SDK $
 */


/*****************************************************
*NAME
* soc_sand_64cnt_print
*TYPE:
*  PROC
*DATE:
*  9-Sep-03
*FUNCTION:
*  Print service to SOC_SAND_64CNT.
*INPUT:
*  SOC_SAND_DIRECT:
*    SOC_SAND_64CNT* counter -
*      Counter to print.
*    uint32 short_format -
*      Short or long print format.
*  SOC_SAND_INDIRECT:
*    None.
*OUTPUT:
*  SOC_SAND_DIRECT:
*    void
*  SOC_SAND_INDIRECT:
*    NON
*REMARKS:
*  None.
*SEE ALSO:
*****************************************************/
void
  soc_sand_64cnt_print(
    SOC_SAND_IN SOC_SAND_64CNT*  counter,
    SOC_SAND_IN uint32 short_format
  )
{

  if(NULL == counter)
  {
    LOG_CLI((BSL_META("soc_sand_64cnt_print received NULL ptr\n\r")));
    goto exit;
  }

  if(short_format)
  {
    soc_sand_u64_print(&counter->u64, 0, short_format);

    LOG_CLI((BSL_META("%s"),
             (counter->overflowed ? " Overflowed" : "")
             ));
  }
  else
  {
    soc_sand_u64_print(&counter->u64, 0, short_format);
    LOG_CLI((BSL_META("Overflow:%u (%s)\n\r"),
             counter->overflowed,
             (counter->overflowed? "TRUE" : "FALSE")
             ));
  }

exit:
  return;
}


/*****************************************************
*NAME
* soc_sand_64cnt_test
*TYPE:
*  PROC
*DATE:
*  9-Sep-03
*FUNCTION:
*  Test function of SOC_SAND_64CNT.
*  View prints and return value to see pss/fail
*INPUT:
*  SOC_SAND_DIRECT:
*    None.
*  SOC_SAND_INDIRECT:
*    None.
*OUTPUT:
*  SOC_SAND_DIRECT:
*    uint32
*       TRUE  - PASS.
*       FALSE - FAIL
*  SOC_SAND_INDIRECT:
*    NON
*REMARKS:
*  None.
*SEE ALSO:
*****************************************************/
uint32
  soc_sand_64cnt_test(
    uint32 silent
  )
{
  uint32
    pass;
  SOC_SAND_64CNT
    cnt_1,
    cnt_2;
  int
    i;

  pass = TRUE;

  soc_sand_64cnt_clear(&cnt_1);
  soc_sand_64cnt_clear(&cnt_2);

  /*
   */
  for(i=0; i<16; ++i)
  {
    soc_sand_64cnt_add_long(&cnt_1, 0x0FFFFFFF);
  }
  if( !(
        (cnt_1.u64.arr[0]  == 0xFFFFFFF0) &&
        (cnt_1.u64.arr[1] == 0)          &&
        (cnt_1.overflowed ==FALSE)
       )
    )
  {
    pass = FALSE;
    goto exit;
  }
  if(!silent)
  {
    soc_sand_64cnt_print(&cnt_1, TRUE);
    LOG_INFO(BSL_LS_SOC_COMMON,
             (BSL_META("\n\r")));
  }

  /*
   */
  for(i=0; i<16; ++i)
  {
    soc_sand_64cnt_add_long(&cnt_1, 0x0FFFFFFF);
  }
  if( !(
        (cnt_1.u64.arr[0]  == 0xFFFFFFE0) &&
        (cnt_1.u64.arr[1] == 1)          &&
        (cnt_1.overflowed ==FALSE)
       )
    )
  {
    pass = FALSE;
    goto exit;
  }

  if(!silent)
  {
    soc_sand_64cnt_print(&cnt_1, TRUE);
    LOG_INFO(BSL_LS_SOC_COMMON,
             (BSL_META("\n\r")));
  }

  cnt_1.u64.arr[0]  = 0x10;
  cnt_1.u64.arr[1] = 0xFFFFFFF1;
  cnt_1.overflowed = FALSE;
  cnt_2.u64.arr[0]  = 0xFFFFFFF1;
  cnt_2.u64.arr[1] = 0x0000000D;
  cnt_2.overflowed = FALSE;

  soc_sand_64cnt_add_64cnt(&cnt_1, &cnt_2);
  if( !(
        (cnt_1.u64.arr[0]  == 1)          &&
        (cnt_1.u64.arr[1] == 0xFFFFFFFF) &&
        (cnt_1.overflowed ==FALSE)
       )
    )
  {
    pass = FALSE;
    goto exit;
  }

  if(!silent)
  {
    soc_sand_64cnt_print(&cnt_1, TRUE);
    LOG_INFO(BSL_LS_SOC_COMMON,
             (BSL_META("\n\r")));
    soc_sand_64cnt_print(&cnt_2, TRUE);
    LOG_INFO(BSL_LS_SOC_COMMON,
             (BSL_META("\n\r")));
  }

  cnt_1.u64.arr[0]  = 0x10;
  cnt_1.u64.arr[1] = 0xFFFFFFF1;
  cnt_1.overflowed = FALSE;
  cnt_2.u64.arr[0]  = 0xFFFFFFF1;
  cnt_2.u64.arr[1] = 0x0000000E;
  cnt_2.overflowed = FALSE;

  soc_sand_64cnt_add_64cnt(&cnt_1, &cnt_2);
  if( !(
        (cnt_1.u64.arr[0]  == 1)          &&
        (cnt_1.u64.arr[1] == 0x0) &&
        (cnt_1.overflowed ==TRUE)
       )
    )
  {
    pass = FALSE;
    goto exit;
  }

  if(!silent)
  {
    soc_sand_64cnt_print(&cnt_1, TRUE);
    LOG_INFO(BSL_LS_SOC_COMMON,
             (BSL_META("\n\r")));
    soc_sand_64cnt_print(&cnt_2, TRUE);
    LOG_INFO(BSL_LS_SOC_COMMON,
             (BSL_META("\n\r")));
    soc_sand_64cnt_print(&cnt_1, FALSE);
    LOG_INFO(BSL_LS_SOC_COMMON,
             (BSL_META("\n\r")));
    soc_sand_64cnt_print(&cnt_2, FALSE);
    LOG_INFO(BSL_LS_SOC_COMMON,
             (BSL_META("\n\r")));
  }

exit:
  return pass;
}


/*
 * }
 */
#endif

