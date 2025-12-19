// Copyright 2025 Wissem Chiha
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

#ifndef COLOR_H
#define COLOR_H

#include "ABINamespace.h"
#include "APIExport.h"
#include <cstdint>
#include <vector>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

class APIEXPORT Color {
public:
  uint32_t r;
  uint32_t g;
  uint32_t b;
  uint32_t a;

  Color();
  Color(uint32_t red, uint32_t green, uint32_t blue, uint32_t alpha = 255);
  ~Color() = default;
  Color(const Color &other) = default;
  Color &operator=(const Color &other) = default;
  bool operator==(const Color &other) const;
  bool operator!=(const Color &other) const;

  static Color fromVector(const std::vector<uint32_t> &vec);
  std::vector<uint32_t> toVector() const;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // COLOR_H