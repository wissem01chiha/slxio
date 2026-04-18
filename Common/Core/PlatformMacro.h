// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef __PlatformMacro_h__
#define __PlatformMacro_h__

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

#endif /* __PlatformMacro_h__ */