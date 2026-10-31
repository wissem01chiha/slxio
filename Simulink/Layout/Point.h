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

#include "CommonPCH.h"
#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "Logger.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Point final
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
}; // namespace slxio

#endif // POINT_H
