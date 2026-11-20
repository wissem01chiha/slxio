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

#include "SimulinkDataTypeBuilder.h"
#include "SimulinkDataType.h"
#include "StringDataObject.h"

namespace slxio
{
    SimulinkDataTypeObject::SimulinkDataTypeObject() : m_value(SimulinkDataType::Auto)
    {
    }

    SimulinkDataTypeObject::SimulinkDataTypeObject(SimulinkDataType value) : m_value(value)
    {
    }

    SimulinkDataType SimulinkDataTypeObject::GetValue() const noexcept
    {
        return m_value;
    }

    BuildResult SimulinkDataTypeBuilder::Build(const IDataObject& input)
    {
        const auto* stringInput = dynamic_cast<const StringDataObject*>(&input);
        if (stringInput == nullptr)
        {
            return {ErrorCode::InvalidArgument, nullptr};
        }
        try
        {
            auto dataType = ParseSimulinkDataType(stringInput->GetValue());
            return {ErrorCode::Ok, std::make_unique<SimulinkDataTypeObject>(dataType)};
        }
        catch (const std::invalid_argument&)
        {
            return {ErrorCode::InvalidDataType, nullptr};
        }
    }

}; // namespace slxio
