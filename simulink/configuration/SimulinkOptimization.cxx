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

#include "SimulinkOptimization.h"

namespace slxio
{

std::vector<Diagnostic> Validate(const SimulinkOptimization&)
{
    return {};
}

std::string ToString(const SimulinkOptimization& config)
{
    std::ostringstream oss;
    oss << "SimulinkOptimization {" << std::endl;
    oss << "  DisabledProps: " << config.DisabledProps << std::endl;
    oss << "  DisabledPropsCount: " << config.DisabledPropsCount << std::endl;
    oss << "  Description: " << config.Description << std::endl;
    oss << "  Components: " << config.Components << std::endl;
    oss << "  BlockReduction: " << config.BlockReduction << std::endl;
    oss << "  booleanDataType: " << config.booleanDataType << std::endl;
    oss << "  ConditionallyExecuteInputs: " << config.ConditionallyExecuteInputs << std::endl;
    oss << "  DefaultParameterBehavior: " << config.DefaultParameterBehavior << std::endl;
    oss << "  UseDivisionForNetSlopeComputation: " << config.UseDivisionForNetSlopeComputation
        << std::endl;
    oss << "  GainParamInheritBuiltuint16_type: " << config.GainParamInheritBuiltuint16_type
        << std::endl;
    oss << "  UseFloatMulNetSlope: " << config.UseFloatMulNetSlope << std::endl;
    oss << "  DefaultUnderspecifiedDataType: " << config.DefaultUnderspecifiedDataType << std::endl;
    oss << "  UseSpecifiedMinMax: " << config.UseSpecifiedMinMax << std::endl;
    oss << "}";

    return oss.str();
}

}; // namespace slxio
