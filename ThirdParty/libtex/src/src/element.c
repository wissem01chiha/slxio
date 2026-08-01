// SPDX-FileCopyrightText: 2026 Wissem Chiha <chihawissem08@gmail.com>
// SPDX-License-Identifier: BSD-2-Clause

#include "tex.h"
#include <stdio.h>
#include <stdlib.h>

tex_element *element_create(tex_error_t *err)
{
  tex_element *el = malloc(sizeof(tex_element));
  if (!el)
  {
    *err = TEX_EFAIL_MEMALLOC;
    return NULL;
  }
  el->next = NULL;
  el->data = NULL;
  return el;
}

TEX_EXTERN tex_error_t element_delete(tex_element *ele)
{
  if (ele == NULL)
  {
    return TEX_ENULL_ELEMENT;
  }
  free(ele->data);
  free(ele->next);
  free(ele);
  return TEX_ENONE;
}

int element_write(const tex_element *element,
                  char              *buffer,
                  size_t             buffer_size,
                  tex_error_t       *err)
{
  switch (element->type)
  {
    case TEX_ELE_CONTENT:
      return content_write(element->data, buffer, buffer_size, err);
    case TEX_ELE_FIGURE:
      return figure_write(element->data, buffer, buffer_size, err);
    case TEX_ELE_LIST:
      return list_write(element->data, buffer, buffer_size, err);
    case TEX_ELE_TABLE:
      return table_write(element->data, buffer, buffer_size, err);
    case TEX_ELE_SECTION:
      return section_write(element->data, buffer, buffer_size, err);
  }
  return -1;
}
