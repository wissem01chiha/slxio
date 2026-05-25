// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef VERSIONMACRO_H
#define VERSIONMACRO_H

#ifndef SLXIO_VERSION_MAJOR
#define SLXIO_VERSION_MAJOR 0
#endif

#ifndef SLXIO_VERSION_MINOR
#define SLXIO_VERSION_MINOR 1
#endif

#ifndef SLXIO_VERSION_PATCH
#define SLXIO_VERSION_PATCH 0
#endif

#define SLXIO_VERSION_NUMBER                                              \
  v##SLXIO_VERSION_MAJOR##_##SLXIO_VERSION_MINOR##_##SLXIO_VERSION_PATCH

#endif // VERSIONMACRO_H
