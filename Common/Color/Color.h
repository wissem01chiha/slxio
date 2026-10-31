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
#include "PlatformTypes.h"

namespace slxio
{
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
