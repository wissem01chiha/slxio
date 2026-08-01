// SPDX-FileCopyrightText: 2026 Wissem Chiha <chihawissem08@gmail.com>
// SPDX-License-Identifier: BSD-2-Clause

#pragma once

#include "texerrno.h"
#include "texexport.h"

#ifdef __cplusplus
extern "C"
{
#endif
  // supported lanagues types
  typedef enum tex_language_t
  {
    English    = 0,
    French     = 1,
    German     = 2,
    Spanish    = 3,
    Italian    = 4,
    Portuguese = 5,
    Dutch      = 6,
    Russian    = 7,
    Chinese    = 8,
    Japanese   = 9,
    Arabic     = 10
  } tex_language_t;

  TEX_EXTERN const char *tex_language_to_string(tex_language_t lang);

#ifdef __cplusplus
};
#endif
