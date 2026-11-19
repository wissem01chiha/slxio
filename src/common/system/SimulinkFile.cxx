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

        std::string GetContentType(const SimulinkFile& file)
        {
            if (file.m_mwcoreProperties)
            {
                auto mwcore = file.m_mwcoreProperties.child("mwcoreProperties");
                if (mwcore)
                {
                    return mwcore.child("contentType").text().as_string();
                }
            }
            return std::string();
        }

        std::string GetContentTypeFriendlyName(const SimulinkFile& file)
        {
            if (file.m_mwcoreProperties)
            {
                auto mwcore = file.m_mwcoreProperties.child("mwcoreProperties");
                if (mwcore)
                {
                    return mwcore.child("contentTypeFriendlyName").text().as_string();
                }
            }
            return std::string();
        }

        std::string GetMatlabRelease(const SimulinkFile& file)
        {
            if (file.m_mwcoreProperties)
            {
                auto mwcore = file.m_mwcoreProperties.child("mwcoreProperties");
                if (mwcore)
                {
                    return mwcore.child("matlabRelease").text().as_string();
                }
            }
            return std::string();
        }

        std::string GetCategory(const SimulinkFile& file)
        {
            if (file.m_coreProperties)
            {
                auto core = file.m_coreProperties.child("cp:coreProperties");
                if (core)
                {
                    return core.child("cp:category").text().as_string();
                }
            }
            return std::string();
        }

        std::string GetCreator(const SimulinkFile& file)
        {
            if (file.m_coreProperties)
            {
                auto root = file.m_coreProperties.child("cp:coreProperties");
                if (root)
                {
                    const auto creator = root.child("dc:creator");
                    if (creator)
                    {
                        return creator.text().as_string();
                    }
                }
            }
            return std::string();
        }

        std::string GetVersion(const SimulinkFile& file)
        {
            if (file.m_coreProperties)
            {
                auto root = file.m_coreProperties.child("cp:coreProperties");
                if (root)
                {
                    const auto version = root.child("cp:version");
                    if (version)
                    {
                        return version.text().as_string();
                    }
                }
            }
            return std::string();
        }

        std::string GetRevision(const SimulinkFile& file)
        {
            if (file.m_coreProperties)
            {
                auto root = file.m_coreProperties.child("cp:coreProperties");
                if (root)
                {
                    const auto version = root.child("cp:revision");
                    if (version)
                    {
                        return version.text().as_string();
                    }
                }
            }
            return std::string();
        }

        std::string GetModified(const SimulinkFile& file)
        {
            if (file.m_coreProperties)
            {
                auto root = file.m_coreProperties.child("cp:coreProperties");
                if (root)
                {
                    const auto version = root.child("dcterms:modified");
                    if (version)
                    {
                        return version.text().as_string();
                    }
                }
            }
            return std::string();
        }
    } // namespace

    SimulinkFileInfo GetInfo(const SimulinkFile& file)
    {
        SimulinkFileInfo info;
        info.m_extension = "slx";
        info.m_contentType = GetContentType(file);
        info.m_contentTypeFriendlyName = GetContentTypeFriendlyName(file);
        info.m_matlabRelease = GetMatlabRelease(file);
        info.m_category = GetCategory(file);
        info.m_creator = GetCreator(file);
        info.m_version = GetVersion(file);
        info.m_revision = GetRevision(file);
        info.m_modified = GetModified(file);

        return info;
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