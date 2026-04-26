// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef COLOR_H
#define COLOR_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include <cstdint>
#include <vector>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

class APIEXPORT Color final
{
public:
  uint32_t r;
  uint32_t g;
  uint32_t b;
  uint32_t a;

  Color();
  Color(uint32_t red, uint32_t green, uint32_t blue, uint32_t alpha = 255);
  ~Color() = default;
  Color(const Color& other) = default;
  Color& operator=(const Color& other) = default;
  bool operator==(const Color& other) const;
  bool operator!=(const Color& other) const;

  static Color fromVector(const std::vector<uint32_t>& vec);
  std::vector<uint32_t> toVector() const;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // COLOR_H