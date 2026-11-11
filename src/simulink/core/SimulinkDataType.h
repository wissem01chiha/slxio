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

namespace slxio
{

    enum class SimulinkDataType
    {
        Auto,
        Double,
        Single,
        Int8,
        UInt8,
        Int16,
        UInt16,
        Int32,
        UInt32,
        UInt64,
        Boolean,
        Half,
        String,
        Char
    };

    std::string ToString(SimulinkDataType type);
    SimulinkDataType ParseSimulinkDataType(const std::string& type);
    bool IsNumeric(SimulinkDataType type);
    bool IsFloatingPoint(SimulinkDataType type);
    bool IsSigned(SimulinkDataType type);

}; // namespace slxio
