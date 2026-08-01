// SPDX-FileCopyrightText: 2026 Wissem Chiha <chihawissem08@gmail.com>
// SPDX-License-Identifier: BSD-2-Clause

#pragma once

#include "texerrno.h"

#ifdef __cplusplus
extern "C"
{
#endif

  typedef enum tex_color_theme_t
  {
    Default_color = 0,
    Beaver        = 1,
    Crane         = 2,
    Dolphin       = 3,
    Dove          = 4,
    Fly           = 5,
    Seagull       = 6,
    Wolverine     = 7
  } tex_color_theme_t;

  TEX_EXTERN const char *tex_color_to_string(tex_color_theme_t col);

#ifdef __cplusplus
};
#endif