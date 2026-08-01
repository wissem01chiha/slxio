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
    char *name;
  } tex_environment;

  int environment_create(const char *name, tex_environment **env, int err);
  int environment_delete(tex_environment *env);

  int environment_begin_write(const tex_environment *env,
                              char                  *buffer,
                              size_t                 buffer_size);

  int environment_end_write(const tex_environment *env,
                            char                  *buffer,
                            size_t                 buffer_size);

  int environment_write(const tex_environment *env,
                        char                  *buffer,
                        size_t                 buffer_size);

#ifdef __cplusplus
};
#endif
