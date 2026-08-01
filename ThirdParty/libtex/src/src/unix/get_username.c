/// SPDX-FileCopyrightText: 2026 Wissem Chiha <chihawissem08@gmail.com>
// SPDX-License-Identifier: BSD-2-Clause

#include "tex.h"
#include <pwd.h>
#include <sys/types.h>
#include <unistd.h>

const char *tex_get_username(tex_error_t *err)
{
  uid_t          uid = getuid();
  struct passwd *pw  = getpwuid(uid);
  if (pw == NULL)
  {
    if (err)
      *err = TEX_EFAIL_GETPWUID;
    return "";
  }
  if (err)
    *err = TEX_ENONE;
  return pw->pw_name;
}