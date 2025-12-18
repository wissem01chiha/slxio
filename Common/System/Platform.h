// Copyright 2025-2026 Wissem Chiha
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef PLATFORM_H
#define PLATFORM_H

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

#endif // PLATFORM_H