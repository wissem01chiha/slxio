// SPDX-FileCopyrightText: 2026 Wissem Chiha <chihawissem08@gmail.com>
// SPDX-License-Identifier: BSD-2-Clause

#pragma once

#include "texerrno.h"
#include "texexport.h"
#include <stddef.h>

#ifdef __cplusplus
extern "C"
{
#endif
  typedef struct tex_table_row tex_table_row;
  typedef struct tex_table     tex_table;

  struct tex_table_row
  {
    size_t size;
    size_t capacity;
    char  *content;
  };

  struct tex_table
  {
    char          *label;
    char          *caption;
    tex_table_row *row;
    tex_table     *next;
  };

  /**
   * Create a tex_table_row based object
   */
  TEX_EXTERN tex_table_row *tex_table_row_create(tex_error_t *err);

  /**
   * Delete a tex_table_row based object
   */
  TEX_EXTERN tex_error_t tex_table_row_delete(tex_table_row *row);

  /**
   * Create a tex_table based object
   */
  TEX_EXTERN tex_table *table_create(tex_error_t *err);

  /**
   * Create a tex_table form a compatible csv file
   */
  TEX_EXTERN tex_table *create_fs_table(const char *filename, tex_error_t *err);

  /**
   * Delete a tex_table based object
   */
  TEX_EXTERN tex_error_t table_delete(tex_table *tab);

  /**
   *
   */
  TEX_EXTERN tex_error_t table_set_caption(tex_table *tab, const char *caption);

  /**
   *
   */
  TEX_EXTERN tex_error_t table_set_label(tex_table *tab, const char *label);

  /**
   *
   */
  TEX_EXTERN tex_error_t table_add_row(tex_table *tab, tex_table_row *rw);

  /**
   *
   */
  TEX_EXTERN int table_write(const tex_table *tab,
                             char            *buffer,
                             size_t           buffer_size,
                             tex_error_t     *err);

#ifdef __cplusplus
};
#endif
