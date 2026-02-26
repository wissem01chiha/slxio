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
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
// implied. See the License for the specific language governing
// permissions and limitations under the License.

#ifndef POINT_H
#define POINT_H

#include "ABINamespace.h"
#include "APIExport.h"
#include "Logger.h"
#include "Type.h"
#include <vector>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

class APIEXPORT Point final
{
public:
  Point();
  Point(uint32 x, uint32 y, uint32 width, uint32 height);
  Point(const std::vector<uint32>& vec);
  std::vector<uint32> toVector() const;

private:
  Logger& l;
  uint32 x;
  uint32 y;
  uint32 width;
  uint32 height;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // POINT_H