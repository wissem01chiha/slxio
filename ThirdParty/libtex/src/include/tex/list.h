// SPDX-FileCopyrightText: 2026 Wissem Chiha <chihawissem08@gmail.com>
// SPDX-License-Identifier: BSD-2-Clause

#pragma once

#include "texerrno.h"
#include "texexport.h"
#include "element.h"
#include "content.h"
#include "figure.h"
#include "table.h"

#ifdef __cplusplus
extern "C"
{
#endif

  typedef struct tex_list      tex_list;
  typedef struct tex_list_item tex_list_item;

  typedef enum tex_list_t
  {
    Itemize     = 0,
    Enumerate   = 1,
    Description = 2
  } tex_list_t;

  struct tex_list_item
  {
    tex_element   *elements;
    char          *label;
    tex_list_item *next;
  };

  struct tex_list
  {
    tex_list_t     type;
    tex_list_item *items;
    tex_list      *next;
  };

  /**
   * Create a tex_list_item based object
   * list default type is set to Itemize, to change use *list->type
   */
  TEX_EXTERN tex_list_item *list_item_create(tex_error_t *err);

  /**
   * Delete a tex_list_item based object
   */
  TEX_EXTERN tex_error_t list_item_delete(tex_list_item *itm);

  /**
   * Create a tex_list based object
   * list default type is set to Itemize, to change use *list->type
   */
  TEX_EXTERN tex_list *list_create(tex_error_t *err);

  /**
   * Create a tex_list based object from a json file
   * this function parse a json based file using cJSON and return a tex_list
   * compatibale based object, similar to figure_fs_create
   */
  TEX_EXTERN tex_list *list_fs_json_create(const char  *filename,
                                           tex_error_t *err);

  /**
   * Delete a tex_list based object
   */
  TEX_EXTERN tex_error_t list_delete(tex_list *lst);

  /**
   * Add explicit content from memory to a list item object
   */
  TEX_EXTERN tex_error_t list_item_add_content(tex_list_item *itm,
                                               tex_content   *content);

  /**
   * Add explicit content from filesystem to a list item object
   * this delegates the call to the figure_fs_create routine
   */
  TEX_EXTERN tex_error_t list_item_add_fs_content(tex_list_item *itm,
                                                  const char    *filename);

  /**
   * Add figure to a list item object
   */
  TEX_EXTERN tex_error_t list_item_add_figure(tex_list_item *itm,
                                              tex_figure    *fig);

  /**
   * Add figure to a list item object from a file system object given by it full
   * path, this function dispatch a callback to figure_fs_create routine
   */
  TEX_EXTERN tex_error_t list_item_add_fs_figure(tex_list_item *itm,
                                                 const char    *filename);

  /**
   * Add tex_table based object to a list item object
   */
  TEX_EXTERN tex_error_t list_item_add_table(tex_list_item *itm,
                                             tex_table     *tab);

  /**
   * Add tex_table based object to a list item object, from a file
   * object, officeil supported table file format are *.csv files,
   * other data file formats not yet in plan, this routine dispatch a callback
   * to create_fs_table() function
   */
  TEX_EXTERN tex_error_t list_item_add_fs_table(tex_list_item *itm,
                                                tex_table     *tab);
  /**
   * This function add a the generic type element to the list it can be used
   * instead of list_item_add_table, list_item_add_figure, but with more setup
   * to wrap this objects into an elment based object, the previous api callback
   * relay on this function to reduce biopralte code.
   */
  TEX_EXTERN tex_error_t list_item_add_element(tex_list_item *itm,
                                               tex_element   *ele);

  /**
   * Add a list_item to the given list
   */
  TEX_EXTERN tex_error_t list_add_item(tex_list *lst, tex_list_item *itm);

  /**
   * Write tex_list_item to a memeory buffer, this mainly function a helper
   * for list_write routine , not intended to use by externals
   */
  TEX_EXTERN int list_item_write(const tex_list_item *itm,
                                 char                *buffer,
                                 size_t               buffer_size,
                                 tex_error_t         *err);

  /**
   *  Write list to a memeory buffer
   */
  TEX_EXTERN int list_write(const tex_list *lst,
                            char           *buffer,
                            size_t          buffer_size,
                            tex_error_t    *err);

#ifdef __cplusplus
};
#endif
