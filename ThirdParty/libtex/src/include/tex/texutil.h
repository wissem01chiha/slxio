// SPDX-FileCopyrightText: 2026 Wissem Chiha <chihawissem08@gmail.com>
// SPDX-License-Identifier: BSD-2-Clause

#pragma once

#include "texerrno.h"
#include "texexport.h"

#ifdef __cplusplus
extern "C"
{
#endif
  /**
   * Get the username of the user running the program.
   */
  TEX_EXTERN const char *tex_get_username(tex_error_t *err);

  /**
   * Get the current system date formatted as YYYY-MM-DD
   * (e.g., "2026-07-18").
   */
  TEX_EXTERN const char *tex_get_date(tex_error_t *err);

  /**
   * Get the current local time formatted as HH:MM:SS.
   */
  TEX_EXTERN const char *tex_get_time(tex_error_t *err);

  /**
   * A wrapper around strdup for cross-platform use.
   */
  TEX_EXTERN char *tex_strdup(const char *str);

  /**
   * Returns the error message for the given error code.
   */
  TEX_EXTERN const char *tex_strerr(tex_error_t err);

  /**
   * Get filename from a full file path string
   */
  TEX_EXTERN const char *get_filename(const char *path);

  /**
   * Get the current working directory
   */
  TEX_EXTERN tex_error_t tex_cwd(char *buffer, size_t *size);

#ifdef __cplusplus
};
#endif
