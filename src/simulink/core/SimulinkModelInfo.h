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
    struct SimulinkModelInfo
    {
        std::string m_savedCharacterEncoding;
        std::string m_enableAccessToBaseWorkspace;
        std::string m_slxCompressionType;
        std::string m_scopeRefreshTime;
        std::string m_overrideScopeRefreshTime;
        std::string m_dataTypeOverride;
        std::string m_dataTypeOverrideAppliesTo;
        std::string m_minMaxOverflowLogging;
        std::string m_minMaxOverflowArchiveMode;
        std::string m_fptRunName;
        std::string m_maxMDLFileLineLength;
        std::string m_initFcn;
    };

    std::string ToString(const SimulinkModelInfo& info);

}; // namespace slxio