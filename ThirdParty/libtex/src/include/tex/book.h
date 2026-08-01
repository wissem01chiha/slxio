// SPDX-FileCopyrightText: 2026 Wissem Chiha <chihawissem08@gmail.com>
// SPDX-License-Identifier: BSD-2-Clause

#pragma once

#include "document.h"
#include "texerrno.h"
#include "section.h"
#include "texexport.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C"
{
#endif

  typedef struct tex_book tex_book;

  struct tex_book
  {
    tex_document *document;
    const char   *abstract;
    tex_section  *appendices[10];
    bool          toc;
    bool          lof;
    bool          lot;
    bool          index;
  };

  tex_book *book_create(tex_error_t *err);

  /* Inherited member functions from text_document */
  tex_error_t book_set_title(tex_book *doc, const char *title);
  tex_error_t book_set_author(tex_book *doc, const char *author);
  tex_error_t book_set_date(tex_book *doc, const char *date);
  tex_error_t book_set_language(tex_book *doc, tex_language_t language);
  tex_error_t book_add_content(tex_book *doc, const char *content);
  tex_error_t book_add_section(tex_book *doc, const tex_section *sec);

  tex_error_t
  book_add_package(tex_book *doc, const char *package, const char *options);

#ifdef __cplusplus
}; /* extern "C" { */
#endif
