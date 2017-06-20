/* $Id: sand_sorted_list.h,v 1.5 Broadcom SDK $
 * $Copyright: (c) 2016 Broadcom.
 * Broadcom Proprietary and Confidential. All rights reserved.$
*/
#ifndef DNX_SAND_SORTED_LIST_H_INCLUDED
/* { */
#define DNX_SAND_SORTED_LIST_H_INCLUDED

/*************
* INCLUDES  *
*************/
/* { */
#include <soc/dnx/legacy/SAND/Utils/sand_header.h>

#include <soc/dnx/legacy/SAND/Utils/sand_framework.h>
#include <soc/dnx/legacy/SAND/Management/sand_general_macros.h>
#include <soc/dnx/legacy/SAND/Utils/sand_occupation_bitmap.h>
/* } */

/*************
 * DEFINES   *
 *************/
/* { */
/*
 * If ENHANCED_SORTED_LIST_SEARCH is set to a non-zero value then the 'indices'
 * feature is enabled (See dnx_sand_sorted_list_create()).
 * The 'indices' feature adds a direct table to each sorted (linked) list such
 * that it makes it possible to do binary search. 
 */
#define ENHANCED_SORTED_LIST_SEARCH 0

/*
 * Maximal number of sorted list entries to assign at init.
 * See dnx_sand_sorted_list_init(), dnx_sand_sorted_list_create()
 */
#define DNX_SAND_SORTED_LIST_NULL         DNX_SAND_U32_MAX
#define DNX_SAND_SORTED_LIST_HEADER_SIZE  160
/* } */


/*************
 * MACROS    *
 *************/
/* { */

/* $Id: sand_sorted_list.h,v 1.5 Broadcom SDK $
 */
/*
 * Get sorted list iterator at the beginning of the sorted list
 */
#define DNX_SAND_SORTED_LIST_ITER_BEGIN(unit,list) dnx_sand_sorted_list_get_iter_begin_or_end(unit,list,1)
/*
 * Get sorted list iterator at end of sorted list.
 */
#define DNX_SAND_SORTED_LIST_ITER_END(unit,list)  dnx_sand_sorted_list_get_iter_begin_or_end(unit,list,0)
/* } */

/*************
 * TYPE DEFS *
 *************/
/* { */

typedef enum
{
    DNX_SAND_SORTED_LIST_CMP_FUNC_TYPE_DEFAULT,
    DNX_SAND_SORTED_LIST_CMP_FUNC_TYPE_TCAM,
    DNX_SAND_SORTED_LIST_CMP_FUNC_NOF_TYPES
} DNX_SAND_SORTED_LIST_CMP_FUNC_TYPE;


/*
 * type of the sorted list key
 *
 */
typedef uint8 DNX_SAND_SORTED_LIST_KEY;
/*
 * type of the sorted list data
 */
typedef uint8 DNX_SAND_SORTED_LIST_DATA;
/*
 * the ADT of sorted list, use this type to manipulate the has table.
 */
/* typedef struct DNX_SAND_SORTED_LIST_INFO_T*  DNX_SAND_SORTED_LIST_PTR_WORKAROUND; */
/*
 * iterator over the sorted list, use this type to traverse the sorted list.
 */
typedef uint32 DNX_SAND_SORTED_LIST_ITER;

/*****************************************************
*NAME:
* dnx_sand_os_memcmp
*DATE:
* 27/OCT/2002
*FUNCTION:
* compare two blocks of memory (ANSI)
*INPUT:
*  DNX_SAND_DIRECT:
*    const uint8 * buffer1    - array 1
*    const uint8 * buffer2    - array 2
* uint32   - size of memory to compare
*  DNX_SAND_INDIRECT:
*OUTPUT:
*  DNX_SAND_DIRECT:
*   If all elements are equal, zero.
*   If elements differ and the differing element
*   from s1 is greater than the element from s2,
*   the routine returns a positive number;
*   otherwise, it returns a negative number.
*  DNX_SAND_INDIRECT:
*REMARKS:
* This routine compares successive elements from two arrays
* of unsigned char, beginning at the addresses s1 and s2 (both of size n),
* until it finds elements that are not equal
*SEE ALSO:
*****************************************************/
typedef
  int32
    (*DNX_SAND_SORTED_LIST_KEY_CMP)(
      DNX_SAND_IN uint8                 *buffer1,
      DNX_SAND_IN uint8                 *buffer2,
      uint32                size
    );

/*********************************************************************
* NAME:
*     DNX_SAND_SORTED_LIST_SW_DB_ENTRY_SET
* FUNCTION:
*  call back to set the entry information from the SW DB of the device.
* INPUT:
*  DNX_SAND_IN  int              prime_handle -
*   handle of the sorted list to identify the sorted list instance
*  DNX_SAND_IN  int              prime_handle -
*   secondary identifier to data to be set in the sorted list instance.
*  DNX_SAND_IN  uint32                   offset -
*   offset of the entry in the memory "array".
*  DNX_SAND_IN  uint32                   len -
*   the length in bytes (uint8) of the entry to write.
*  DNX_SAND_IN uint8                     *data -
*   the information of to write.
* REMARKS:
*     None.
* RETURNS:
*     OK or ERROR indication.
*********************************************************************/
typedef
  uint32
    (*DNX_SAND_SORTED_LIST_SW_DB_ENTRY_SET)(
      DNX_SAND_IN  int                   prime_handle,
      DNX_SAND_IN  uint32                   sec_handle,
      DNX_SAND_INOUT  uint8                 *buffer,
      DNX_SAND_IN  uint32                   offset,
      DNX_SAND_IN  uint32                   len,
      DNX_SAND_IN uint8                     *data
    );

/*********************************************************************
* NAME:
*     DNX_SAND_SORTED_LIST_SW_DB_ENTRY_GET
* FUNCTION:
*  call back to get the entry information from the SW DB of the device.
* INPUT:
*  DNX_SAND_IN  int              prime_handle -
*   handle of the sorted list to identify the sorted list instance
*  DNX_SAND_IN  int              prime_handle -
*   secondary identifier to data to be set in the sorted list instance.
*  DNX_SAND_IN  uint32                   offset -
*   offset of the entry in the memory "array".
*  DNX_SAND_IN  uint32                   len -
*   the length in bytes (uint8) of the entry to write.
*  DNX_SAND_OUT uint8                     *data -
*   the information to read.
* REMARKS:
*     None.
* RETURNS:
*     OK or ERROR indication.
*********************************************************************/
typedef
  uint32
    (*DNX_SAND_SORTED_LIST_SW_DB_ENTRY_GET)(
      DNX_SAND_IN  int                   prime_handle,
      DNX_SAND_IN  uint32                   sec_handle,
      DNX_SAND_IN  uint8                    *buffer,
      DNX_SAND_IN  uint32                   offset,
      DNX_SAND_IN  uint32                   len,
      DNX_SAND_OUT uint8              *data
    );


/*********************************************************************
* NAME:
*     DNX_SAND_MULTI_SET_PRINT_VAL
* FUNCTION:
*  use to print the given value, needed only in the print API
* INPUT:
*  DNX_SAND_IN  int              prime_handle -
*   handle of the multiset to identify the multiset instance
*  DNX_SAND_IN  int              prime_handle -
*   secondary identifier to data to be set in the multiset instance.
*  DNX_SAND_IN  uint32                   offset -
*   offset of the entry in the memory "array".
*  DNX_SAND_IN  uint32                   len -
*   the length in bytes (uint8) of the entry to write.
*  DNX_SAND_OUT uint8                     *data -
*   the information to read.
* REMARKS:
*     None.
* RETURNS:
*     OK or ERROR indication.
*********************************************************************/
typedef
  void
    (*DNX_SAND_SORTED_LIST_PRINT_VAL)(
      DNX_SAND_IN  uint8                    *buffer
    );

/*
 * includes the information user has to supply in the sorted list creation
 */
typedef struct {
  /*
   * handle of the sorted list to identify the sorted list instance
   */
  int prime_handle;
  /*
   * handle of the sorted list to identify the sorted list instance
   */
  uint32 sec_handle;
  /*
   * Size of the sorted list maximum number of elements to insert the sorted list
   */
  uint32 list_size;
  /*
   * Size of the key (in bytes) to sort the list according to.
   */
  uint32 key_size;
  /*
   * Size of the data (in bytes)
   */
  uint32 data_size;

  DNX_SAND_SORTED_LIST_CMP_FUNC_TYPE cmp_func_type;

  DNX_SAND_SORTED_LIST_SW_DB_ENTRY_GET get_entry_fun;

  DNX_SAND_SORTED_LIST_SW_DB_ENTRY_SET set_entry_fun;

} DNX_SAND_SORTED_LIST_INIT_INFO ;


typedef struct
{
  /*
   * Buffer to contain the full keys to sort the list by.
   */
  SW_STATE_BUFF *keys;
  /*
   * point to the next in the list.
   */
  SW_STATE_BUFF *next;
  /*
   * point to the prev in the list.
   */
  SW_STATE_BUFF *prev;
  /*
   * The data buffer to hold in the linked list.
   */
  SW_STATE_BUFF *data;
  /*
   * Array of all nodes on the linked list, ordered the same way
   * as the linked list itself.
   * To be used for fast direct access to elements on the linked
   * list (e.g., binary search)
   * If this pointer is not loaded then this linked list does not
   * have this feature enabled.
   */
  PARSER_HINT_ARR uint32 *indices ;
  /*
   * Number of valid elements on 'indices' array.
   */
  uint32 num_elements_on_indices ;
  /*
   * The size of the pointer in bytes.
   */
  uint32 ptr_size;
  /*
   * Handle of occupation bitmap: Available memory of the nodes,
   * for efficient manipulation.
   */
  DNX_SAND_OCC_BM_PTR memory_use ;
  /*
   * Work space for data buffer. Altough it is part of sw state,
   * the data it contains has no value after warm boot.
   */
  SW_STATE_BUFF *tmp_data;
  /*
   * Work space for key buffer. Altough it is part of sw state,
   * the data it contains has no value after warm boot.
   */
  SW_STATE_BUFF *tmp_key ;
  /*
   * null pointer.
   */
  uint32  null_ptr ;

} DNX_SAND_SORTED_LIST_T ;

typedef struct
{
  DNX_SAND_SORTED_LIST_INIT_INFO  init_info ;
  DNX_SAND_SORTED_LIST_T          list_data ;
} DNX_SAND_SORTED_LIST_INFO ;

/* } */
/*
 * This is an identifier of an element of type DNX_SAND_SORTED_LIST_INFO
 *
 * Replace: typedef DNX_SAND_SORTED_LIST_INFO*  DNX_SAND_SORTED_LIST_PTR;
 * because the new software state does not use pointers, only handles.
 * So now, DNX_SAND_SORTED_LIST_PTR is just a handle to the 'sorted list'
 * structure (actually, index into 'lists_array' {of pointers})
 *
 * Note that the name is kept as is to minimize changes in current code.
 */
typedef uint32 DNX_SAND_SORTED_LIST_PTR ;
/*
 * Control Structure for all created sorted lists. Each list is pointed
 * by lists_array. See dnx_sand_sorted_list_init()
 */
typedef struct dnx_sand_sw_state_sorted_list_s
{
                      uint32                      max_nof_lists ;
                      uint32                      in_use ;
  PARSER_HINT_ARR_PTR DNX_SAND_SORTED_LIST_INFO   **lists_array ;
  PARSER_HINT_ARR     SHR_BITDCL                  *occupied_lists ;
} dnx_sand_sw_state_sorted_list_t;

/*************
* GLOBALS   *
*************/
/* { */

/* } */

/*************
* FUNCTIONS *
*************/
/* { */

/*********************************************************************
* NAME:
*   dnx_sand_sorted_list_init
* TYPE:
*   PROC
* DATE:
*   May 19 2015
* FUNCTION:
*   Initialize control structure for ALL sorted list instances expected.
* INPUT:
*   DNX_SAND_IN  int unit -
*     Identifier of the device to access.
*   DNX_SAND_IN  uint32 max_nof_lists -
*     Maximal number of sorted lists which can be sustained simultaneously.
* REMARKS:
*     None.
* RETURNS:
*     OK or ERROR indication.
*********************************************************************/
uint32
  dnx_sand_sorted_list_init(
    DNX_SAND_IN       int                          unit,
    DNX_SAND_IN       uint32                       max_nof_lists
  ) ;
/*********************************************************************
* NAME:
*   dnx_sand_sorted_list_clear_all_tmps
* TYPE:
*   PROC
* DATE:
*   Aug 02 2015
* FUNCTION:
*   Fill all allocated 'tmp' (sand box) buffers by zeros.
* INPUT:
*   DNX_SAND_IN  int unit -
*     Identifier of the device to access.
* REMARKS:
*   This procedure is to be used at init before 'diff'ing previous sw
*   state buffer with current one. This ensures that such buffers are
*   effectively not 'diff'ed.
* RETURNS:
*   OK or ERROR indication.
*********************************************************************/
uint32
  dnx_sand_sorted_list_clear_all_tmps(
    DNX_SAND_IN int unit
  ) ;
/*********************************************************************
* NAME:
*     dnx_sand_sorted_list_create
* TYPE:
*   PROC
* DATE:
*   May 19 2015
* FUNCTION:
*     Creates a new sorted list instance.
* INPUT:
*   DNX_SAND_IN  int                              unit -
*     Identifier of the device to access.
*   DNX_SAND_INOUT  DNX_SAND_SORTED_LIST_PTR     *sorted_list -
*     This procedure loads pointed memory by the identifier (handle)
*     of the newly created sorted list.
*   DNX_SAND_SORTED_LIST_INIT_INFO               init_info
*     Information to use to create the sorted list (size, data size..)
* REMARKS:
*   None.
* RETURNS:
*   OK or ERROR indication.
*********************************************************************/
uint32
  dnx_sand_sorted_list_create(
    DNX_SAND_IN     int                             unit,
    DNX_SAND_INOUT  DNX_SAND_SORTED_LIST_PTR        *sorted_list_ptr,
    DNX_SAND_IN     DNX_SAND_SORTED_LIST_INIT_INFO  init_info
  );

/*********************************************************************
* NAME:
*   dnx_sand_sorted_list_clear
* TYPE:
*   PROC
* DATE:
*   May 19 2015
* FUNCTION:
*   Clear an existing sorted list instance.
* INPUT:
*   DNX_SAND_IN  int                               unit -
*     Identifier of the device to access.
*   DNX_SAND_INOUT  DNX_SAND_SORTED_LIST_PTR       sorted_list -
*     Identifier (handle) of the sorted list to clear.
* REMARKS:
*   None.
* RETURNS:
*   OK or ERROR indication.
*********************************************************************/
uint32
  dnx_sand_sorted_list_clear(
    DNX_SAND_IN     int                            unit,
    DNX_SAND_INOUT  DNX_SAND_SORTED_LIST_PTR       sorted_list
  );

/*********************************************************************
* NAME:
*     dnx_sand_sorted_list_destroy
* TYPE:
*   PROC
* DATE:
*   May 19 2015
* FUNCTION:
*     free the sorted list instance.
* INPUT:
*   DNX_SAND_IN  int                      unit -
*     Identifier of the device to access.
*  DNX_SAND_OUT  DNX_SAND_SORTED_LIST_PTR sorted_list -
*     The sorted list to destroy.
* REMARKS:
*     None.
* RETURNS:
*     OK or ERROR indication.
*********************************************************************/
uint32
  dnx_sand_sorted_list_destroy(
    DNX_SAND_IN     int                         unit,
    DNX_SAND_IN     DNX_SAND_SORTED_LIST_PTR    sorted_list
  );

/*********************************************************************
* NAME:
*     dnx_sand_sorted_list_entry_add
* TYPE:
*   PROC
* DATE:
*   May 19 2015
* FUNCTION:
*  Insert an entry into the sorted list, if already exist then
*  the operation returns an error.
* INPUT:
*   DNX_SAND_IN  int                         unit -
*     Identifier of the device to access.
*   DNX_SAND_INOUT  DNX_SAND_SORTED_LIST_PTR sorted_list -
*     The sorted list to add a key to.
*   DNX_SAND_IN  DNX_SAND_SORTED_LIST_KEY    key -
*     The key to add into the sorted list
*   DNX_SAND_IN  uint8                       occupied -
*     the data to add into the sorted list and to be associated with
*     the given key
*   DNX_SAND_OUT  uint8                     *success -
*     whether the add operation success.
* RETURNS:
*     OK or ERROR indication.
*********************************************************************/
uint32
  dnx_sand_sorted_list_entry_add(
    DNX_SAND_IN     int                           unit,
    DNX_SAND_IN     DNX_SAND_SORTED_LIST_PTR      sorted_list,
    DNX_SAND_IN     DNX_SAND_SORTED_LIST_KEY*     const key,
    DNX_SAND_IN     DNX_SAND_SORTED_LIST_DATA*    const data,
    DNX_SAND_OUT    uint8                        *success
  ) ;

/*********************************************************************
* NAME:
*     dnx_sand_sorted_list_entry_update
* TYPE:
*   PROC
* DATE:
*   May 19 2015
* FUNCTION:
*  update the value and the key pointed by iter.
*  if any is NULL then it's not updated.
*  it's the user responsibility to keep the order
*  of the list so modifying the key not violate the order.
* INPUT:
*   DNX_SAND_IN  int                                  unit -
*     Identifier of the device to access.
*   DNX_SAND_INOUT  DNX_SAND_SORTED_LIST_INFO        *sorted_list -
*     The sorted list instance.
*   DNX_SAND_IN     DNX_SAND_SORTED_LIST_ITER         iter -
*     iter identifying the node to update.
*   DNX_SAND_IN  DNX_SAND_SORTED_LIST_KEY             key -
*     The new key, may be NULL.
*   DNX_SAND_IN  DNX_SAND_SORTED_LIST_DATA*           const data -
*     The new data, may be NULL.
* REMARKS:
* RETURNS:
*     OK or ERROR indication.
*********************************************************************/
uint32
  dnx_sand_sorted_list_entry_update(
    DNX_SAND_IN     int                               unit,
    DNX_SAND_IN     DNX_SAND_SORTED_LIST_PTR          sorted_list,
    DNX_SAND_IN     DNX_SAND_SORTED_LIST_ITER         iter,
    DNX_SAND_IN     DNX_SAND_SORTED_LIST_KEY*         const key,
    DNX_SAND_IN     DNX_SAND_SORTED_LIST_DATA*        const data
  );

/*********************************************************************
* NAME:
*     dnx_sand_sorted_list_entry_add_by_iter
* TYPE:
*   PROC
* DATE:
*   May 19 2015
* FUNCTION:
*  Insert an entry into the sorted list after/before the given iter.
* INPUT:
*   DNX_SAND_IN  int                             unit -
*     Identifier of the device to access.
*   DNX_SAND_INOUT  DNX_SAND_SORTED_LIST_PTR     sorted_list -
*     The sorted list to add a key to.
*   DNX_SAND_IN  DNX_SAND_SORTED_LIST_ITER       pos -
*     the position (iterator) where to insert the new node.
*   DNX_SAND_IN  uint8                           before -
*     whether to add before or after the given pos (iterator).
*   DNX_SAND_IN  DNX_SAND_SORTED_LIST_KEY        key -
*     The key to add into the sorted list
*   DNX_SAND_IN  DNX_SAND_SORTED_LIST_DATA*      const data -
*     The data to add into the sorted list
*   DNX_SAND_OUT  uint8                         *success -
*     whether the add operation success.
* REMARKS:
* RETURNS:
*     OK or ERROR indication.
*********************************************************************/
uint32
  dnx_sand_sorted_list_entry_add_by_iter(
    DNX_SAND_IN     int                           unit,
    DNX_SAND_IN     DNX_SAND_SORTED_LIST_PTR      sorted_list,
    DNX_SAND_IN     DNX_SAND_SORTED_LIST_ITER     pos,
    DNX_SAND_IN     uint8                         before,
    DNX_SAND_IN     DNX_SAND_SORTED_LIST_KEY*     const key,
    DNX_SAND_IN     DNX_SAND_SORTED_LIST_DATA*    const data,
    DNX_SAND_OUT    uint8                         *success
  );

/*********************************************************************
* NAME:
*     dnx_sand_sorted_list_entry_remove
* TYPE:
*   PROC
* DATE:
*   May 19 2015
* FUNCTION:
*  Remove an entry from a sorted list pointed by iter.
* INPUT:
*   DNX_SAND_IN  int                        unit -
*     Identifier of the device to access.
*  DNX_SAND_INOUT  DNX_SAND_SORTED_LIST_PTR sorted_list -
*    Handle to the sorted list to add to.
*  DNX_SAND_IN  DNX_SAND_SORTED_LIST_ITER   iter -
*    Points to the node to remove.
* REMARKS:
*     None.
* RETURNS:
*     OK or ERROR indication.
*********************************************************************/
uint32
  dnx_sand_sorted_list_entry_remove_by_iter(
    DNX_SAND_IN     int                             unit,
    DNX_SAND_IN     DNX_SAND_SORTED_LIST_PTR        sorted_list,
    DNX_SAND_IN     DNX_SAND_SORTED_LIST_ITER       iter
  );


/*********************************************************************
* NAME:
*     dnx_sand_sorted_list_entry_lookup
* TYPE:
*   PROC
* DATE:
*   May 19 2015
* FUNCTION:
*  lookup in the sorted list for the given key and data return the iterator pointing to this data and
*  key.
* INPUT:
*   DNX_SAND_IN  int                            unit -
*     Identifier of the device to access.
*  DNX_SAND_IN  DNX_SAND_SORTED_LIST_PTR        sorted_list -
*     Handle of the sorted list.
*   DNX_SAND_IN  DNX_SAND_SORTED_LIST_KEY       key -
*     The key to lookup
*   DNX_SAND_IN  DNX_SAND_SORTED_LIST_DATA*     const data -
*     The data to lookup
*   DNX_SAND_OUT  DNX_SAND_SORTED_LIST_ITER    *iter -
*     iterator pointing to the given data key in the sorted list, NULL if data was not found.
*     if found is TRUE then this points to the looked up entry.
*     otherwise it points to one entry before.
*   DNX_SAND_OUT  uint8                        *found -
*
* REMARKS:
*     1. if data is NULL then return the first place key was found or the place where it
*        suppose to be according to the order.
* RETURNS:
*     OK or ERROR indication.
*********************************************************************/
uint32
  dnx_sand_sorted_list_entry_lookup(
    DNX_SAND_IN     int                           unit,
    DNX_SAND_IN     DNX_SAND_SORTED_LIST_PTR      sorted_list,
    DNX_SAND_IN     DNX_SAND_SORTED_LIST_KEY      *const key,
    DNX_SAND_IN     DNX_SAND_SORTED_LIST_DATA     *const data,
    DNX_SAND_OUT    uint8                         *found,
    DNX_SAND_OUT    DNX_SAND_SORTED_LIST_ITER     *iter
  );

/*********************************************************************
* NAME:
*     dnx_sand_sorted_list_entry_value
* TYPE:
*   PROC
* DATE:
*   May 19 2015
* FUNCTION:
*  lookup in the sorted list for the given key and data return the iterator pointing to this data and
*  key.
* INPUT:
*   DNX_SAND_IN  int                            unit -
*     Identifier of the device to access.
*   DNX_SAND_IN  DNX_SAND_SORTED_LIST_PTR       sorted_list -
*     The sorted list.
*   DNX_SAND_OUT  DNX_SAND_SORTED_LIST_ITER     iter -
*     iterator pointing to the node.
*   DNX_SAND_IN  DNX_SAND_SORTED_LIST_KEY*      const key -
*     The key pointed by iter
*   DNX_SAND_IN  DNX_SAND_SORTED_LIST_DATA*     const data -
*     The data pointed by iter
* REMARKS:
* RETURNS:
*     OK or ERROR indication.
*********************************************************************/
uint32
  dnx_sand_sorted_list_entry_value(
    DNX_SAND_IN     int                          unit,
    DNX_SAND_IN     DNX_SAND_SORTED_LIST_PTR     sorted_list,
    DNX_SAND_IN     DNX_SAND_SORTED_LIST_ITER    iter,
    DNX_SAND_OUT    DNX_SAND_SORTED_LIST_KEY*    const key,
    DNX_SAND_OUT    DNX_SAND_SORTED_LIST_DATA*   const data
  );

/*********************************************************************
* NAME:
*     dnx_sand_sorted_list_get_next
* TYPE:
*   PROC
* DATE:
*   May 19 2015
* FUNCTION:
*  get the next key in the sorted list.
*  start traversing from the place pointed by the given iterator.
* INPUT:
*   DNX_SAND_IN  int                             unit -
*     Identifier of the device to access.
*   DNX_SAND_IN  DNX_SAND_SORTED_LIST_PTR        sorted_list -
*     The sorted list.
*   DNX_SAND_INOUT  DNX_SAND_SORTED_LIST_ITER   *iter
*     iterator points to the entry to start traverse from.
*   DNX_SAND_OUT  DNX_SAND_SORTED_LIST_KEY       key -
*     the key of next node.
*   DNX_SAND_OUT  DNX_SAND_SORTED_LIST_DATA*     const data -
*     the data of next node.
* REMARKS:
*     - to start traverse the sorted list from the beginning.
*       use DNX_SAND_SORTED_LIST_ITER_BEGIN(list,iter)
*     - to check if the iterator get to the end of the table use.
*       use DNX_SAND_SORTED_LIST_ITER_END(list,iter)
* RETURNS:
*     OK or ERROR indication.
*********************************************************************/
uint32
  dnx_sand_sorted_list_get_next(
    DNX_SAND_IN     int                           unit,
    DNX_SAND_IN     DNX_SAND_SORTED_LIST_PTR      sorted_list,
    DNX_SAND_INOUT  DNX_SAND_SORTED_LIST_ITER     *iter,
    DNX_SAND_OUT    DNX_SAND_SORTED_LIST_KEY      *const key,
    DNX_SAND_OUT    DNX_SAND_SORTED_LIST_DATA     *const data
  );

/*********************************************************************
* NAME:
*     dnx_sand_sorted_list_get_prev
* TYPE:
*   PROC
* DATE:
*   May 19 2015
* FUNCTION:
*  get the previous key the sorted list.
*  start traversing from the place pointed by the given iterator.
* INPUT:
*   DNX_SAND_IN  int                             unit -
*     Identifier of the device to access.
*   DNX_SAND_IN  DNX_SAND_SORTED_LIST_PTR        sorted_list -
*     The sorted list.
*   DNX_SAND_INOUT  DNX_SAND_SORTED_LIST_ITER   *iter
*     iterator points to the entry to start traverse from.
*   DNX_SAND_OUT  DNX_SAND_SORTED_LIST_KEY       key -
*     the key of previous node.
*   DNX_SAND_OUT  DNX_SAND_SORTED_LIST_DATA*     const data -
*     the data of previous node.
* REMARKS:
*     - to start traverse the sorted list from the beginning.
*       use DNX_SAND_SORTED_LIST_ITER_BEGIN(list,iter)
*     - to check if the iterator get to the end of the table use.
*       use DNX_SAND_SORTED_LIST_ITER_END(list,iter)
* RETURNS:
*     OK or ERROR indication.
*********************************************************************/
uint32
  dnx_sand_sorted_list_get_prev(
    DNX_SAND_IN     int                           unit,
    DNX_SAND_IN     DNX_SAND_SORTED_LIST_PTR      sorted_list,
    DNX_SAND_INOUT  DNX_SAND_SORTED_LIST_ITER     *iter,
    DNX_SAND_OUT    DNX_SAND_SORTED_LIST_KEY      *const key,
    DNX_SAND_OUT    DNX_SAND_SORTED_LIST_DATA     *const data
  );

/*********************************************************************
* NAME:
*     dnx_sand_sorted_list_get_follow
* TYPE:
*   PROC
* DATE:
*   May 19 2015
* FUNCTION:
*  get the next/previous key in the sorted list.
*  start traversing from the place pointed by the given iterator.
* INPUT:
*   DNX_SAND_IN  int                             unit -
*     Identifier of the device to access.
*   DNX_SAND_IN  DNX_SAND_SORTED_LIST_PTR        sorted_list -
*     The sorted list.
*   DNX_SAND_INOUT  DNX_SAND_SORTED_LIST_ITER   *iter
*     iterator points to the entry to start traverse from.
*   DNX_SAND_OUT  uint8                          forward -
*     to get previous or next.
*     TRUE: next, FALSE:previous
*   DNX_SAND_OUT  DNX_SAND_SORTED_LIST_KEY       key -
*     the key of previous/next node.
*   DNX_SAND_OUT  DNX_SAND_SORTED_LIST_DATA*     const data -
*     the data of previous/next node.
* REMARKS:
*     - to start traverse the sorted list from the beginning.
*       use DNX_SAND_SORTED_LIST_ITER_BEGIN(list,iter)
*     - to check if the iterator get to the end of the table use.
*       use DNX_SAND_SORTED_LIST_ITER_END(list,iter)
* RETURNS:
*     OK or ERROR indication.
*********************************************************************/
uint32
  dnx_sand_sorted_list_get_follow(
    DNX_SAND_IN     int                           unit,
    DNX_SAND_IN     DNX_SAND_SORTED_LIST_PTR      sorted_list,
    DNX_SAND_INOUT  DNX_SAND_SORTED_LIST_ITER     *iter,
    DNX_SAND_OUT    uint8                         forward,
    DNX_SAND_OUT    DNX_SAND_SORTED_LIST_KEY      *const key,
    DNX_SAND_OUT    DNX_SAND_SORTED_LIST_DATA     *const data
  );

/*********************************************************************
* NAME:
*     dnx_sand_sorted_list_get_size_for_save
* TYPE:
*   PROC
* DATE:
*   May 19 2015
* FUNCTION:
*     returns the size of the buffer needed to return the sorted list as buffer.
*     in sort to be loaded later
* INPUT:
*   DNX_SAND_IN  int                      unit -
*     Identifier of the device to access.
*   DNX_SAND_IN  DNX_SAND_SORTED_LIST_PTR sorted_list -
*     The sorted list to get the size for.
*   DNX_SAND_OUT  uint32                 *size -
*     the size of the buffer.
* REMARKS:
*   None.
* RETURNS:
*   OK or ERROR indication.
*********************************************************************/
uint32
  dnx_sand_sorted_list_get_size_for_save(
    DNX_SAND_IN   int                      unit,
    DNX_SAND_IN   DNX_SAND_SORTED_LIST_PTR sorted_list,
    DNX_SAND_OUT  uint32                   *size
  ) ;

/*********************************************************************
* NAME:
*     dnx_sand_sorted_list_save
* TYPE:
*   PROC
* DATE:
*   May 19 2015
* FUNCTION:
*     saves the given sorted list in the given buffer
* INPUT:
*   DNX_SAND_IN  int                           unit -
*     Identifier of the device to access.
*   DNX_SAND_IN  DNX_SAND_SORTED_LIST_INFO    *sorted_list -
*     The sorted list to save.
*   DNX_SAND_OUT  uint8                       *buffer -
*     buffer to include the hast table
*   DNX_SAND_IN  uint32                        buffer_size_bytes,
*   DNX_SAND_OUT uint32                       *actual_size_bytes
* REMARKS:
*   - the size of the buffer has to be at least as the value returned
*     by dnx_sand_sorted_list_get_size_for_save.
*   - the hash and rehash functions are not saved.
* RETURNS:
*   OK or ERROR indication.
*********************************************************************/
uint32
  dnx_sand_sorted_list_save(
    DNX_SAND_IN  int                           unit,
    DNX_SAND_IN  DNX_SAND_SORTED_LIST_PTR      sorted_list,
    DNX_SAND_OUT uint8                         *buffer,
    DNX_SAND_IN  uint32                        buffer_size_bytes,
    DNX_SAND_OUT uint32                        *actual_size_bytes
  );


/*********************************************************************
* NAME:
*     dnx_sand_sorted_list_load
* TYPE:
*   PROC
* DATE:
*   May 19 2015
* FUNCTION:
*     load from the given buffer the sorted list saved in this buffer.
* INPUT:
*   DNX_SAND_IN  int                                   unit -
*     Identifier of the device to access.
*   DNX_SAND_IN  uint8                               **buffer -
*     buffer includes the sorted list
*   DNX_SAND_IN  DNX_SAND_SORTED_LIST_SW_DB_ENTRY_GET  get_entry_fun,
*   DNX_SAND_IN  DNX_SAND_SORTED_LIST_SW_DB_ENTRY_SET  set_entry_fun,
*   DNX_SAND_IN  DNX_SAND_SORTED_LIST_KEY_CMP          cmp_key_fun,
*   DNX_SAND_OUT DNX_SAND_SORTED_LIST_PTR              *sorted_list_ptr -
*     The sorted list to load.
* REMARKS:
*   - the size of the buffer has to be at least as the value returned
*     by dnx_sand_sorted_list_get_size_for_save.
*   - there is need to supply the hash and rehash function (in case they are not
*     the default implementation, cause in the save they are not saved.
*     by dnx_sand_sorted_list_get_size_for_save.
* RETURNS:
*   OK or ERROR indication.
*********************************************************************/
uint32
  dnx_sand_sorted_list_load(
    DNX_SAND_IN  int                                   unit,
    DNX_SAND_IN  uint8                                 **buffer,
    DNX_SAND_IN  DNX_SAND_SORTED_LIST_SW_DB_ENTRY_GET  get_entry_fun,
    DNX_SAND_IN  DNX_SAND_SORTED_LIST_SW_DB_ENTRY_SET  set_entry_fun,
    DNX_SAND_IN  DNX_SAND_SORTED_LIST_KEY_CMP          cmp_key_fun,                      
    DNX_SAND_OUT DNX_SAND_SORTED_LIST_PTR              *sorted_list_ptr                     
  );

/*********************************************************************
* NAME:
*     dnx_sand_sorted_list_print
* TYPE:
*   PROC
* DATE:
*   May 19 2015
* FUNCTION:
*     prints the sorted list content, all entries including entries not in use.
* INPUT:
*   DNX_SAND_IN  int                                   unit -
*     Identifier of the device to access.
*   DNX_SAND_IN  DNX_SAND_SORTED_LIST_PTR sorted_list -
*     The sorted list to print.
* REMARKS:
*     None.
* RETURNS:
*     OK or ERROR indication.
*********************************************************************/
uint32
  dnx_sand_sorted_list_print(
    DNX_SAND_IN  int                               unit,
    DNX_SAND_IN  DNX_SAND_SORTED_LIST_PTR          sorted_list,
    DNX_SAND_IN  char                              table_header[DNX_SAND_SORTED_LIST_HEADER_SIZE],
    DNX_SAND_IN  DNX_SAND_SORTED_LIST_PRINT_VAL    print_key,
    DNX_SAND_IN  DNX_SAND_SORTED_LIST_PRINT_VAL    print_data
  ) ;
/*
 * Print 'indices' array corresponding to specified sorted list.
 */
uint32
  dnx_sand_print_indices(
    int                      unit,
    DNX_SAND_SORTED_LIST_PTR sorted_list
  ) ;
/*
 * Print specified sorted list.
 */
uint32
  dnx_sand_print_list(
    int                      unit,
    DNX_SAND_SORTED_LIST_PTR sorted_list
  ) ;

#ifdef DNX_SAND_DEBUG
/* { */

/*********************************************************************
* NAME:
*     dnx_sand_sorted_list_tests
* TYPE:
*   PROC
* DATE:
*   May 19 2015
* FUNCTION:
*     Tests the sorted list module
*
*INPUT:
*  DNX_SAND_DIRECT:
*    DNX_SAND_IN uint32 silent -
*    Indicator.
*    1 - Do not print debuging info.
*    0 - Print various debuging info.
*  DNX_SAND_INDIRECT:
*    None.
*OUTPUT:
*  DNX_SAND_DIRECT:
*    uint32 -
*    Indicator.
*    1 - Test pass.
*    0 - Test fail.
*  DNX_SAND_INDIRECT:
*    NON
*REMARKS:
* SW License Agreement: Dune Networks (c). CONFIDENTIAL PROPRIETARY INFORMATION.
* Any use of this Software is subject to Software License Agreement
* included in the Driver User Manual of this device.
* Any use of this Software constitutes an agreement to the terms
* of the above Software License Agreement.
********************************************************************/
/*uint32
  dnx_sand_sorted_list_tests(
    DNX_SAND_IN int unit,
    DNX_SAND_IN uint8 silent
);
*/

uint32
  dnx_sand_SAND_SORTED_LIST_INFO_clear(
    DNX_SAND_IN int                      unit,
    DNX_SAND_IN DNX_SAND_SORTED_LIST_PTR info
  );

uint32
  dnx_sand_SAND_SORTED_LIST_INFO_print(
    DNX_SAND_IN int                      unit,
    DNX_SAND_IN DNX_SAND_SORTED_LIST_PTR info
  );
/* } */
#endif /* DNX_SAND_DEBUG */

/*********************************************************************
* NAME:
*   dnx_sand_sorted_list_get_iter_begin_or_end
* TYPE:
*   PROC
* DATE:
*   May 19 2015
* FUNCTION:
*   Get the first iterator of the sorted list.
* INPUT:
*   DNX_SAND_IN  int                              unit -
*     Identifier of the device to access.
*   DNX_SAND_IN  DNX_SAND_SORTED_LIST_PTR         sorted_list -
*     Handle to the sorted list.
*   DNX_SAND_IN  int                              get_begin -
*     If non-zero then get iterator at the beginning of the list. Otherwise
*     get iterator at end of list
* REMARKS:
*     None.
* RETURNS:
*   First iterator. If an error is encountered, a negative value is returned.
*********************************************************************/
uint32
  dnx_sand_sorted_list_get_iter_begin_or_end(
    DNX_SAND_IN   int                           unit,
    DNX_SAND_IN   DNX_SAND_SORTED_LIST_PTR      sorted_list,
    DNX_SAND_IN   int                           get_begin
  ) ;
/*
 * Utilities related to the 'indices' feature.
 */
/* { */
/*********************************************************************
* NAME:
*     dnx_sand_sorted_list_find_higher_eq_key
* TYPE:
*   PROC
* DATE:
*   Dec 01 2015
* FUNCTION:
*  Get location on array of available linked list elements of the first
*  element with priority (key) higher than or equal to specified on input.
*  (Only available when 'indices' feature is enabled on specified
*  sorted list). See REMARKS below.
* INPUT:
*   DNX_SAND_IN  int                              unit -
*     Identifier of the device to access.
*   DNX_SAND_IN  DNX_SAND_SORTED_LIST_PTR         sorted_list -
*     Handle to the sorted list.
*   DNX_SAND_IN  DNX_SAND_SORTED_LIST_KEY         *const key -
*     Key to use as reference. Assumed to be an array of
*     JER2_ARAD_TCAM_DB_LIST_KEY_SIZE characters. (Actually, JER2_ARAD_TCAM_DB_LIST_KEY_SIZE
*     is assumed to be sizeof(uint32))
*   DNX_SAND_OUT DNX_SAND_SORTED_LIST_ITER        *iter -
*     Index (location), on array of available linked list elements
*     for this linked list, of element with higher/eq priority.
*     If input key is strictly higher than highest element on sorted
*     list (i.e. last valid element) then return:
*       DNX_SAND_SORTED_LIST_ITER_END((unit,sorted_list)
*     If sorted list is empty then return:
*       DNX_SAND_SORTED_LIST_ITER_END(unit,sorted_list)
*   DNX_SAND_OUT uint8                            *found_equal -
*     If matching element was found and its priority was exactly equal
*     to that of input key then this procedure loads pointed memory
*     by a non-zero value. Otherwise, it is loaded by zero.
* REMARKS:
*   Key is converted to priority using
*     dnx_sand_db_prio_list_priority_value_decode().
*   This procedure is only valid when 'indices' feature is enabled
*   on specified sorted list.
* RETURNS:
*   OK or ERROR indication.
*********************************************************************/
uint32
  dnx_sand_sorted_list_find_higher_eq_key(
    DNX_SAND_IN  int                       unit,
    DNX_SAND_IN  DNX_SAND_SORTED_LIST_PTR  sorted_list,
    DNX_SAND_IN  DNX_SAND_SORTED_LIST_KEY  *const key,
    DNX_SAND_OUT DNX_SAND_SORTED_LIST_ITER *iter,
    DNX_SAND_OUT uint8                     *found_equal
  ) ;

/*********************************************************************
* NAME:
*     dnx_sand_sorted_list_find_lower_eq_key
* TYPE:
*   PROC
* DATE:
*   Dec 01 2015
* FUNCTION:
*  Get location, on array of available linked list elements, of the first
*  element with priority (key) lower than or equal to specified on input.
*  (Only available when 'indices' feature is enabled on specified
*  sorted list). See REMARKS below.
* INPUT:
*   DNX_SAND_IN  int                              unit -
*     Identifier of the device to access.
*   DNX_SAND_IN  DNX_SAND_SORTED_LIST_PTR         sorted_list -
*     Handle to the sorted list.
*   DNX_SAND_IN  DNX_SAND_SORTED_LIST_KEY         *const key -
*     Key to use as reference. Assumed to be an array of
*     JER2_ARAD_TCAM_DB_LIST_KEY_SIZE characters. (Actually, JER2_ARAD_TCAM_DB_LIST_KEY_SIZE
*     is assumed to be sizeof(uint32))
*   DNX_SAND_OUT DNX_SAND_SORTED_LIST_ITER        *iter -
*     Index (location), on array of available linked list elements
*     for this linked list, of element with lower/eq priority.
*     If input key is strictly lower than lowest element on sorted
*     list (i.e. last valid element) then return:
*       DNX_SAND_SORTED_LIST_ITER_BEGIN((unit,sorted_list)
*     If sorted list is empty then return:
*       DNX_SAND_SORTED_LIST_ITER_BEGIN(unit,sorted_list)
*   DNX_SAND_OUT uint32                           *index_p -
*     Index, on array containing pointers (indices) of of available
*     linked list elements arranged by priority. See 'iter' above.
*     If input key is strictly lower than lowest element on sorted
*     If there is no element on sorted list which matches required
*     criterion then return '-1'.
*     Note: In this latter case, '*iter' will be:
*       DNX_SAND_SORTED_LIST_ITER_BEGIN((unit,sorted_list)
*   DNX_SAND_OUT uint8                            *found_equal -
*     If matching element was found and its priority was exactly equal
*     to that of input key then this procedure loads pointed memory
*     by a non-zero value. Otherwise, it is loaded by zero.
* REMARKS:
*   Key is converted to priority using
*     jer2_arad_tcam_db_prio_list_priority_value_decode()
*
*   This procedure is only valid when 'indices' feature is enabled
*   on specified sorted list.
*
*   Key/priority comparison is done by a procedure as indicated on
*     SORTED_LIST_ACCESS_INFO.cmp_func_type
* RETURNS:
*   OK or ERROR indication.
*********************************************************************/
uint32
  dnx_sand_sorted_list_find_lower_eq_key(
    DNX_SAND_IN  int                       unit,
    DNX_SAND_IN  DNX_SAND_SORTED_LIST_PTR  sorted_list,
    DNX_SAND_IN  DNX_SAND_SORTED_LIST_KEY  *const key,
    DNX_SAND_OUT DNX_SAND_SORTED_LIST_ITER *iter,
    DNX_SAND_OUT uint32                    *index,
    DNX_SAND_OUT uint8                     *found_equal
  ) ;
/*********************************************************************
* NAME:
*     dnx_sand_sorted_list_get_num_elements
* TYPE:
*   PROC
* DATE:
*   Dec 01 2015
* FUNCTION:
*  Get current number of elements on specified sorted list. (This is
*  also the number of elements on 'indices' array)
* INPUT:
*   DNX_SAND_IN  int                              unit -
*     Identifier of the device to access.
*   DNX_SAND_IN  DNX_SAND_SORTED_LIST_PTR         sorted_list -
*     Handle to the sorted list.
*   DNX_SAND_OUT uint32                           *num_elements -
*     Number of valid elements currently on the list.
*     Only meaningful if the 'indices' feature is enabled ('indices'
*     element in DNX_SAND_SORTED_LIST_T is allocated). 
* REMARKS:
*     None.
* RETURNS:
*     OK or ERROR indication.
*********************************************************************/
uint32
  dnx_sand_sorted_list_get_num_elements(
    DNX_SAND_IN  int                      unit,
    DNX_SAND_IN  DNX_SAND_SORTED_LIST_PTR sorted_list,
    DNX_SAND_OUT uint32                   *num_elements
  ) ;
/*********************************************************************
* NAME:
*     dnx_sand_sorted_list_is_indices_enabled
* TYPE:
*   PROC
* DATE:
*   Dec 01 2015
* FUNCTION:
*  Get indication on whether the 'indices' feature is enabled for this
*  sorted list.
* INPUT:
*   DNX_SAND_IN  int                              unit -
*     Identifier of the device to access.
*   DNX_SAND_IN  DNX_SAND_SORTED_LIST_PTR         sorted_list -
*     Handle to the sorted list.
*   DNX_SAND_OUT uint8                            *is_enabled -
*     Indication on whether 'indices' feature is enabled. Non-zero
*     indicates 'enabled'
* REMARKS:
*     None.
* RETURNS:
*     OK or ERROR indication.
*********************************************************************/
uint32
  dnx_sand_sorted_list_is_indices_enabled(
    DNX_SAND_IN  int                      unit,
    DNX_SAND_IN  DNX_SAND_SORTED_LIST_PTR sorted_list,
    DNX_SAND_OUT uint8                    *is_enabled
  ) ;
/*********************************************************************
* NAME:
*     dnx_sand_sorted_list_get_iter_from_indices
* TYPE:
*   PROC
* DATE:
*   Dec 01 2015
* FUNCTION:
*  Given index within 'indices' (which is the ordinal location of
*  a sorted linked list element, starting from low key value), get
*  the corresponding location on array of available linked list
*  elements.
* INPUT:
*   DNX_SAND_IN  int                              unit -
*     Identifier of the device to access.
*   DNX_SAND_IN  DNX_SAND_SORTED_LIST_PTR         sorted_list -
*     Handle to the sorted list.
*   DNX_SAND_IN  uint32                           index_in_indices -
*     Index on 'indices' array to use to get the corresponding index
*     on array of available link-list elements.
*     Only meaningful if the 'indices' feature is enabled ('indices'
*     element in DNX_SAND_SORTED_LIST_T is allocated). Note that this
*     index is counted from the BOTTOM of 'indices'. So, for example,
*     when index=0 then returned entry refers to LOWEST key.
*   DNX_SAND_OUT DNX_SAND_SORTED_LIST_ITER        *iter -
*     Index (location) on array of available linked list elements
*     for this linked list
* REMARKS:
*   Use dnx_sand_sorted_list_entry_value() to get 'key' or 'data'
*   of corresponding linked list element.
* RETURNS:
*     OK or ERROR indication.
*********************************************************************/
uint32
  dnx_sand_sorted_list_get_iter_from_indices(
    DNX_SAND_IN  int                       unit,
    DNX_SAND_IN  DNX_SAND_SORTED_LIST_PTR  sorted_list,
    DNX_SAND_IN  uint32                    index_in_indices,
    DNX_SAND_OUT DNX_SAND_SORTED_LIST_ITER *iter
  ) ;
/*********************************************************************
* NAME:
*     dnx_sand_sorted_list_get_index_from_iter
* TYPE:
*   PROC
* DATE:
*   Dec 06 2015
* FUNCTION:
*  Given index on array of available linked list elements for this
*  linked list, get index within 'indices' (which is the ordinal
*  location of a sorted linked list element, starting from low key
*  value).
* INPUT:
*   DNX_SAND_IN  int                              unit -
*     Identifier of the device to access.
*   DNX_SAND_IN  DNX_SAND_SORTED_LIST_PTR         sorted_list -
*     Handle to the sorted list.
*   DNX_SAND_IN DNX_SAND_SORTED_LIST_ITER         iter -
*     Index (location) on array of available linked list elements
*     for this linked list
*   DNX_SAND_OUT  uint32                          *index_in_indices -
*     Index on 'indices' array corresponding to index on array
*     of available link-list elements (iter). If no matching index
*     is found, return '-1'
*     Only meaningful if the 'indices' feature is enabled ('indices'
*     element in DNX_SAND_SORTED_LIST_T is allocated).
* REMARKS:
*   Use dnx_sand_sorted_list_entry_value() to get 'key' or 'data'
*   of corresponding linked list element.
*   See 
* RETURNS:
*     OK or ERROR indication.
*********************************************************************/
uint32
  dnx_sand_sorted_list_get_index_from_iter(
    DNX_SAND_IN  int                       unit,
    DNX_SAND_IN  DNX_SAND_SORTED_LIST_PTR  sorted_list,
    DNX_SAND_IN  DNX_SAND_SORTED_LIST_ITER iter,
    DNX_SAND_OUT uint32                    *index_in_indices
  ) ;
/* } */
#include <soc/dnx/legacy/SAND/Utils/sand_footer.h>
/* } */   /* FUNCTIONS */
/* } DNX_SAND_SORTED_LIST_H_INCLUDED*/
#endif


