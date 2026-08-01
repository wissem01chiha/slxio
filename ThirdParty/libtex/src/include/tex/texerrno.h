// SPDX-FileCopyrightText: 2026 Wissem Chiha <chihawissem08@gmail.com>
// SPDX-License-Identifier: BSD-2-Clause

#pragma once

#include <errno.h>

#ifdef __cplusplus
extern "C"
{
#endif

  // Standard error codes used in libtex.
  typedef enum tex_error_t
  {
    TEX_ENONE = 0,
    TEX_EFAIL_MEMALLOC,
    TEX_EFAIL_FOPEN,
    TEX_EFAIL_GETPWUID,
    TEX_EFAIL_GETCWD,
    TEX_EFAIL_GETUSERNAME,
    TEX_EFAIL_TIME,
    TEX_EFAIL_LOCALTIME,
    TEX_EFAIL_GETCURRENTDIRECTORY,
    TEX_EFAIL_CJSON_PARSEWITHLENGTH,
    TEX_ENULL_DOCUMENT,
    TEX_ENULL_CONTENT,
    TEX_ENULL_SECTION,
    TEX_ENULL_REPORT,
    TEX_ENULL_FILEPATH,
    TEX_ENULL_ELEMENT,
    TEX_ENULL_LIST_ITEM,
    TEX_ENULL_BUFFER,
    TEX_ENULL_FIGURE,
    TEX_EINVAL_FIGURE_WIDTH,
    TEX_EINVAL_FIGURE_HEIGHT,
    TEX_EINVAL_FIGURE_SCALE,
    TEX_ENULL_TABLE,
    TEX_ENULL_LIST,
    TEX_ENULL_PACKAGE,
    TEX_EOVERFLOW_BUFFER,
    TEX_EINVAL_INPUT,
    TEX_EINVAL_FILE_PATH,
    TEX_EFAIL_LOAD_IMAGE,
    TEX_EWRITE_FAIL,
    TEX_EUNKNOWN

  } tex_error_t;

#ifdef __cplusplus
};
#endif