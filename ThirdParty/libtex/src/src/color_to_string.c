// SPDX-FileCopyrightText: 2026 Wissem Chiha <chihawissem08@gmail.com>
// SPDX-License-Identifier: BSD-2-Clause

#include "tex.h"
#include <stdlib.h>
#include <string.h>

const char *tex_color_to_string(tex_color_theme_t col)
{
  switch (col)
  {
    case Default_color:
      return "default";
    case Beaver:
      return "beaver";
    case Crane:
      return "crane";
    case Dolphin:
      return "dolphin";
    case Dove:
      return "dove";
    case Fly:
      return "fly";
    case Seagull:
      return "seagull";
    case Wolverine:
      return "wolverine";
    default:
      return "";
  }
}
