// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef __Platform_h__
#define __Platform_h__

#if defined(_WIN64)
#define PLATFORM_WINDOWS
#define PLATFORM_WINDOWS_64
#elif defined(_WIN32)
#define PLATFORM_WINDOWS
#define PLATFORM_WINDOWS_32
#elif defined(__APPLE__) && defined(__MACH__)
#define PLATFORM_MACOS
#elif defined(__linux__)
#define PLATFORM_LINUX
#elif defined(__unix__)
#define PLATFORM_UNIX
#elif defined(__ANDROID__)
#define PLATFORM_ANDROID
#elif defined(__FreeBSD__)
#define PLATFORM_FREEBSD
#else
#define PLATFORM_UNKNOWN
#endif

#ifdef PLATFORM_WINDOWS
#define PATH_SEP '\\'
#else
#define PATH_SEP '/'
#endif

#ifdef PLATFORM_WINDOWS
#include <direct.h>
#else
#include <unistd.h>
#endif

#endif /* __Platform_h__ */