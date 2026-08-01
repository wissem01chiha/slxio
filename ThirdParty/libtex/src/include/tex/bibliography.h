// SPDX-FileCopyrightText: 2026 Wissem Chiha <chihawissem08@gmail.com>
// SPDX-License-Identifier: BSD-2-Clause

#pragma once

#include "texerrno.h"
#include "document.h"
#include <stddef.h>
#include "texexport.h"

#ifdef __cplusplus
extern "C"
{
#endif

  typedef enum tex_bibstyle_t
  {
    PLAIN           = 0,
    ALPHA           = 1,
    ABBRV           = 2,
    ACM             = 3,
    IEEE            = 4,
    APA             = 5,
    CHICAGO         = 6,
    MLA             = 7,
    HARVARD         = 8,
    CUSTOM_BIBSTYLE = 9
  } tex_bibstyle_t;

  typedef enum tex_bib_t
  {
    ARTICLE       = 0,
    BOOK          = 1,
    INPROCEEDINGS = 2,
    TECHREPORT    = 3,
    PHDTHESIS     = 4,
    MASTERSTHESIS = 5,
    MISC          = 6
  } tex_bib_t;

  typedef struct
  {
    int e;
  } tex_bibliography;

  tex_bibliography *bibliography_create(tex_error_t *err);
  tex_error_t       bibliography_delete(tex_bibliography *bibliography);

  tex_error_t bibliography_set_bib_file(tex_bibliography *bibliography,
                                        const char       *bib_file,
                                        int               use_external_file);
  tex_error_t bibliography_add_entry(tex_bibliography *bibliography,
                                     const char       *entry_type,
                                     const char       *key,
                                     const char      **fields,
                                     const char      **values,
                                     size_t            field_count);
  tex_error_t bibliography_set_style(tex_bibliography *bibliography, int style);
  tex_error_t bibliography_set_custom_style(tex_bibliography *bibliography,
                                            const char       *custom_style);
  tex_error_t bibliography_generate(tex_bibliography *bibliography,
                                    const char       *output_dir);

#ifdef __cplusplus
}; /* extern "C" { */
#endif
