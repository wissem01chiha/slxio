// SPDX-FileCopyrightText: 2026 Wissem Chiha <chihawissem08@gmail.com>
// SPDX-License-Identifier: BSD-2-Clause

#include "tex.h"
#include <stdlib.h>
#include <time.h>

const char *tex_get_time(tex_error_t *err)
{
  static char buffer[9];
  time_t      rawtime;
  struct tm  *timeinfo;

  if (err == NULL)
  {
    return NULL;
  }

  rawtime = time(NULL);
  if (rawtime == (time_t) (-1))
  {
    *err = TEX_EFAIL_TIME;
    return NULL;
  }

  timeinfo = localtime(&rawtime);
  if (timeinfo == NULL)
  {
    *err = TEX_EFAIL_LOCALTIME;
    return NULL;
  }

  if (strftime(buffer, sizeof(buffer), "%H:%M:%S", timeinfo) == 0)
  {
    *err = TEX_EOVERFLOW_BUFFER;
    return NULL;
  }

  *err = TEX_ENONE;
  return buffer;
}