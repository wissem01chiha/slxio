// SPDX-FileCopyrightText: 2026 Wissem Chiha <chihawissem08@gmail.com>
// SPDX-License-Identifier: BSD-2-Clause

#include "tex.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STB_IMAGE_IMPLEMENTATION
#include <stb/stb_image.h>

tex_figure *figure_create(tex_error_t *err)
{
  tex_figure *fig = calloc(1, sizeof(tex_figure));
  if (fig == NULL)
  {
    *err = TEX_EFAIL_MEMALLOC;
    return NULL;
  }
  fig->image_path = NULL;
  fig->position   = 0;
  fig->next       = NULL;
  return fig;
}

tex_error_t figure_delete(tex_figure *fig)
{
  if (fig == NULL)
  {
    return TEX_ENONE;
  }
  if (fig->image_path != NULL)
  {
    free(fig->image_path);
  }
  free(fig);
  return TEX_ENONE;
}

tex_figure *figure_fs_create(const char *filename, tex_error_t *err)
{
  if (filename == NULL)
  {
    *err = TEX_EINVAL_FILE_PATH;
    return NULL;
  }
  int            width, height, channels;
  unsigned char *data = stbi_load(filename, &width, &height, &channels, 0);
  if (data == NULL)
  {
    *err = TEX_EFAIL_LOAD_IMAGE;
    return NULL;
  }
  tex_figure *fig = figure_create(err);
  fig->height     = height;
  fig->width      = width;
  fig->image_path = tex_strdup(filename);
  fig->label      = tex_strdup(get_filename(filename));
  return fig;
}

tex_error_t figure_set_size(tex_figure *fig, int width, int height)
{
  if (fig == NULL)
  {
    return TEX_ENULL_FIGURE;
  }
  if (width <= 0)
  {
    return TEX_EINVAL_FIGURE_WIDTH;
  }
  if (height <= 0)
  {
    return TEX_EINVAL_FIGURE_HEIGHT;
  }
  fig->width  = width;
  fig->height = height;
  return TEX_ENONE;
}

tex_error_t figure_set_scale(tex_figure *fig, float scale)
{
  if (fig == NULL)
  {
    return TEX_ENULL_FIGURE;
  }
  if (scale <= 0.0f)
  {
    return TEX_EINVAL_FIGURE_SCALE;
  }
  fig->scale = scale;
  return TEX_ENONE;
}

int figure_write(const tex_figure *fig,
                 char             *buffer,
                 size_t            buffer_size,
                 tex_error_t      *err)
{
  if (fig == NULL)
  {
    if (err)
      *err = TEX_ENULL_FIGURE;
    return -1;
  }

  size_t written = 0;
  buffer[0]      = '\0';

  const tex_figure *cur = fig;
  while (cur)
  {
    char temp[1024];
    int  n = snprintf(
        temp,
        sizeof(temp),
        "\\begin{figure}[%c]\n"
        "\\centering\n"
        "\\includegraphics[width=%dcm,height=%dcm,scale=%.2f,angle=%d]{%s}\n"
        "\\caption{%s}\n"
        "\\label{%s}\n"
        "\\end{figure}\n\n",
        cur->position ? (char) cur->position : 'h',
        cur->width,
        cur->height,
        cur->scale,
        cur->rotation,
        cur->image_path ? cur->image_path : "",
        cur->caption ? cur->caption : "",
        cur->label ? cur->label : "");

    if (n < 0)
    {
      if (err)
        *err = TEX_EWRITE_FAIL;
      return -1;
    }

    if (written + (size_t) n >= buffer_size)
    {
      if (err)
        *err = TEX_EOVERFLOW_BUFFER;
      return -1;
    }

    memcpy(buffer + written, temp, (size_t) n);
    written += (size_t) n;
    buffer[written] = '\0';

    cur = cur->next;
  }

  if (err)
    *err = TEX_ENONE;
  return (int) written;
}
