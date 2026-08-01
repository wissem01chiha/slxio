// SPDX-FileCopyrightText: 2026 Wissem Chiha <chihawissem08@gmail.com>
// SPDX-License-Identifier: BSD-2-Clause

#include "tex.h"
#include <stdlib.h>
#include <time.h>

const char *tex_get_date(tex_error_t *err)
{
  static char buffer[64];
  time_t      t;
  struct tm  *tm_info;

  t = time(NULL);
  if (t == ((time_t) -1))
  {
    *err = TEX_EFAIL_FOPEN;
    return NULL;
  }

  tm_info = localtime(&t);
  if (tm_info == NULL)
  {
    *err = TEX_EFAIL_FOPEN;
    return NULL;
  }

  if (strftime(buffer, sizeof(buffer), "%Y-%m-%d", tm_info) == 0)
  {
    *err = TEX_EFAIL_FOPEN;
    return NULL;
  }

  *err = TEX_ENONE;
  return buffer;
}
