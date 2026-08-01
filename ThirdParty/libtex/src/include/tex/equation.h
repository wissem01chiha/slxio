// SPDX-FileCopyrightText: 2026 Wissem Chiha <chihawissem08@gmail.com>
// SPDX-License-Identifier: BSD-2-Clause

#pragma once

#include "texerrno.h"
#include "texexport.h"

#ifdef __cplusplus
extern "C"
{
#endif

  typedef struct tex_equation tex_equation;

  tex_equation *equation_create(int *err);
  tex_error_t   equation_delete(tex_equation *eq);

  tex_error_t equation_set_content(tex_equation *eq, const char *content);
  tex_error_t equation_set_label(tex_equation *eq, const char *label);
  tex_error_t
  equation_write(const tex_equation *eq, char *buffer, size_t buffer_size);

#ifdef __cplusplus
}; /* extern "C" { */
#endif