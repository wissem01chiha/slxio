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
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either tempclassress
// or implied. See the License for the specific language governing
// permissions and limitations under the License.

#ifndef TYPE_H
#define TYPE_H

#include "Option.h"
#include "Platform.h"
#include <cstdint>
#include <limits>

#ifdef USE_FLOAT16
using Float = _Float16;
#elif defined(USE_FLOAT32)
using Float = float;
#elif defined(USE_FLOAT64)
using Float = double;
#elif defined(USE_FLOAT128)
using Float = long double;
#else
using Float = double;
#endif

#ifdef USE_8BIT_INDEX
using Index = std::uint8_t;
#elif defined(USE_16BIT_INDEX)
using Index = std::uint16_t;
#elif defined(USE_32BIT_INDEX)
using Index = std::uint32_t;
#elif defined(USE_64BIT_INDEX)
using Index = std::uint64_t;
#else
using Index = std::uint32_t;
#endif

/// @brief smalest number to avoid dividing by zero
#define FloatEps static_cast<Float>(1e-6)

/// @brief minimum representable value for Float
#define FloatMin std::numeric_limits<Float>::lowest()

/// @brief maximum representable value for Float
#define FloatMax std::numeric_limits<Float>::max()

#ifndef __cplusplus
#if HAVE_STDBOOL_H
#include "stdbool.h"
#endif
#endif

using sint8 = std::int8_t;
using uint8 = std::uint8_t;
using sint16 = std::int16_t;
using uint16 = std::uint16_t;
using sint32 = std::int32_t;
using uint32 = std::uint32_t;
using sint64 = std::int64_t;
using uint64 = std::uint64_t;

using sint8l = std::int_least8_t;
using uint8l = std::uint_least8_t;
using sint16l = std::int_least16_t;
using uint16l = std::uint_least16_t;
using sint32l = std::int_least32_t;
using uint32l = std::uint_least32_t;

#define AssertTypeEqual(var1, var2)                                            \
  static_assert(std::is_same<decltype(var1), decltype(var2)>::value)

template <template <typename> class T, typename First, typename... Rest>
struct InstantiateTemplates
{
  using FirstType = T<First>;
  using RestTypes = InstantiateTemplates<T, Rest...>;
};

#endif // TYPE_H