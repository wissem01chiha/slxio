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
  ele->type     = TEX_ELE_CONTENT;
  ele->data     = content;
  itm->elements = ele;
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
  return TEX_ENONE;
}

tex_error_t list_item_add_fs_table(tex_list_item *itm, tex_table *tab)
{
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
  return 0;
}
