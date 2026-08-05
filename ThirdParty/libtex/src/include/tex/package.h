// SPDX-FileCopyrightText: 2026 Wissem Chiha <chihawissem08@gmail.com>
// SPDX-License-Identifier: BSD-2-Clause

#pragma once

#include <stddef.h>
#include <stdbool.h>
#include "texexport.h"
#include "texerrno.h"

#ifdef __cplusplus
extern "C"
{
#endif

  typedef struct tex_package_option tex_package_option;
  typedef struct tex_package        tex_package;
  typedef enum tex_engine_t         tex_engine_t;

  enum tex_engine_t
  {
    TEX_ENGINE_ANY,
    TEX_ENGINE_PDFLATEX,
    TEX_ENGINE_XELATEX,
    TEX_ENGINE_LUALATEX
  };

  struct tex_package_option
  {
    char               *name;
    char               *value;
    tex_package_option *next;
  };

  struct tex_package
  {
    const char         *name;
    tex_package_option *options;
    bool                enabled;
    int                 priority;
    tex_engine_t        engine;
    tex_package        *next;
  };

  /**
   * Create a tex_package_option based object
   */
  TEX_EXTERN tex_package_option *package_option_create(tex_error_t *err);

  /**
   * Set the value of a given package option object
   */
  TEX_EXTERN tex_error_t package_option_set_value(tex_package_option *opt,
                                                  const char         *value);

  /**
   * Set the value of a given package option object, this function do not
   * validate the option name against a latex synatax one, it's caller
   * responsability to pass the right option name else the generated file will
   * be compilation issues
   */
  TEX_EXTERN tex_error_t package_option_set_name(tex_package_option *opt,
                                                 const char         *name);

  /**
   * Add an option to a given package_option object based,
   * Note if the option is already present in the package configuration, if will
   * be skipped with return of TEX_ENONE code, this behvaior may be subject to
   * change in next library releases
   */
  TEX_EXTERN tex_error_t package_add_option(tex_package        *pkg,
                                            tex_package_option *opt);

  /**
   * Create a tex_package based object
   */
  TEX_EXTERN tex_package *package_create(tex_error_t *err);

  /**
   * Delete a tex_package based object
   */
  TEX_EXTERN tex_error_t package_delete(tex_package *pkg);

  /**
   * Append a tex_package based object to the list of packages,
   * will be by default placed at the end of the linked list
   */
  TEX_EXTERN tex_error_t package_add_package(tex_package *pkg,
                                             tex_package *npkg);

  /**
   * Write the package to a buffer in memory.
   */
  TEX_EXTERN int
  package_write(const tex_package *pkg, char *buffer, size_t buffer_size);

#ifdef __cplusplus
};
#endif
