// SPDX-FileCopyrightText: 2026 Wissem Chiha <chihawissem08@gmail.com>
// SPDX-License-Identifier: BSD-2-Clause

#pragma once

#include "texerrno.h"
#include "texexport.h"

#ifdef __cplusplus
extern "C"
{
#endif

  typedef struct
  {
    char *caption;
    char *label;

  } tex_algorithm;

  tex_algorithm *algorithm_create(tex_error_t *err);
  tex_error_t    algorithm_delete(tex_algorithm *algorithm);

  void alorithm_set_caption(tex_algorithm *algorithm, const char *caption);
  tex_error_t
  algorithm_add_line(tex_algorithm *algorithm, const char *line, int indent);
  tex_error_t algorithm_add_comment(tex_algorithm *algorithm,
                                    const char    *comment,
                                    int            indent);
  tex_error_t algorithm_add_for_loop(tex_algorithm *algorithm,
                                     const char    *condition,
                                     int            indent);
  tex_error_t algorithm_add_while_loop(tex_algorithm *algorithm,
                                       const char    *condition,
                                       int            indent);
  tex_error_t
  algorithm_add_if(tex_algorithm *algorithm, const char *condition, int indent);
  tex_error_t algorithm_add_else(tex_algorithm *algorithm, int indent);
  tex_error_t algorithm_add_else_if(tex_algorithm *algorithm,
                                    const char    *condition,
                                    int            indent);
  tex_error_t algorithm_add_end(tex_algorithm *algorithm,
                                const char    *statement,
                                int            indent);
  tex_error_t
  algorithm_add_return(tex_algorithm *algorithm, const char *value, int indent);
  tex_error_t algorithm_add_break(tex_algorithm *algorithm, int indent);
  tex_error_t algorithm_add_continue(tex_algorithm *algorithm, int indent);
  tex_error_t algorithm_add_function(tex_algorithm *algorithm,
                                     const char    *name,
                                     const char    *args,
                                     int            indent);
  tex_error_t algorithm_add_function_end(tex_algorithm *algorithm, int indent);

#ifdef __cplusplus
};
#endif
