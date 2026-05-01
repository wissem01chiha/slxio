// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef POINT_H
#define POINT_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "Logger.h"
#include "PlatformTypes.h"
#include <vector>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

class APIEXPORT Point final
{
public:
  Point();
  Point(UInt32 x, UInt32 y, UInt32 width, UInt32 height);
  Point(const std::vector<UInt32>& vec);
  std::vector<UInt32> toVector() const;

private:
  Logger& l;
  UInt32 x;
  UInt32 y;
  UInt32 width;
  UInt32 height;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // POINT_H