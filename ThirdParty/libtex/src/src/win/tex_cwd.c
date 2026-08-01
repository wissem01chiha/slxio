/// SPDX-FileCopyrightText: 2026 Wissem Chiha <chihawissem08@gmail.com>
// SPDX-License-Identifier: BSD-2-Clause

#include "tex.h"
#include <windows.h>

tex_error_t tex_cwd(char *buffer, size_t *size)
{
  if (buffer == NULL || size == NULL)
  {
    return TEX_EINVAL_INPUT;
  }
  DWORD len = GetCurrentDirectory((DWORD) (*size), buffer);
  if (len == 0)
  {
    return TEX_EFAIL_GETCURRENTDIRECTORY;
  }

  if (len >= *size)
  {
    *size = (size_t) len + 1;
    return TEX_EOVERFLOW_BUFFER;
  }

  *size = (size_t) len;
  return TEX_ENONE;
}