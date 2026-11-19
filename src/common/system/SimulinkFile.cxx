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

#include "SimulinkFile.h"
#include "SimulinkFileInfo.h"

namespace slxio
{

    namespace
    {
        SimulinkFile Load(const fs::path& directory)
        {
            return SimulinkFile();
        };

    } // namespace

    SimulinkFileInfo GetInfo(const SimulinkFile& file)
    {
        std::string contentType;
        std::string contentTypeFriendlyName;
        std::string matlabRelease;
        if (file.m_mwcoreProperties)
        {
            auto mwcore = file.m_mwcoreProperties.child("mwcoreProperties");
            if (mwcore)
            {
                contentType = mwcore.child("contentType").text().as_string();
                contentTypeFriendlyName =
                    mwcore.child("contentTypeFriendlyName").text().as_string();
                matlabRelease = mwcore.child("matlabRelease").text().as_string();
            }
        }
        if (file.m_coreProperties)
        {
            auto core = file.m_coreProperties.child("cp:coreProperties");
        }
        return SimulinkFileInfo{
            "", "", "", "", "", "", "", contentType, contentTypeFriendlyName, matlabRelease, ""};
    }

    void SetInfo(SimulinkFile& file, const SimulinkFileInfo& info)
    {
        return;
    }

    SimulinkFile Import(const fs::path& file)
    {
        return SimulinkFile();
    }

    fs::path Flush(const SimulinkFile& file)
    {
        return fs::path();
    }

}; // namespace slxio