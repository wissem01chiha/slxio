// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKECH_H
#define SIMULINKECH_H

#include "CommonECH.h"

#define E_CHILD_NULLPTR_RECEIVED                                               \
    SLXIO_HERROR(SLXIO_PROJECT, SIMULINK, CORE, SLXIO_FATAL, 1U)

#define E_CHILD_TYPE_NOT_SUPPORTED                                             \
    SLXIO_HERROR(SLXIO_PROJECT, SIMULINK, CORE, SLXIO_FATAL, 2U)

#define E_CHILD_DUPLICATE_ID                                                   \
    SLXIO_HERROR(SLXIO_PROJECT, SIMULINK, CORE, SLXIO_WARN, 3U)

#define E_CHILD_NOT_FOUND                                                      \
    SLXIO_HERROR(SLXIO_PROJECT, SIMULINK, CORE, SLXIO_WARN, 3U)

#define E_PARENT_TYPE_NOT_SUPPORTED                                            \
    SLXIO_HERROR(SLXIO_PROJECT, SIMULINK, CORE, SLXIO_WARN, 4U)

#endif // SIMULINKECH_H