// SPDX-FileCopyrightText: 2026 Wissem Chiha <chihawissem08@gmail.com>
// SPDX-License-Identifier: BSD-2-Clause

#pragma once

#ifdef __cplusplus
extern "C"
{
#endif

#include "texexport.h"
#include "texerrno.h"

  typedef struct tex_content tex_content;

  /**
   * A basic and most generic form of text can be added to a document, section,
   * paragraph or whataver
   */
  struct tex_content
  {
    char        *data;
    tex_content *next;
  };

  /**
   * Create a tex_content based object
   */
  TEX_EXTERN tex_content *content_create(tex_error_t *err);

  /**
   * Delete a tex_content based object
   */
  TEX_EXTERN tex_error_t content_delete(tex_content *cont);

  /**
   * Add text to the content payload
   */
  TEX_EXTERN tex_error_t content_add(tex_content *cont, const char *_data);

  /**
   * fill the content internal buffer from a filesystem
   */
  TEX_EXTERN tex_error_t content_fs_add(tex_content *cont,
                                        const char  *filename);
  /**
   * This utility is for formatting special characters in latex, such as
   * _ or %, which are reserved latex commands. To prevent compilation
   * errors, it converts them into textual strings by prefixing them with
   * a backslash placeholder.
   */
  TEX_EXTERN const char *content_format_string(const char *_data);

  /**
   * Returns a string concatenation of the content objects, combining
   * all internal buffers from the linked-list of tex_content objects
   * into a single character buffer. This routine was originally introduced
   * for testing but can also be used to flatten a series of content objects
   * successfully added by the user into one consolidated content object.
   */
  TEX_EXTERN char *content_to_string(const tex_content *cont, tex_error_t *err);

  /**
   * Write content to a memeory buffer
   */
  TEX_EXTERN int content_write(const tex_content *cont,
                               char              *buffer,
                               size_t             buffer_size,
                               tex_error_t       *err);

#ifdef __cplusplus
};
#endif