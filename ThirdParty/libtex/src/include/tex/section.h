// SPDX-FileCopyrightText: 2026 Wissem Chiha <chihawissem08@gmail.com>
// SPDX-License-Identifier: BSD-2-Clause

#pragma once

#include <stddef.h>
#include "texexport.h"
#include "figure.h"
#include "content.h"
#include "element.h"
#include "list.h"
#include "table.h"

#ifdef __cplusplus
extern "C"
{
#endif

  typedef struct tex_section tex_section;

  /**
   * Document section types.
   */
  typedef enum tex_section_t
  {
    Chapter       = 0,
    Section       = 1,
    Subsection    = 2,
    Subsubsection = 3
  } tex_section_t;

  /**
   * Document section structure
   */
  struct tex_section
  {
    char         *title;
    tex_section_t level;
    tex_section  *subsection;
    tex_element  *elements;
    tex_section  *next;
  };

  /**
   * Create a tex_section based object
   */
  TEX_EXTERN tex_section *section_create(tex_error_t *err);

  /**
   * Delete a tex_section based object
   */
  TEX_EXTERN tex_error_t section_delete(tex_section *sec);

  /**
   * Find a given subsection in the given section using its title.
   */
  TEX_EXTERN tex_section *section_find_subsection(tex_section *sec,
                                                  const char  *sectitle);

  /**
   * Append content to the section body.
   */
  TEX_EXTERN tex_error_t section_add_content(tex_section *sec,
                                             tex_content *content);

  /**
   * Returns the root element of a linked list containing the section content
   * of a tex_content-based object. This function was mainly added for
   * inspection and testing but can also be useful for other purposes.
   * Implementations of similar patterns for retrieving lists of figures,
   * tables, etc., within a section are currently in progress.
   */
  TEX_EXTERN tex_content *section_get_content(tex_section *sec);

  /**
   * Append the contents of a file to the section body,
   * same spirit as document_add_fs_content.
   */
  TEX_EXTERN tex_error_t section_add_fs_content(tex_section *sec,
                                                const char  *filename);

  /**
   * Add a tex_figure to the section body, the figure will be appended at the
   * section end
   */
  TEX_EXTERN tex_error_t section_add_figure(tex_section *sec, tex_figure *fig);

  /**
   * Add a tex_list to the section body, the figure will be appended at the
   * section end
   */
  TEX_EXTERN tex_error_t section_add_list(tex_section *sec, tex_list *lst);

  /**
   * Write the section to a memory buffer.
   * upon sucess it returns th number of bytes writtin to the buffer same as
   * snprintf function
   */
  TEX_EXTERN int section_write(const tex_section *sec,
                               char              *buffer,
                               size_t             buffer_size,
                               tex_error_t       *err);

#ifdef __cplusplus
};
#endif
