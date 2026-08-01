// SPDX-FileCopyrightText: 2026 Wissem Chiha <chihawissem08@gmail.com>
// SPDX-License-Identifier: BSD-2-Clause

#include "tex.h"
#include <stdlib.h>
#include <string.h>

int environment_create(const char *name, tex_environment **env, int err)
{
  tex_environment *environment = calloc(1, sizeof(tex_environment));
  if (environment == NULL)
  {
    err = TEX_EFAIL_MEMALLOC;
    return err;
  }
  environment->name = tex_strdup(name);
  *env              = environment;
  err               = TEX_ENONE;
  return err;
}

int environment_delete(tex_environment *env)
{
  if (env != NULL)
  {
    free(env->name);
    free(env);
  }
  return TEX_ENONE;
}

int environment_begin_write(const tex_environment *env,
                            char                  *buffer,
                            size_t                 buffer_size)
{
  if (env == NULL || buffer == NULL)
  {
    return TEX_EINVAL_INPUT;
  }

  size_t name_len = strlen(env->name);
  if (name_len >= buffer_size)
  {
    return TEX_EINVAL_INPUT;
  }

  strcpy(buffer, "\\begin{");
  strcat(buffer, env->name);
  strcat(buffer, "}\n");

  return TEX_ENONE;
}

int environment_end_write(const tex_environment *env,
                          char                  *buffer,
                          size_t                 buffer_size)
{
  if (env == NULL || buffer == NULL)
  {
    return TEX_EINVAL_INPUT;
  }

  size_t name_len = strlen(env->name);
  if (name_len >= buffer_size)
  {
    return TEX_EINVAL_INPUT;
  }

  strcpy(buffer, "\\end{");
  strcat(buffer, env->name);
  strcat(buffer, "}\n");

  return TEX_ENONE;
}

int environment_write(const tex_environment *env,
                      char                  *buffer,
                      size_t                 buffer_size)
{
  if (env == NULL || buffer == NULL)
  {
    return TEX_EINVAL_INPUT;
  }
  int env_bg_wrt_err  = 0;
  int env_end_wrt_err = 0;

  env_bg_wrt_err = environment_begin_write(env, buffer, buffer_size);
  if (env_bg_wrt_err != TEX_ENONE)
  {
    return env_bg_wrt_err;
  }
  size_t buffer_size_ = buffer_size - strlen(buffer);
  env_end_wrt_err =
      environment_end_write(env, buffer + strlen(buffer), buffer_size_);
  if (env_end_wrt_err != TEX_ENONE)
  {
    return env_end_wrt_err;
  }

  return TEX_ENONE;
}
