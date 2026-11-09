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
#include "CoderInfo.h"

namespace slxio
{
    /// A SimulinkSignal Object
    class SimulinkSignal final
    {
    public:
        SimulinkSignal();
        ~SimulinkSignal() = default;

        SimulinkDataType GetDataType();
        void SetDataType(SimulinkDataType dt);
        void SetDataType(const char* type);
        void SetComplexityType(const char* ct);
        const char* GetComplexity();
        std::vector<uint16_t> GetDimensions();
        CoderInfo GetCoderInfo();
        const char* GetInitialValue();
        const char* GetDescription();
        const char* GetDimensionsMode();
        const char* GetUnit();
        std::vector<double> GetSampleTime();
        void SetRange(double min, double max);

    private:
        const char* m_initialValue;
        SimulinkDataType m_dataType;
        const char* m_description;
        const char* m_unit;
        const char* m_complexity = "real";
        const char* m_dimensionsMode;
        std::vector<uint16_t> m_dimensions;
        std::vector<double> m_sampleTime;
        double m_min;
        double m_max;
        CoderInfo m_coder;
    };

}; // namespace slxio
