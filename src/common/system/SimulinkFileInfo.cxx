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

#include "SimulinkFileInfo.h"

namespace slxio
{
    std::string ToString(const GraphicalInterfaceInfo& info)
    {
        std::ostringstream oss;
        oss << "GraphicalInterfaceInfo { ";
        oss << "NumRootInports: " << info.m_numRootInports << ", ";
        oss << "NumRootOutports: " << info.m_numRootOutports << ", ";
        oss << "ParameterArgumentNames: " << info.m_parameterArgumentNames << ", ";
        oss << "NumModelReferences: " << info.m_numModelReferences << ", ";
        oss << "NumTestPointedSignals: " << info.m_numTestPointedSignals << ", ";
        oss << "NumProvidedFunctions: " << info.m_numProvidedFunctions << ", ";
        oss << "NumRequiredFunctions: " << info.m_numRequiredFunctions << ", ";
        oss << "NumResetEvents: " << info.m_numResetEvents << ", ";
        oss << "HasInitializeEvent: " << info.m_hasInitializeEvent << ", ";
        oss << "HasTerminateEvent: " << info.m_hasTerminateEvent << ", ";
        oss << "PreCompExecutionDomainType: " << info.m_preCompExecutionDomainType << ", ";
        oss << "IsExportFunctionModel: " << info.m_isExportFunctionModel << ", ";
        oss << "IsArchitectureModel: " << info.m_isArchitectureModel << ", ";
        oss << "NumParameterArguments: " << info.m_numParameterArguments << ", ";
        oss << "NumExternalFileReferences: " << info.m_numExternalFileReferences << ", ";
        oss << "OrderedModelArguments: " << info.m_orderedModelArguments << ", ";
        oss << " }";
        return oss.str();
    }

    std::string ToString(const SimulinkFileInfo& info)
    {
        std::ostringstream oss;
        oss << "SimulinkFileInfo { ";
        oss << "FileName: " << info.m_name << ", ";
        oss << "FileExtension: " << info.m_extension << ", ";
        oss << "LastModified: " << info.m_lastModifiedBy << ", ";
        oss << "Revision: " << info.m_revision << ", ";
        oss << "MatlabVersion: " << info.m_matlabVersion << ", ";
        oss << "MatlabRelease: " << info.m_matlabRelease << ", ";
        oss << "MatlabRevision: " << info.m_revision << ", ";
        oss << "Category: " << info.m_category << ", ";
        oss << "Creator: " << info.m_creator << ", ";
        oss << "ContentFriendlyName: " << info.m_contentTypeFriendlyName << ", ";
        oss << "Graphical Interface Info: " << ToString(info.m_graphicalInterfaceInfo) << ", ";
        oss << " }";

        return oss.str();
    }

}; // namespace slxio