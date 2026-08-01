/// SPDX-FileCopyrightText: 2026 Wissem Chiha <chihawissem08@gmail.com>
// SPDX-License-Identifier: BSD-2-Clause

#include "tex.h"
#include <string.h>
#include <unistd.h>

tex_error_t tex_cwd(char *buffer, size_t *size)
{
  if (buffer == NULL || size == NULL)
  {
    return TEX_EINVAL_INPUT;
  }
  if (getcwd(buffer, *size) == NULL)
  {
    if (errno == ERANGE)
    {
      return TEX_EOVERFLOW_BUFFER;
    }
    return TEX_EFAIL_GETCWD;
  }
  *size = strlen(buffer);
  return TEX_ENONE;
}