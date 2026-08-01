// SPDX-FileCopyrightText: 2026 Wissem Chiha <chihawissem08@gmail.com>
// SPDX-License-Identifier: BSD-2-Clause

#pragma once

#include "document.h"
#include "texexport.h"
#include "texerrno.h"

#ifdef __cplusplus
extern "C"
{
#endif

  typedef struct tex_presentation tex_presentation;

  typedef enum tex_theme_t
  {
    Default_theme = 0,
    Berkeley      = 1,
    Madrid        = 2,
    Antibes       = 3,
    Copenhagen    = 4,
    Berlin        = 5,
    Manhattan     = 6,
    Warsaw        = 7,
    Singapore     = 8
  } tex_theme_t;

  typedef enum tex_transition_t
  {
    None    = 0,
    Fade    = 1,
    Push    = 2,
    Cover   = 3,
    Uncover = 4,
    Split   = 5,
    Blinds  = 6,
    Wipe    = 7
  } tex_transition_t;

  TEX_EXTERN int presentation_create(tex_presentation **presentation,
                                     const char        *title,
                                     const char        *author,
                                     const char        *date,
                                     int                language,
                                     int                theme,
                                     int                color_theme,
                                     int                err);
  TEX_EXTERN int presentation_delete(tex_presentation *presentation);

  TEX_EXTERN int presentation_set_institute(tex_presentation *presentation,
                                            const char       *institute);
  TEX_EXTERN int presentation_set_subtitle(tex_presentation *presentation,
                                           const char       *subtitle);
  TEX_EXTERN int presentation_set_navigation(tex_presentation *presentation,
                                             int               show);
  TEX_EXTERN int presentation_set_transition(tex_presentation *presentation,
                                             int               transition);
  TEX_EXTERN int presentation_add_slide(tex_presentation *presentation,
                                        const char       *title,
                                        const char       *content);
  TEX_EXTERN int presentation_generate(tex_presentation *presentation,
                                       char            **output,
                                       size_t           *output_size);

#ifdef __cplusplus
};
#endif
