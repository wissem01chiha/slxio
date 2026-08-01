// SPDX-FileCopyrightText: 2026 Wissem Chiha <chihawissem08@gmail.com>
// SPDX-License-Identifier: BSD-2-Clause

#pragma once

#include <stddef.h>

#ifdef __cplusplus
extern "C"
{
#endif

  typedef enum tex_theorem_t
  {
    THEOREM        = 0,
    LEMMA          = 1,
    PROPOSITION    = 2,
    COROLLARY      = 3,
    DEFINITION     = 4,
    EXAMPLE        = 5,
    REMARK         = 6,
    PROOF          = 7,
    CUSTOM_THEOREM = 8
  } tex_theorem_t;

  typedef struct
  {
    tex_theorem_t type;
    const char   *title;
    const char   *content;
  } tex_theorem;

  tex_theorem *theorem_create(const char *title, tex_theorem_t type, int *err);
  int          theorem_delete(tex_theorem *th);

  int theorem_set_content(tex_theorem *th, const char *content);
  int theorem_set_title(tex_theorem *th, const char *title);

  int theorem_write(const tex_theorem *th, char *buffer, size_t buffer_size);

#ifdef __cplusplus
}; /* extern "C" { */
#endif
