// SPDX-FileCopyrightText: 2026 Wissem Chiha <chihawissem08@gmail.com>
// SPDX-License-Identifier: BSD-2-Clause

#pragma once

#include "document.h"
#include "texerrno.h"

#ifdef __cplusplus
extern "C"
{
#endif

  typedef struct tex_report tex_report;

  struct tex_report
  {
    tex_document *document;
    char         *abstract;
    int           include_table_of_contents;
    int           include_list_of_figures;
    int           include_list_of_tables;
    int           language;
  };

  tex_report *report_create(int err);
  tex_error_t report_delete(tex_report *report);

  tex_error_t report_set_abstract(tex_report *report, const char *abstract);
  tex_error_t report_include_table_of_contents(tex_report *report, int include);
  tex_error_t report_include_list_of_figures(tex_report *report, int include);
  tex_error_t report_include_list_of_tables(tex_report *report, int include);

  tex_error_t report_set_language(tex_report *report, int language);
  tex_error_t
  report_generate(tex_report *report, char **output, size_t *output_size);

#ifdef __cplusplus
};
#endif
