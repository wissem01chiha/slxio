/*
 * Copyright 2026 Wissem Chiha
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#ifdef _MSC_VER

#ifndef NOMINMAX
#define NOMINMAX
#endif

#ifndef S_ISDIR
#define S_ISDIR(mode) (((mode) & S_IFMT) == S_IFDIR)
#endif

#ifndef S_ISREG
#define S_ISREG(mode) (((mode) & S_IFMT) == S_IFREG)
#endif
#endif // _MSC_VER

#ifdef __cplusplus
#include <cmath>
#ifndef finite
#define finite(x) std::isfinite(x)
#endif
#endif // __cplusplus

#ifdef _MSC_VER
#define ISNAN(x) _isnan(x)
#else
#define ISNAN(x) isnan(x)
#endif

#ifdef _MSC_VER
#define FORCE_INLINE __forceinline
#elif defined(__GNUC__) || defined(__clang__)
#define FORCE_INLINE inline __attribute__((always_inline))
#else
#define FORCE_INLINE inline
#endif

/* Define deprecated symbol for api changes warnings*/
#if defined(__GNUC__) || defined(__clang__)
#define DEPRECATED __attribute__((deprecated))
#elif defined(_MSC_VER)
#define DEPRECATED __declspec(deprecated)
#else
#define DEPRECATED
#endif

/* Define compiler nodiscard macro  */
#if defined(__has_cpp_attribute)
#if __has_cpp_attribute(nodiscard)
#define NODISCARD [[nodiscard]]
#else
#define NODISCARD
#endif
#else
#define NODISCARD
#endif
