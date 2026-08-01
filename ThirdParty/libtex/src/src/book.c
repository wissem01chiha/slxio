// SPDX-FileCopyrightText: 2026 Wissem Chiha <chihawissem08@gmail.com>
// SPDX-License-Identifier: BSD-2-Clause

#include "tex.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

tex_book *book_create(tex_error_t *err)
{
  tex_book *book = malloc(sizeof(tex_book));
  if (book == NULL)
  {
    *err = TEX_EFAIL_MEMALLOC;
    return NULL;
  }
  book->abstract = NULL;
  book->toc      = false;
  book->lof      = false;
  book->lot      = false;
  book->index    = false;
  return book;
}