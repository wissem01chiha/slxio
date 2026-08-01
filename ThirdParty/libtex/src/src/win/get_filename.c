// SPDX-FileCopyrightText: 2026 Wissem Chiha <chihawissem08@gmail.com>
// SPDX-License-Identifier: BSD-2-Clause

#include "tex.h"
#include <string.h>

const char *get_filename(const char *path)
{
  const char *backslash = strrchr(path, '\\');
  return backslash ? backslash + 1 : path;
}