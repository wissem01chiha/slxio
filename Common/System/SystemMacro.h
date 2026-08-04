// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#include "ResultMap.h"

#define E_ARCHIVE_OPEN_FAILED                                                            \
  SLXIO_SRESULT(SLXIO_PROJECT, COMMON, SYSTEM, SLXIO_FATAL, 19U)
#define E_ARCHIVE_SOURCE_FAILED                                                          \
  SLXIO_SRESULT(SLXIO_PROJECT, COMMON, SYSTEM, SLXIO_FATAL, 20U)
#define E_ARCHIVE_REPLACE_FAILED                                                         \
  SLXIO_SRESULT(SLXIO_PROJECT, COMMON, SYSTEM, SLXIO_FATAL, 21U)
#define E_ARCHIVE_ADD_FAILED                                                             \
  SLXIO_SRESULT(SLXIO_PROJECT, COMMON, SYSTEM, SLXIO_FATAL, 22U)
#define E_ARCHIVE_CLOSE_FAILED                                                           \
  SLXIO_SRESULT(SLXIO_PROJECT, COMMON, SYSTEM, SLXIO_FATAL, 23U)
#define E_ARCHIVE_REMOVE_FAILED                                                          \
  SLXIO_SRESULT(SLXIO_PROJECT, COMMON, SYSTEM, SLXIO_FATAL, 24U)
#define E_ARCHIVE_ENTRY_NOT_FOUND                                                        \
  SLXIO_SRESULT(SLXIO_PROJECT, COMMON, SYSTEM, SLXIO_FATAL, 25U)
#define E_ARCHIVE_INVALID_ID                                                             \
  SLXIO_SRESULT(SLXIO_PROJECT, COMMON, SYSTEM, SLXIO_FATAL, 26U)