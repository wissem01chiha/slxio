// SPDX-FileCopyrightText: 2026 Wissem Chiha <chihawissem08@gmail.com>
// SPDX-License-Identifier: BSD-2-Clause

#pragma once

#include "texerrno.h"
#include "texexport.h"
#include "package.h"

#ifdef __cplusplus
extern "C"
{
#endif

  typedef enum tex_language_t tex_language_t;

  enum tex_language_t
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
  };

  /**
   * Return a string based representtaion of the language type
   */
  TEX_EXTERN const char *tex_language_to_string(tex_language_t lang);

  /**
   * This function compute the required tex_package based object
   * given the langauge type selected and the latex engine for supported
   * langauges, note that this is an internal API routine not intended to
   * use by end users
   */
  TEX_EXTERN tex_package *language_package(tex_language_t lang,
                                           tex_error_t   *err);

#ifdef __cplusplus
};
#endif
