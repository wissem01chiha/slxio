// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef APIExportMacro_h
#define APIExportMacro_h

#include "Config.h"
#include "PlatformMacro.h"

#ifdef PLATFORM_WINDOWS
#if BUILD_SHARED_LIBS
#define APIEXPORT __declspec(dllexport)
#else
#define APIEXPORT
#endif
#else
#define APIEXPORT __attribute__((visibility("default")))
#endif

#endif /* APIExportMacro_h */