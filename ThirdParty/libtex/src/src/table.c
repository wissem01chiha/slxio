// SPDX-FileCopyrightText: 2026 Wissem Chiha <chihawissem08@gmail.com>
// SPDX-License-Identifier: BSD-2-Clause

#include "tex.h"
#include <stdlib.h>
#include <string.h>

tex_table_row *tex_table_row_create(tex_error_t *err)
{
  tex_table_row *row = calloc(1, sizeof(tex_table_row));
  *err               = TEX_ENONE;
  return row;
}

tex_table *table_create(tex_error_t *err)
{
  tex_table *tab = calloc(1, sizeof(tex_table));
  if (tab == NULL)
  {
    *err = TEX_EFAIL_MEMALLOC;
  }
  *err = TEX_ENONE;
  return tab;
}

tex_table *create_fs_table(const char *filename, tex_error_t *err)
{
  if (filename == NULL)
  {
    *err = TEX_ENULL_FILEPATH;
    return NULL;
  }
  return NULL;
}

tex_error_t table_delete(tex_table *tab)
{
  if (tab == NULL)
  {
    return TEX_ENULL_TABLE;
  }

  free(tab);
  return TEX_ENONE;
}

tex_error_t table_set_caption(tex_table *tab, const char *caption)
{
  if (tab == NULL)
  {
    return TEX_ENULL_TABLE;
  }

  return TEX_ENONE;
}

tex_error_t table_set_label(tex_table *tab, const char *label)
{
  if (tab == NULL)
  {
    return TEX_ENULL_TABLE;
  }
  if (label == NULL)
  {
    return TEX_ENULL_TABLE_LABEL;
  }

  return TEX_ENONE;
}

int table_write(const tex_table *tab,
                char            *buffer,
                size_t           buffer_size,
                tex_error_t     *err)
{
  return -1;
}