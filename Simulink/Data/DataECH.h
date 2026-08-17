// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef DATAECH_H
#define DATAECH_H

#include "CommonECH.h"

/// A variable name was empty or invalid.
#define E_PARAM_VAR_NAME_EMPTY                                                 \
    SLXIO_HERROR(SLXIO_PROJECT, SIMULINK, DATA, SLXIO_FATAL, 1U)

/// A variable was not found in the workspace.
#define E_PARAM_VAR_NOT_FOUND                                                  \
    SLXIO_HERROR(SLXIO_PROJECT, SIMULINK, DATA, SLXIO_WARN, 2U)

/// A variable already exists and was overwritten.
#define E_PARAM_VAR_EXISTS                                                     \
    SLXIO_HERROR(SLXIO_PROJECT, SIMULINK, DATA, SLXIO_WARN, 3U)

#endif // DATAECH_H