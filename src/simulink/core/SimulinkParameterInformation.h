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
    class CoderInfo;

    /// Metadata describing a Simulink parameter.
    class SimulinkParameterInformation final
    {
    public:
        SimulinkParameterInformation();
        ~SimulinkParameterInformation();

        const std::string& GetUnit() const;
        void SetUnit(const std::string& unit);

        const std::string& GetDescription() const;
        void SetDescription(const std::string& desc);

        const std::string& GetComplexity() const;
        void SetComplexity(const std::string& comp);

        double GetMin() const;
        void SetMin(double min);

        double GetMax() const;
        void SetMax(double max);

        const std::vector<uint16_t>& GetDimensions() const;
        void SetDimensions(const std::vector<uint16_t>& dims);

        void SetCoderInfo(const std::shared_ptr<CoderInfo>& coder);
        std::shared_ptr<CoderInfo> GetCoderInfo() const;

    private:
        std::string m_unit;
        std::string m_description;
        std::string m_complexity;
        double m_min;
        double m_max;
        std::vector<uint16_t> m_dimensions;
        std::shared_ptr<CoderInfo> m_coder;
    };

}; // namespace slxio
