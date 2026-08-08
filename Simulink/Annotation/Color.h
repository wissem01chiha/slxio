// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef COLOR_H
#define COLOR_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"

#include <vector>

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Color final
{
public:
  Color();
  Color(UInt32 red, UInt32 green, UInt32 blue, UInt32 alpha = 255);
  ~Color() = default;
  Color(const Color& other) = default;
  Color& operator=(const Color& other) = default;
  bool operator==(const Color& other) const;
  bool operator!=(const Color& other) const;

  static Color fromVector(const std::vector<UInt32>& vec);

  std::vector<UInt32> toVector() const;

private:
  UInt32 r;
  UInt32 g;
  UInt32 b;
  UInt32 a;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // COLOR_H
