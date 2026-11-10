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
#include "SimulinkDataType.h"

namespace slxio
{

    class SimulinkParameterInfo;

    class SimulinkParameter final
    {
    public:
        SimulinkParameter();
        explicit SimulinkParameter(const std::string& value);

        std::string& GetValue();
        uint16_t GetValueAsInt() const;
        float GetValueAsFloat() const;
        double GetValueAsDouble() const;
        SimulinkDataType GetSimulinkDataType() const;
        void SetSimulinkDataType(SimulinkDataType type);
        SimulinkParameterInfo& GetSimulinkParameterInfo() const;

        ~SimulinkParameter();

    private:
        std::string m_value;
        SimulinkDataType m_dataType{SimulinkDataType::Auto};
        std::unique_ptr<SimulinkParameterInfo> m_information;
    };

}; // namespace slxio
