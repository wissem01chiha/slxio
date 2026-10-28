// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef DATAMODELECH_H
#define DATAMODELECH_H

#include "CommonECH.h"

/// A nullptr object of generic IDataObject based type passed to a function
#define E_DATAOBJECT_NULLPTR_RECEIVED                                          \
    SLXIO_HERROR(SLXIO_PROJECT, COMMON, DATAMODEL, SLXIO_FATAL, 1U)

/// A nullptr object of a type of SimulinkFile passed to a function
#define E_SIMULINKFILE_NULLPTR_RECEIVED                                        \
    SLXIO_HERROR(SLXIO_PROJECT, COMMON, DATAMODEL, SLXIO_FATAL, 2U)

/// An invalid object of a type SimulinkFile passed to a function or class
/// the object kind flagging this error code is not a pointer and may contain
/// invalidation related to it member attributes or other reason
#define E_INVALID_SIMULINKFILE_RECEIVED                                        \
    SLXIO_HERROR(SLXIO_PROJECT, COMMON, DATAMODEL, SLXIO_FATAL, 3U)

#endif // DATAMODELECH_H