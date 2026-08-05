// SPDX-FileCopyrightText: 2026 Wissem Chiha <chihawissem08@gmail.com>
// SPDX-License-Identifier: BSD-2-Clause

#include "tex.h"
#include <stdio.h>
#include <stdlib.h>

tex_package *package_create(tex_error_t *err)
{
  // pk->next = NULL;
  return NULL;
}

tex_error_t package_delete(tex_package *pkg)
{
  if (pkg == NULL)
  {
    return TEX_ENONE;
  }
  free(pkg);
  return TEX_ENONE;
}

tex_package_option *package_option_create(tex_error_t *err)
{
  return NULL;
}

tex_error_t package_add_option(tex_package *pkg, tex_package_option *opt)
{
  return TEX_ENONE;
}

tex_error_t package_add_package(tex_package *pkg, tex_package *npkg)
{
  return TEX_ENONE;
}

tex_error_t package_option_set_value(tex_package_option *opt, const char *value)
{
  return TEX_ENONE;
}

tex_error_t package_option_set_name(tex_package_option *opt, const char *name)
{
  return TEX_ENONE;
}

int package_write(const tex_package *pkg, char *buffer, size_t buffer_size)
{
  return -1;
}