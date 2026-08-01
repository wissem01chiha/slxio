// SPDX-FileCopyrightText: 2026 Wissem Chiha <chihawissem08@gmail.com>
// SPDX-License-Identifier: BSD-2-Clause

#pragma once

#include "texconf.h"

#ifndef TEX_EXTERN
#  ifdef _WIN32
#    if defined(TEX_BUILD_SHARED)
/* Building shared library. */
#      define TEX_EXTERN __declspec(dllexport)
#    elif defined(USING_TEX_SHARED)
/* Using shared library. */
#      define TEX_EXTERN __declspec(dllimport)
#    else
/* Building static library. */
#      define TEX_EXTERN
#    endif
#  elif defined(__GNUC__)
#    define TEX_EXTERN __attribute__((visibility("default")))
#  else
#    define TEX_EXTERN
#  endif
#endif /* TEX_EXTERN */