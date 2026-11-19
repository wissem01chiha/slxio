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
    std::string ToString(const SimulinkFileInfo& info)
    {
        std::ostringstream oss;
        oss << "SimulinkFileInfo { ";
        oss << "fileName: " << info.m_name << ", ";
        oss << "file extension: " << info.m_extension << ", ";
        oss << "lastModified: " << info.m_lastModifiedBy << ", ";
        oss << "revision: " << info.m_revision << ", ";
        oss << "matlab version: " << info.m_matlabVersion << ", ";
        oss << "Matlab Release: " << info.m_matlabRelease << ", ";
        oss << "Matlab Revision: " << info.m_revision << ", ";
        oss << "Category: " << info.m_category << ", ";
        oss << "Creator: " << info.m_creator << ", ";
        oss << "Content Friendly Name : " << info.m_contentTypeFriendlyName << ", ";
        oss << " }";

        return oss.str();
    }

}; // namespace slxio