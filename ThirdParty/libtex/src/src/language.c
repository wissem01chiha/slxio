// SPDX-FileCopyrightText: 2026 Wissem Chiha <chihawissem08@gmail.com>
// SPDX-License-Identifier: BSD-2-Clause

#include "tex.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char *tex_language_to_string(tex_language_t lang)
{
  switch (lang)
  {
    case English:
      return "english";
    case French:
      return "french";
    case German:
      return "german";
    case Spanish:
      return "spanish";
    case Italian:
      return "italian";
    case Portuguese:
      return "portuguese";
    case Dutch:
      return "dutch";
    case Russian:
      return "russian";
    case Chinese:
      return "chinese";
    case Japanese:
      return "japanese";
    case Arabic:
      return "arabic";
    default:
      return "english";
  }
}
