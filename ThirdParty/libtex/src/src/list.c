// SPDX-FileCopyrightText: 2026 Wissem Chiha <chihawissem08@gmail.com>
// SPDX-License-Identifier: BSD-2-Clause

#include "tex.h"
#include <stdio.h>
#include <stdlib.h>
#include <cJSON/cJSON.h>

tex_list *list_create(tex_error_t *err)
{
  *err           = TEX_ENONE;
  tex_list *list = malloc(sizeof(tex_list));
  if (list == NULL)
  {
    *err = TEX_EFAIL_MEMALLOC;
    return NULL;
  }
  list->next  = NULL;
  list->type  = Itemize;
  list->items = NULL;
  return list;
}

tex_list_item *list_item_create(tex_error_t *err)
{
  tex_list_item *item = malloc(sizeof(tex_list_item));
  if (item == NULL)
  {
    *err = TEX_EFAIL_MEMALLOC;
    return NULL;
  }
  item->elements = NULL;
  item->label    = NULL;
  item->next     = NULL;
  *err           = TEX_ENONE;
  return item;
}

tex_error_t list_item_delete(tex_list_item *itm)
{
  if (itm == NULL)
  {
    return TEX_ENULL_LIST_ITEM;
  }
  free(itm);
  return TEX_ENONE;
}

tex_error_t list_delete(tex_list *lst)
{
  if (lst == NULL)
  {
    return TEX_ENULL_LIST;
  }
  free(lst);
  return TEX_ENONE;
}

tex_list *list_fs_json_create(const char *filename, tex_error_t *err)
{
  if (filename == NULL)
  {
    *err = TEX_ENULL_FILEPATH;
    return NULL;
  }
  tex_error_t lerr = TEX_ENONE;
  // create the list
  tex_list *list = list_create(&lerr);
  if (lerr != TEX_ENONE)
  {
    *err = lerr;
    return NULL;
  }
  FILE *f = fopen(filename, "rb");
  if (f == NULL)
  {
    *err = TEX_EFAIL_FOPEN;
    return NULL;
  }
  fseek(f, 0, SEEK_END);
  long fsize = ftell(f);
  fseek(f, 0, SEEK_SET);
  char *buffer = malloc(fsize + 1);
  if (buffer == NULL)
  {
    *err = TEX_EFAIL_MEMALLOC;
    return NULL;
  }
  size_t read  = fread(buffer, 1, fsize, f);
  buffer[read] = '\0';
  fclose(f);
  // parse the json file
  cJSON *json = cJSON_ParseWithLength(buffer, fsize + 1);
  if (json == NULL)
  {
    *err = TEX_EFAIL_CJSON_PARSEWITHLENGTH;
    return NULL;
  }

  if (json->valuestring != NULL)
  {
    // create a list item
    tex_list_item *item = list_item_create(err);
    if (*err != TEX_ENONE)
    {
      return NULL;
    }
    // create a tex_content
    tex_content *content = content_create(err);
    if (*err != TEX_ENONE)
    {
      return NULL;
    }
    content->data = json->valuestring;
    // add the content to the list item
    *err = list_item_add_content(item, content);
    if (*err != TEX_ENONE)
    {
      return NULL;
    }
  }
  // handle child elements

  // handle next elements
  cJSON_Delete(json);
  free(buffer);
  return list;
}

tex_error_t list_item_add_content(tex_list_item *itm, tex_content *content)
{
  if (itm == NULL)
  {
    return TEX_ENULL_LIST_ITEM;
  }
  if (content == NULL)
  {
    return TEX_ENULL_CONTENT;
  }

  // create a new tex_element
  tex_error_t  err = TEX_ENONE;
  tex_element *ele = element_create(&err);
  if (err != TEX_ENONE)
  {
    return err;
  }
  ele->type = TEX_ELE_CONTENT;
  ele->data = content;

  // if this is the first element to add
  if (itm->elements == NULL)
  {
    itm->elements = ele;
  }
  else
  {
    // not the first need to go throgth elements unit the end to append it
    tex_element *cur = itm->elements;
    while (cur->next)
    {
      cur = cur->next;
    }
    cur->next = ele;
  }
  return TEX_ENONE;
}

tex_error_t list_item_add_fs_content(tex_list_item *itm, const char *filename)
{
  if (itm == NULL)
  {
    return TEX_ENULL_LIST_ITEM;
  }
  // create a new tex_element
  tex_error_t  err = TEX_ENONE;
  tex_element *ele = element_create(&err);
  if (err != TEX_ENONE)
  {
    return err;
  }
  // create a new tex_content
  tex_content *content = content_create(&err);
  if (err != TEX_ENONE)
  {
    return err;
  }
  // add the content from the file
  err = content_fs_add(content, filename);
  if (err != TEX_ENONE)
  {
    return err;
  }
  ele->type     = TEX_ELE_CONTENT;
  ele->data     = content;
  itm->elements = ele;
  return TEX_ENONE;
}

tex_error_t list_item_add_figure(tex_list_item *itm, tex_figure *fig)
{
  if (itm == NULL)
  {
    return TEX_ENULL_LIST_ITEM;
  }
  if (fig == NULL)
  {
    return TEX_ENULL_FIGURE;
  }
  // create a new tex_element
  tex_error_t  err = TEX_ENONE;
  tex_element *ele = element_create(&err);
  if (err != TEX_ENONE)
  {
    return err;
  }
  ele->type     = TEX_ELE_FIGURE;
  ele->data     = fig;
  itm->elements = ele;
  return TEX_ENONE;
}

tex_error_t list_item_add_fs_figure(tex_list_item *itm, const char *filename)
{
  if (itm == NULL)
  {
    return TEX_ENULL_LIST_ITEM;
  }
  // create a new tex_element
  tex_error_t  err = TEX_ENONE;
  tex_element *ele = element_create(&err);
  if (err != TEX_ENONE)
  {
    return err;
  }
  ele->type = TEX_ELE_FIGURE;
  ele->data = figure_fs_create(filename, &err);
  if (err != TEX_ENONE)
  {
    return err;
  }
  itm->elements = ele;
  return TEX_ENONE;
}

tex_error_t list_item_add_fs_table(tex_list_item *itm, tex_table *tab)
{
  if (itm == NULL)
  {
    return TEX_ENULL_LIST_ITEM;
  }
  if (tab == NULL)
  {
    return TEX_ENULL_TABLE;
  }

  return TEX_ENONE;
}

tex_error_t list_item_add_table(tex_list_item *itm, tex_table *tab)
{
  if (itm == NULL)
  {
    return TEX_ENULL_LIST_ITEM;
  }
  if (tab == NULL)
  {
    return TEX_ENULL_TABLE;
  }
  // create a new tex_element
  tex_error_t  err = TEX_ENONE;
  tex_element *ele = element_create(&err);
  if (err != TEX_ENONE)
  {
    return err;
  }
  ele->type     = TEX_ELE_TABLE;
  ele->data     = tab;
  itm->elements = ele;
  return TEX_ENONE;
}

tex_error_t list_add_item(tex_list *lst, tex_list_item *itm)
{
  if (lst == NULL)
  {
    return TEX_ENULL_LIST;
  }
  if (itm == NULL)
  {
    return TEX_ENULL_LIST_ITEM;
  }
  lst->items = itm;
  return TEX_ENONE;
}

int list_item_write(const tex_list_item *itm,
                    char                *buffer,
                    size_t               buffer_size,
                    tex_error_t         *err)
{
  int written = 0;
  int total   = 0;

  if (itm == NULL)
  {
    *err = TEX_ENULL_LIST_ITEM;
    return -1;
  }

  if (buffer == NULL)
  {
    *err = TEX_ENULL_BUFFER;
    return -1;
  }

  if (itm->label != NULL)
  {
    written = snprintf(buffer, buffer_size, "\\item[%s] ", itm->label);
  }
  else
  {
    written = snprintf(buffer, buffer_size, "\\item ");
  }

  if (written < 0 || (size_t) written >= buffer_size)
  {
    *err = TEX_EOVERFLOW_BUFFER;
    return -1;
  }

  total += written;

  tex_element *cur = itm->elements;

  while (cur != NULL)
  {
    written = element_write(cur, buffer + total, buffer_size - total, err);

    if (written < 0)
    {
      return -1;
    }

    total += written;
    cur = cur->next;
  }

  return total;
}

int list_write(const tex_list *lst,
               char           *buffer,
               size_t          buffer_size,
               tex_error_t    *err)
{
  if (lst == NULL)
  {
    *err = TEX_ENULL_LIST;
  }
  if (buffer == NULL)
  {
    *err = TEX_ENULL_BUFFER;
  }

  // write the list header
  const char *begin_fmt = NULL;
  const char *end_fmt   = NULL;

  switch (lst->type)
  {
    case Itemize:
      begin_fmt = "\\begin{itemize}\n";
      end_fmt   = "\\end{itemize}\n";
      break;
    case Description:
      begin_fmt = "\\begin{description}\n";
      end_fmt   = "\\end{description}\n";
      break;
    case Enumerate:
      begin_fmt = "\\begin{enumerate}\n";
      end_fmt   = "\\end{enumerate}\n";
      break;
  }

  int written = snprintf(buffer, buffer_size, "%s", begin_fmt);

  // write list items
  tex_list_item *curr = lst->items;
  while (curr != NULL)
  {
    int n = list_item_write(curr, buffer + written, buffer_size - written, err);
    written += n;
    curr = curr->next;
  }

  // handle adjcent lists
  if (lst->next != NULL)
  {
    int written_next =
        list_write(lst->next, buffer + written, buffer_size - written, err);
    written += written_next;
  }
  // write end header
  written += snprintf(buffer + written, buffer_size - written, "%s", end_fmt);

  return written;
}
