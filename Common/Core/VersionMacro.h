// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef VERSIONMACRO_H
#define VERSIONMACRO_H

#ifdef SLXIO_VERSION_MAJOR
#error "SLXIO_VERSION_MAJOR is already defined"
#else
#define SLXIO_VERSION_MAJOR 0
#endif

#ifdef SLXIO_VERSION_MINOR
#error "SLXIO_VERSION_MINOR is already defined"
#else
#define SLXIO_VERSION_MINOR 1
#endif

#ifdef SLXIO_VERSION_PATCH
#error "SLXIO_VERSION_PATCH is already defined"
#else
#define SLXIO_VERSION_PATCH 0
#endif

#define SLXIO_VERSION_STRING "0.1.0"

#endif // VERSIONMACRO_H
