// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef ABINAMESPACEMACRO_H
#define ABINAMESPACEMACRO_H

#include "Options.h"
#include "VersionMacro.h"

#if SLXIO_ABI_NAMESPACE
#define SLXIO_ABI_NAMESPACE_BEGIN namespace SLXIO_VERSION_NUMBER {
#define SLXIO_ABI_NAMESPACE_END                                                \
  }                                                                            \
  ;
#else
#define SLXIO_ABI_NAMESPACE_BEGIN
#define SLXIO_ABI_NAMESPACE_END
#endif

#endif // ABINAMESPACEMACRO_H
