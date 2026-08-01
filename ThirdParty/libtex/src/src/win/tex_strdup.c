// SPDX-FileCopyrightText: 2026 Wissem Chiha <chihawissem08@gmail.com>
// SPDX-License-Identifier: BSD-2-Clause

#include "tex.h"
#include <string.h>
#include <stdlib.h>

#include <string.h>
#include <stdlib.h>

char *tex_strdup(const char *str)
{
#ifdef _MSC_VER
  return _strdup(str);
#else
  return strdup(str);
#endif
}
