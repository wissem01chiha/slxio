// SPDX-FileCopyrightText: 2026 Wissem Chiha <chihawissem08@gmail.com>
// SPDX-License-Identifier: BSD-2-Clause

#include "tex.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

tex_error_t article_enable_index(tex_article *doc)
{
  return TEX_ENONE;
}

tex_article *article_create(tex_error_t *err)
{
  return NULL;
}

tex_error_t article_delete(tex_article *art)
{
  return TEX_ENONE;
}
tex_error_t article_set_title(tex_article *doc, const char *title)
{
  return TEX_ENONE;
}

tex_error_t article_set_author(tex_article *doc, const char *author)
{
  return TEX_ENONE;
}

tex_error_t article_set_date(tex_article *doc, const char *date)
{
  return TEX_ENONE;
}

tex_error_t article_set_language(tex_article *doc, tex_language_t language)
{
  return TEX_ENONE;
}

tex_error_t article_add_content(tex_article *doc, const char *content)
{
  return TEX_ENONE;
}

tex_error_t article_add_section(tex_article *doc, const tex_section *sec)
{
  return TEX_ENONE;
}
