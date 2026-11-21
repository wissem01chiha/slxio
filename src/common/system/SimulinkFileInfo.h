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

#pragma once

#include "CommonPCH.h"

namespace slxio
{
    struct GraphicalInterfaceInfo
    {
        std::string m_numRootInports;
        std::string m_numRootOutports;
        std::string m_parameterArgumentNames;
        std::string m_numModelReferences;
        std::string m_numTestPointedSignals;
        std::string m_numProvidedFunctions;
        std::string m_numRequiredFunctions;
        std::string m_numResetEvents;
        std::string m_hasInitializeEvent;
        std::string m_hasTerminateEvent;
        std::string m_preCompExecutionDomainType;
        std::string m_isExportFunctionModel;
        std::string m_isArchitectureModel;
        std::string m_numParameterArguments;
        std::string m_numExternalFileReferences;
        std::string m_orderedModelArguments;
    };

    /**
     * Metadata about a Simulink model file.
     * This struct provides access to basic file information
     * such as name, extension, size, version, and creator details.
     * It is constructed by the parser and cannot be modified by users.
     */
    struct SimulinkFileInfo
    {
        std::string m_name;
        std::string m_extension;
        std::string m_category;
        std::string m_creator;
        std::string m_modified;
        std::string m_lastModifiedBy;
        std::string m_revision;
        std::string m_version;
        std::string m_contentType;
        std::string m_contentTypeFriendlyName;
        std::string m_matlabRelease;
        std::string m_matlabVersion;

        GraphicalInterfaceInfo m_graphicalInterfaceInfo;
    };

    std::string ToString(const GraphicalInterfaceInfo& info);
    std::string ToString(const SimulinkFileInfo& info);

}; // namespace slxio
