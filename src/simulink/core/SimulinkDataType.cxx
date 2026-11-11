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

#include "SimulinkDataType.h"

namespace slxio
{

    std::string ToString(SimulinkDataType type)
    {
        switch (type)
        {
        case SimulinkDataType::Double:
            return "double";
        case SimulinkDataType::Single:
            return "single";
        case SimulinkDataType::Half:
            return "half";
        case SimulinkDataType::Int8:
            return "int8";
        case SimulinkDataType::UInt8:
            return "uint8";
        case SimulinkDataType::Int16:
            return "int16";
        case SimulinkDataType::UInt16:
            return "uint16";
        case SimulinkDataType::Int32:
            return "int32";
        case SimulinkDataType::UInt32:
            return "uint32";
        case SimulinkDataType::UInt64:
            return "uint64";
        case SimulinkDataType::Boolean:
            return "boolean";
        case SimulinkDataType::String:
            return "string";
        case SimulinkDataType::Char:
            return "char";
        case SimulinkDataType::Auto:
            return "auto";
        }

        return {};
    }

    SimulinkDataType ParseSimulinkDataType(const std::string& type)
    {
        if (type == "double")
            return SimulinkDataType::Double;
        if (type == "single")
            return SimulinkDataType::Single;
        if (type == "half")
            return SimulinkDataType::Half;
        if (type == "int8")
            return SimulinkDataType::Int8;
        if (type == "uint8")
            return SimulinkDataType::UInt8;
        if (type == "int16")
            return SimulinkDataType::Int16;
        if (type == "uint16")
            return SimulinkDataType::UInt16;
        if (type == "int32")
            return SimulinkDataType::Int32;
        if (type == "uint32")
            return SimulinkDataType::UInt32;
        if (type == "uint64")
            return SimulinkDataType::UInt64;
        if (type == "boolean" || type == "logical")
            return SimulinkDataType::Boolean;
        if (type == "string")
            return SimulinkDataType::String;
        if (type == "char")
            return SimulinkDataType::Char;
        if (type == "auto")
            return SimulinkDataType::Auto;

        throw std::invalid_argument("unknown string: " + type);
    }

    bool IsNumeric(SimulinkDataType type)
    {
        switch (type)
        {
        case SimulinkDataType::Double:
        case SimulinkDataType::Single:
        case SimulinkDataType::Half:
        case SimulinkDataType::Int8:
        case SimulinkDataType::UInt8:
        case SimulinkDataType::Int16:
        case SimulinkDataType::UInt16:
        case SimulinkDataType::Int32:
        case SimulinkDataType::UInt32:
        case SimulinkDataType::UInt64:
            return true;

        default:
            return false;
        }
    }

    bool IsFloatingPoint(SimulinkDataType type)
    {
        return type == SimulinkDataType::Double || type == SimulinkDataType::Single ||
               type == SimulinkDataType::Half;
    }

    bool IsSigned(SimulinkDataType type)
    {
        return type == SimulinkDataType::Int8 || type == SimulinkDataType::Int16 ||
               type == SimulinkDataType::Int32;
    }

}; // namespace slxio