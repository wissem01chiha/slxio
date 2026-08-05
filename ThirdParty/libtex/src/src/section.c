// SPDX-FileCopyrightText: 2026 Wissem Chiha <chihawissem08@gmail.com>
// SPDX-License-Identifier: BSD-2-Clause

#include "tex.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

tex_section *section_create(tex_error_t *err)
{
  tex_section *sec = calloc(1, sizeof(tex_section));
  if (sec == NULL)
  {
    *err = TEX_EFAIL_MEMALLOC;
    return NULL;
  }
  sec->title    = NULL;
  sec->level    = Section;
  sec->next     = NULL;
  sec->elements = NULL;
  *err          = TEX_ENONE;
  return sec;
}

tex_error_t section_delete(tex_section *sec)
{
  if (sec == NULL)
  {
    return TEX_ENULL_SECTION;
  }
  if (sec->title != NULL)
  {
    free(sec->title);
  }
  if (element_delete(sec->elements) != TEX_ENONE)
  {
    return element_delete(sec->elements);
  }
  free(sec);
  return TEX_ENONE;
}

tex_section *section_find_subsection(tex_section *sec, const char *sectitle)
{
  if (sec == NULL)
  {
    return NULL;
  }
  if (sectitle == NULL)
  {
    return NULL;
  }
  return NULL;
}

tex_error_t section_add_content(tex_section *sec, tex_content *content)
{
  if (sec == NULL)
  {
    return TEX_ENULL_SECTION;
  }
  if (content == NULL)
  {
    return TEX_ENULL_ELEMENT;
  }

  tex_error_t  err = TEX_ENONE;
  tex_element *ele = element_create(&err);
  if (err != TEX_ENONE || ele == NULL)
  {
    return err;
  }

  ele->type = TEX_ELE_CONTENT;
  ele->data = content;
  ele->next = NULL;

  if (!sec->elements)
  {
    sec->elements = ele;
  }
  else
  {
    tex_element *cur = sec->elements;
    while (cur->next)
    {
      cur = cur->next;
    }
    cur->next = ele;
  }

  return TEX_ENONE;
}

tex_content *section_get_content(tex_section *sec)
{
  if (!sec)
  {
    return NULL;
  }

  tex_content *head = NULL;
  tex_content *tail = NULL;

  tex_element *cur = sec->elements;
  while (cur)
  {
    if (cur->type == TEX_ELE_CONTENT && cur->data)
    {
      tex_content *cont = (tex_content *) cur->data;
      tex_content *node = (tex_content *) malloc(sizeof(tex_content));
      if (!node)
      {
        return head;
      }
      node->data = cont->data;
      node->next = NULL;

      if (!head)
      {
        head = node;
        tail = node;
      }
      else
      {
        tail->next = node;
        tail       = node;
      }
    }
    cur = cur->next;
  }

  return head;
}

tex_error_t section_add_list(tex_section *sec, tex_list *lst)
{
  if (sec == NULL)
  {
    return TEX_ENULL_SECTION;
  }
  if (lst == NULL)
  {
    return TEX_ENULL_LIST;
  }
  return TEX_ENONE;
}

tex_error_t section_add_fs_content(tex_section *sec, const char *filename)
{
  if (sec == NULL)
  {
    return TEX_ENULL_SECTION;
  }
  if (filename == NULL)
  {
    return TEX_EINVAL_INPUT;
  }
  return TEX_ENONE;
}

tex_error_t section_add_figure(tex_section *sec, tex_figure *fig)
{
  if (fig == NULL)
  {
    return TEX_ENULL_FIGURE;
  }
  if (sec == NULL)
  {
    return TEX_ENULL_SECTION;
  }
  tex_error_t  err = TEX_ENONE;
  tex_element *ele = element_create(&err);
  if (err == TEX_ENONE)
  {
    // nothing happened
    ele->type = TEX_ELE_FIGURE;
    ele->data = fig;
    // append to elements list
    if (!sec->elements)
    {
      sec->elements = ele;
    }
    else
    {
      tex_element *cur = sec->elements;
      while (cur->next)
        cur = cur->next;
      cur->next = ele;
    }
  }
  else
  {
    return err;
  }

  return TEX_ENONE;
}

int section_write(const tex_section *sec,
                  char              *buffer,
                  size_t             buffer_size,
                  tex_error_t       *err)
{
  if (buffer == NULL)
  {
    *err = TEX_EINVAL_INPUT;
  }
  if (sec == NULL)
  {
    *err = TEX_ENULL_SECTION;
  }

  size_t written = 0;
  int    n       = 0;

  // write section header
  const char *fmt = NULL;
  switch (sec->level)
  {
    case Chapter:
      fmt = "\\chapter{%s}\n";
      break;
    case Section:
      fmt = "\\section{%s}\n";
      break;
    case Subsection:
      fmt = "\\subsection{%s}\n";
      break;
    case Subsubsection:
      fmt = "\\subsubsection{%s}\n";
      break;
    default:
      fmt = "\\section*{%s}\n";
      break;
  }

  n = snprintf(buffer + written, buffer_size - written, fmt, sec->title);

  if (n < 0 || (size_t) n >= buffer_size - written)
  {
    *err = TEX_EOVERFLOW_BUFFER;
  }
  written += n;

  // iterate over elements list
  tex_element *cur = sec->elements;
  while (cur)
  {
    n = element_write(cur, buffer + written, buffer_size - written, err);
    if (n < 0)
      return -1;
    written += n;
    cur = cur->next;
  };

  // handle substections
  if (sec->subsection != NULL)
  {
    int written_subs = section_write(
        sec->subsection, buffer + written, buffer_size - written, err);
    written += written_subs;
  }

  // sibling sections
  if (sec->next != NULL)
  {
    int written_next =
        section_write(sec->next, buffer + written, buffer_size - written, err);
    written += written_next;
  }
  return written;
}
