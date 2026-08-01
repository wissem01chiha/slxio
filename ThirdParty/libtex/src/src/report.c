// SPDX-FileCopyrightText: 2026 Wissem Chiha <chihawissem08@gmail.com>
// SPDX-License-Identifier: BSD-2-Clause

#include "tex.h"

tex_report *report_create(int err)
{
  tex_report *report = (tex_report *) malloc(sizeof(tex_report));
  if (!report)
  {
    err = TEX_EFAIL_MEMALLOC;
    return NULL;
  }
  report->document                  = NULL;
  report->abstract                  = NULL;
  report->include_table_of_contents = 0;
  report->include_list_of_figures   = 0;
  report->include_list_of_tables    = 0;
  report->language                  = 0;
  return report;
}
tex_error_t report_delete(tex_report *report)
{
  if (!report)
    return TEX_ENULL_REPORT;
  free(report->abstract);
  free(report);
  return TEX_ENONE;
}