// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef __VersionMacro_h__
#define __VersionMacro_h__

#ifdef SLXIO_VERSION_MAJOR
#error "SLXIO_VERSION_MAJOR is defined"
#else
#define SLXIO_VERSION_MAJOR 0
#endif

#ifdef SLXIO_VERSION_MINOR
#error "SLXIO_VERSION_MINOR is defined"
#else
#define SLXIO_VERSION_MINOR 1
#endif

#ifdef SLXIO_VERSION_PATCH
#error "SLXIO_VERSION_PATCH is defined"
#else
#define SLXIO_VERSION_PATCH 0
#endif

#endif /* __VersionMacro_h__ */
