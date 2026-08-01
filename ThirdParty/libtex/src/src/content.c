// SPDX-FileCopyrightText: 2026 Wissem Chiha <chihawissem08@gmail.com>
// SPDX-License-Identifier: BSD-2-Clause

#include "tex.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

tex_content *content_create(tex_error_t *err)
{
  tex_content *cont = (tex_content *) malloc(sizeof(tex_content));
  if (!cont)
  {
    if (err)
      *err = TEX_EFAIL_MEMALLOC;
    return NULL;
  }
  cont->data = NULL;
  cont->next = NULL;

  if (err)
    *err = TEX_ENONE;
  return cont;
}

tex_error_t content_delete(tex_content *cont)
{
  if (!cont)
  {
    return TEX_ENULL_CONTENT;
  }

  if (cont->data)
  {
    free(cont->data);
    cont->data = NULL;
  }

  free(cont);
  return TEX_ENONE;
}

tex_error_t content_add(tex_content *cont, const char *_data)
{
  if (!cont)
  {
    return TEX_ENULL_CONTENT;
  }
  if (!_data)
  {
    return TEX_EINVAL_INPUT;
  }

  const char *_fmtdata = content_format_string(_data);

  size_t len  = cont->data ? strlen(cont->data) : 0;
  size_t nlen = strlen(_fmtdata);

  char *buff = malloc(len + nlen + 1);
  if (!buff)
  {
    return TEX_EFAIL_MEMALLOC;
  }

  if (cont->data)
  {
    memcpy(buff, cont->data, len);
    free(cont->data);
  }

  memcpy(buff + len, _fmtdata, nlen);
  buff[len + nlen] = '\0';

  cont->data = buff;
  return TEX_ENONE;
}

tex_error_t content_fs_add(tex_content *cont, const char *filename)
{
  if (cont == NULL)
  {
    return TEX_ENULL_CONTENT;
  }
  if (filename == NULL)
  {
    return TEX_ENULL_FILEPATH;
  }

  FILE *f = fopen(filename, "rb");
  if (f == NULL)
  {
    return TEX_EFAIL_FOPEN;
  }
  fseek(f, 0, SEEK_END);
  long fsize = ftell(f);
  fseek(f, 0, SEEK_SET);
  char *buffer = malloc(fsize + 1);
  if (buffer == NULL)
  {
    return TEX_EFAIL_MEMALLOC;
  }
  size_t read  = fread(buffer, 1, fsize, f);
  buffer[read] = '\0';
  fclose(f);
  tex_error_t err = TEX_ENONE;
  err             = content_add(cont, buffer);
  if (err != TEX_ENONE)
  {
    return err;
  };
  free(buffer);
  return TEX_ENONE;
}

const char *content_format_string(const char *_data)
{
  if (_data == NULL)
  {
    return NULL;
  }
  size_t len = strlen(_data);
  // every char replaced by max 12 chars , increase if needed
  char *buffer = (char *) malloc(len * 12 + 1);
  if (!buffer)
  {
    return NULL;
  }
  const char *src = _data;
  char       *dst = buffer;
  while (*src)
  {
    switch (*src)
    {
      case '_':
        dst += sprintf(dst, "\\_");
        break;
      case '%':
        dst += sprintf(dst, "\\%%");
        break;
      case '&':
        dst += sprintf(dst, "\\&");
        break;
      case '$':
        dst += sprintf(dst, "\\$");
        break;
      case '#':
        dst += sprintf(dst, "\\#");
        break;
      case '{':
        dst += sprintf(dst, "\\{");
        break;
      case '}':
        dst += sprintf(dst, "\\}");
        break;
      case '~':
        dst += sprintf(dst, "\\textasciitilde");
        break;
      case '^':
        dst += sprintf(dst, "\\textasciicircum");
        break;
      case '\\':
        dst += sprintf(dst, "\\textbackslash");
        break;
      default:
        *dst++ = *src;
        break;
    }
    src++;
  }

  *dst = '\0';
  return buffer;
}

char *content_to_string(const tex_content *cont, tex_error_t *err)
{
  if (!cont)
  {
    if (err)
      *err = TEX_ENULL_CONTENT;
    return NULL;
  }

  size_t             total_len = 0;
  const tex_content *cur       = cont;
  while (cur)
  {
    if (cur->data)
    {
      total_len += strlen(cur->data);
    }
    cur = cur->next;
  }

  char *result = malloc(total_len + 1);
  if (!result)
  {
    if (err)
      *err = TEX_EFAIL_MEMALLOC;
    return NULL;
  }
  result[0] = '\0';

  cur = cont;
  while (cur)
  {
    if (cur->data)
    {
      strcat(result, cur->data);
    }
    cur = cur->next;
  }

  if (err)
    *err = TEX_ENONE;
  return result;
}

int content_write(const tex_content *cont,
                  char              *buffer,
                  size_t             buffer_size,
                  tex_error_t       *err)
{
  if (!cont)
  {
    if (err)
      *err = TEX_ENULL_CONTENT;
    return -1;
  }
  if (!buffer)
  {
    if (err)
      *err = TEX_ENULL_BUFFER;
    return -1;
  }
  if (!cont->data)
  {
    if (err)
      *err = TEX_EINVAL_INPUT;
    return -1;
  }

  int written = snprintf(buffer, buffer_size, "%s\n", cont->data);

  if (written < 0)
  {
    if (err)
      *err = TEX_EWRITE_FAIL;
    return -1;
  }
  if ((size_t) written >= buffer_size)
  {
    if (err)
      *err = TEX_EOVERFLOW_BUFFER;
    return -1;
  }

  if (err)
    *err = TEX_ENONE;
  return written;
}
