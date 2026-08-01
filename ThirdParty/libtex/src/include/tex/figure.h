// SPDX-FileCopyrightText: 2026 Wissem Chiha <chihawissem08@gmail.com>
// SPDX-License-Identifier: BSD-2-Clause

#pragma once

#include "texerrno.h"
#include "texexport.h"
#include <stddef.h>

#ifdef __cplusplus
extern "C"
{
#endif

  typedef struct tex_figure tex_figure;

  struct tex_figure
  {
    char       *image_path;
    char       *caption;
    char       *label;
    int         width;
    int         height;
    float       scale;
    int         rotation;
    int         position;
    int         alignment;
    tex_figure *next;
  };

  /**
   * Create a tex_figure based object
   */
  TEX_EXTERN tex_figure *figure_create(tex_error_t *err);

  /**
   * Delete a tex_figure based object
   */
  TEX_EXTERN tex_error_t figure_delete(tex_figure *fig);

  /**
   * Create the figure from a given file path
   * the figure label is automaticly genarted from filename
   * eg  fig:diagram_png
   */
  TEX_EXTERN tex_figure *figure_fs_create(const char  *filename,
                                          tex_error_t *err);

  /**
   * Adjust figure size
   */
  TEX_EXTERN tex_error_t figure_set_size(tex_figure *fig,
                                         int         width,
                                         int         height);
  /**
   * Adjust figure scale.
   * The scale factor is provided directly as a float 1.0 = original
   * size, 0.5 = half size, 2.0 = double size, this routine adjusts the
   * figure width and hight automatically
   */
  TEX_EXTERN tex_error_t figure_set_scale(tex_figure *fig, float scale);

  /**
   * Write figure to a memeory buffer
   * upon sucess it returns th number of bytes writtin to the buffer same as
   * snprintf function, on failure returns -1 and set err to specifice error
   * code
   */
  TEX_EXTERN int figure_write(const tex_figure *fig,
                              char             *buffer,
                              size_t            buffer_size,
                              tex_error_t      *err);

#ifdef __cplusplus
};
#endif
