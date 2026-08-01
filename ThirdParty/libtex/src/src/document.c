// SPDX-FileCopyrightText: 2026 Wissem Chiha <chihawissem08@gmail.com>
// SPDX-License-Identifier: BSD-2-Clause

#include "tex.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

tex_document *document_create(tex_error_t *err)
{
  tex_document *doc = calloc(1, sizeof(tex_document));
  if (doc == NULL)
  {
    if (err)
      *err = TEX_EFAIL_MEMALLOC;
    return NULL;
  }

  doc->type     = Article;
  doc->language = English;
  doc->title    = NULL;
  doc->author   = NULL;
  doc->date     = NULL;
  doc->elements = NULL;
  if (err)
    *err = TEX_ENONE;
  return doc;
}

tex_error_t document_delete(tex_document *doc)
{
  if (doc == NULL)
  {
    return TEX_ENULL_DOCUMENT;
  }
  free(doc->title);
  free(doc->author);
  free(doc->date);
  free(doc);
  return TEX_ENONE;
}

tex_error_t document_set_class(tex_document *doc, tex_document_t doc_t)
{
  if (doc == NULL)
  {
    return TEX_ENULL_DOCUMENT;
  }
  doc->type = doc_t;
  return TEX_ENONE;
}

tex_error_t document_set_title(tex_document *doc, const char *title)
{
  if (doc == NULL)
  {
    return TEX_ENULL_DOCUMENT;
  }
  doc->title = tex_strdup(title);
  return TEX_ENONE;
}

tex_error_t document_set_author(tex_document *doc, const char *author)
{
  if (doc == NULL || author == NULL)
  {
    return TEX_ENULL_DOCUMENT;
  }
  doc->author = tex_strdup(author);
  return TEX_ENONE;
}

tex_error_t document_set_date(tex_document *doc, const char *date)
{
  if (doc == NULL)
  {
    return TEX_ENULL_DOCUMENT;
  }
  if (date == NULL)
  {
    return TEX_EINVAL_INPUT;
  }
  doc->date = tex_strdup(date);
  return TEX_ENONE;
}

tex_error_t document_set_language(tex_document *doc, tex_language_t language)
{
  if (doc == NULL)
  {
    return TEX_ENULL_DOCUMENT;
  }
  doc->language = language;
  return TEX_ENONE;
}

tex_error_t document_add_content(tex_document *doc, tex_content *content)
{
  if (doc == NULL)
  {
    return TEX_ENULL_DOCUMENT;
  }
  if (content == NULL)
  {
    return TEX_ENULL_CONTENT;
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

  if (!doc->elements)
  {
    doc->elements = ele;
  }
  else
  {
    tex_element *cur = doc->elements;
    while (cur->next)
    {
      cur = cur->next;
    }
    cur->next = ele;
  }

  return TEX_ENONE;
}

tex_error_t document_add_fs_content(tex_document *doc, const char *filename)
{
  if (doc == NULL)
  {
    return TEX_ENULL_DOCUMENT;
  }
  tex_error_t  err = TEX_ENONE;
  tex_content *cnt = content_create(&err);
  if (err != TEX_ENONE)
  {
    return err;
  }
  err = content_fs_add(cnt, filename);
  if (err != TEX_ENONE)
  {
    return err;
  };
  tex_error_t errcnt = document_add_content(doc, cnt);
  if (errcnt != TEX_ENONE)
  {
    return errcnt;
  }
  return TEX_ENONE;
}

tex_error_t document_add_figure(tex_document *doc, tex_figure *fig)
{
  if (doc == NULL)
  {
    return TEX_ENULL_DOCUMENT;
  }
  if (fig == NULL)
  {
    return TEX_ENULL_FIGURE;
  }
  tex_error_t  err = TEX_ENONE;
  tex_element *ele = element_create(&err);
  if (err == TEX_ENONE)
  {
    // nothing happened
    ele->type = TEX_ELE_FIGURE;
    ele->data = fig;
    // append to elements list
    if (!doc->elements)
    {
      doc->elements = ele;
    }
    else
    {
      tex_element *cur = doc->elements;
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

TEX_EXTERN tex_error_t document_add_list(tex_document *doc, tex_list *list)
{
  if (doc == NULL)
  {
    return TEX_ENULL_DOCUMENT;
  }
  return TEX_ENONE;
}

tex_error_t document_add_section(tex_document *doc, tex_section *sec)
{
  if (doc == NULL)
  {
    return TEX_ENULL_DOCUMENT;
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
    ele->type = TEX_ELE_SECTION;
    ele->data = sec;
    // append to elements list
    if (!doc->elements)
    {
      doc->elements = ele;
    }
    else
    {
      tex_element *cur = doc->elements;
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

tex_error_t
document_write(const tex_document *doc, char *buffer, size_t buffer_size)
{
  if (doc == NULL)
  {
    return TEX_ENULL_DOCUMENT;
  }
  if (buffer == NULL)
  {
    return TEX_ENULL_BUFFER;
  }
  int         n   = 0;
  tex_error_t err = TEX_ENONE;

  const char *title  = doc->title ? doc->title : "";
  const char *author = doc->author ? doc->author : tex_get_username(&err);
  const char *date   = doc->date ? doc->date : tex_get_date(&err);

  if (err != TEX_ENONE)
  {
    return err;
  }

  int written = snprintf(buffer,
                         buffer_size,
                         "%% LIBTEX generated file: DO NOT EDIT!\n"
                         "%% Generated by LibTEX Version %s \n"
                         "\\documentclass{%s}\n"
                         "%s\n"
                         "\\begin{document}\n"
                         "\\title{%s}\n"
                         "\\author{%s}\n"
                         "\\date{%s}\n"
                         "\\maketitle\n",
                         LIBTEX_VERSION_STRING,
                         document_get_class(doc->type),
                         "\\usepackage[utf8]{inputenc}",
                         title,
                         author,
                         date);

  // iterate over elements list
  tex_element *cur = doc->elements;
  while (cur)
  {
    n = element_write(cur, buffer + written, buffer_size - written, &err);
    if (n < 0)
      return -1;
    written += n;
    cur = cur->next;
  };

  int endwritten =
      snprintf(buffer + written, buffer_size - written, "\\end{document}\n");

  if (endwritten < 0 || (size_t) endwritten >= buffer_size - written)
  {
    return TEX_EOVERFLOW_BUFFER;
  }

  return TEX_ENONE;
}

tex_error_t document_fs_write(const tex_document *doc, const char *filename)
{
  if (doc == NULL)
  {
    return TEX_ENULL_DOCUMENT;
  }
  char        buffer[2048];
  tex_error_t bufferr = document_write(doc, buffer, sizeof(buffer));
  if (bufferr != TEX_ENONE)
  {
    return bufferr;
  }

  FILE *fptr = fopen(filename, "w");
  if (fptr == NULL)
  {
    return TEX_EFAIL_FOPEN;
  }

  if (fputs(buffer, fptr) == EOF)
  {
    fclose(fptr);
    return TEX_EFAIL_FOPEN;
  }

  fclose(fptr);
  return TEX_ENONE;
}

tex_error_t document_fs_write_default(const tex_document *doc)
{
  char        buffer[1024];
  size_t      size   = 1024;
  tex_error_t cwderr = tex_cwd(buffer, &size);
  if (cwderr != TEX_ENONE)
  {
    return cwderr;
  }
  size_t pos = strlen(buffer);
#ifdef _WIN32
  buffer[pos++] = '\\';
#else
  buffer[pos++] = '/';
#endif
  buffer[pos++] = 'm';
  buffer[pos++] = 'a';
  buffer[pos++] = 'i';
  buffer[pos++] = 'n';
  buffer[pos++] = '.';
  buffer[pos++] = 't';
  buffer[pos++] = 'e';
  buffer[pos++] = 'x';
  buffer[pos++] = '\0';

  return document_fs_write(doc, buffer);
}

tex_error_t document_add_package(tex_document *doc, tex_package *package)
{
  if (doc)
  {
    return TEX_ENULL_DOCUMENT;
  }
  if (package)
  {
    return TEX_ENULL_PACKAGE;
  }
  return TEX_ENONE;
}

const char *document_get_class(tex_document_t doc_t)
{
  switch (doc_t)
  {
    case Article:
      return "article";
    case Book:
      return "book";
    case Report:
      return "report";
    case Beamer:
      return "beamer";
    default:
      return "";
  }
}
