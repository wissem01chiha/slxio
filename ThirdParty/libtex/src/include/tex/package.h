// SPDX-FileCopyrightText: 2026 Wissem Chiha <chihawissem08@gmail.com>
// SPDX-License-Identifier: BSD-2-Clause

#pragma once

#include <stddef.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"

#include "texexport.h"

#ifdef __cplusplus
extern "C"
{
#endif

  //
  typedef struct
  {
    int         priority;
    const char *name;
    const char *options;
  } tex_package;

  static tex_package packages[] = {
      {1, "geometry", NULL},  {1, "graphicx", NULL},   {2, "hyperref", NULL},
      {1, "amsmath", NULL},   {1, "amssymb", NULL},    {1, "booktabs", NULL},
      {1, "xcolor", NULL},    {1, "listings", NULL},   {1, "fancyhdr", NULL},
      {1, "tikz", NULL},      {1, "pgfplots", NULL},   {1, "algorithm2e", NULL},
      {1, "caption", NULL},   {1, "subcaption", NULL}, {1, "float", NULL},
      {1, "multicol", NULL},  {1, "array", NULL},      {1, "tabularx", NULL},
      {1, "longtable", NULL}, {1, "enumitem", NULL},   {1, "siunitx", NULL},
      {1, "xspace", NULL},    {1, "titlesec", NULL},   {1, "fancyvrb", NULL},
      {1, "minted", NULL},    {1, "csquotes", NULL},   {1, "biblatex", NULL},
  };

#pragma GCC diagnostic pop

#ifdef __cplusplus
};
#endif
