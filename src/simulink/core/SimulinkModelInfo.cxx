/*
 * Copyright 2025-2026 Wissem Chiha
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

#include "SimulinkModelInfo.h"

#include <sstream>

namespace slxio
{
    std::string ToString(const SimulinkModelInfo& info)
    {
        std::ostringstream oss;
        oss << "SimulinkModelInfo { ";
        oss << "SavedCharacterEncoding: " << info.m_savedCharacterEncoding << ", ";
        oss << "EnableAccessToBaseWorkspace: " << info.m_enableAccessToBaseWorkspace << ", ";
        oss << "SLXCompressionType: " << info.m_slxCompressionType << ", ";
        oss << "ScopeRefreshTime: " << info.m_scopeRefreshTime << ", ";
        oss << "OverrideScopeRefreshTime: " << info.m_overrideScopeRefreshTime << ", ";
        oss << "DataTypeOverride: " << info.m_dataTypeOverride << ", ";
        oss << "DataTypeOverrideAppliesTo: " << info.m_dataTypeOverrideAppliesTo << ", ";
        oss << "MinMaxOverflowLogging: " << info.m_minMaxOverflowLogging << ", ";
        oss << "MinMaxOverflowArchiveMode: " << info.m_minMaxOverflowArchiveMode << ", ";
        oss << "FPTRunName: " << info.m_fptRunName << ", ";
        oss << "MaxMDLFileLineLength: " << info.m_maxMDLFileLineLength << ", ";
        oss << "InitFcn: " << info.m_initFcn << ", ";
        oss << " }";
        return oss.str();
    }

} // namespace slxio
