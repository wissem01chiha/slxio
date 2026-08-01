// SPDX-FileCopyrightText: 2026 Wissem Chiha <chihawissem08@gmail.com>
// SPDX-License-Identifier: BSD-2-Clause

#include "tex.h"
#include <Lmcons.h>
#include <windows.h>

#ifdef _MSC_VER
#  define strdup _strdup
#endif

const char *tex_get_username(tex_error_t *err)
{
  static char username[UNLEN + 1];
  DWORD       username_len = UNLEN + 1;
  if (!GetUserName(username, &username_len))
  {
    *err = TEX_EFAIL_GETUSERNAME;
    return "";
  }
  *err = TEX_ENONE;
  return username;
}
