// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef APIEXPORTMACRO_H
#define APIEXPORTMACRO_H

#include "Config.h"
#include "PlatformMacro.h"

#ifdef PLATFORM_WINDOWS
#if BUILD_SHARED_LIBS
#define SLXIO_APIEXPORT __declspec(dllexport)
#else
#define SLXIO_APIEXPORT
#endif
#else
#define SLXIO_APIEXPORT __attribute__((visibility("default")))
#endif

#endif // APIEXPORTMACRO_H