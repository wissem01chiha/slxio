// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef DATAMODELERRORTYPE
#define DATAMODELERRORTYPE

#include "ErrorHandlerMacro.h"
#include "ErrorType.h"

/// A nullptr object of a type of DataObject passed to a function
#define E_DATAOBJECT_NULLPTR_RECEIVED                                          \
  SLXIO_HERROR(SLXIO_PROJECT, COMMON, DATAMODEL, SLXIO_FATAL, 1U)

/// A nullptr object of a type of SimulinkFile passed to a function
#define E_SIMULINKFILE_NULLPTR_RECEIVED                                        \
  SLXIO_HERROR(SLXIO_PROJECT, COMMON, DATAMODEL, SLXIO_FATAL, 2U)

/// An invalid object of a type SimulinkFile passed to a function or class
#define E_INVALID_SIMULINKFILE_RECEIVED                                        \
  SLXIO_HERROR(SLXIO_PROJECT, COMMON, DATAMODEL, SLXIO_FATAL, 3U)

#endif // DATAMODELERRORTYPE