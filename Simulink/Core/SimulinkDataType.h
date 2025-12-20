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
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef SIMULINKDATATYPE_H
#define SIMULINKDATATYPE_H

#include "ABINamespace.h"
#include "APIExport.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @enum SimulinkDataType
 * @brief Simulink Supported data types.
 * @see https://www.mathworks.com/help/simulink/ug/data-types-supported-by-simulink.html
 */
enum class SimulinkDataType {
    Auto = 0,
    Double,
    Single,
    Int8,
    UInt8,
    Int16,
    UInt16,
    UInt64,
    Int32,
    UInt32,
    Boolean,
    Half,
    String
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKDATATYPE_H