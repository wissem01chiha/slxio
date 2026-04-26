// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef __APIExportMacro_h__
#define __APIExportMacro_h__

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

#endif /* __APIExportMacro_h__ */