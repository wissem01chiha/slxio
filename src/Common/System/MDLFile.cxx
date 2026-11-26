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

#include "MDLFile.h"
#include "SimulinkFileInfo.h"

namespace slxio
{
    namespace
    {

        std::string GetName(const MDLFile& file)
        {
            std::string content = file.m_content;
            auto res = content.find("Name");
            if (res != std::string::npos)
            {
                auto start = res + 4;
                auto end = content.find_first_of("\r\n", start);
                if (end != std::string::npos)
                {
                    std::string value = content.substr(start, end - start);
                    auto first = value.find_first_not_of(" \t\"");
                    auto last = value.find_last_not_of(" \t\"");
                    if (first != std::string::npos)
                    {
                        return value.substr(first, last - first + 1);
                    }
                }
            }
            return std::string("");
        }

        std::string GetRevision(const MDLFile& file)
        {
            std::string content = file.m_content;
            auto res = content.find("ComputedModelVersion");
            if (res != std::string::npos)
            {
                auto start = res + std::string("ComputedModelVersion").length();
                auto end = content.find_first_of("\r\n", start);
                if (end != std::string::npos)
                {
                    std::string value = content.substr(start, end - start);
                    auto first = value.find_first_not_of(" \t\"");
                    auto last = value.find_last_not_of(" \t\"");
                    if (first != std::string::npos)
                    {
                        return value.substr(first, last - first + 1);
                    }
                }
            }
            return std::string("");
        }

        std::string GetCreator(const MDLFile& file)
        {
            std::string content = file.m_content;
            auto res = content.find("Creator");
            if (res != std::string::npos)
            {
                auto start = res + std::string("Creator").length();
                auto end = content.find_first_of("\r\n", start);
                if (end != std::string::npos)
                {
                    std::string value = content.substr(start, end - start);
                    auto first = value.find_first_not_of(" \t\"");
                    auto last = value.find_last_not_of(" \t\"");
                    if (first != std::string::npos)
                    {
                        return value.substr(first, last - first + 1);
                    }
                }
            }
            return std::string("");
        }
    } // namespace

    SimulinkFileInfo GetInfo(const MDLFile& file)
    {
        SimulinkFileInfo info;
        info.m_extension = "mdl";
        info.m_name = GetName(file);
        info.m_revision = GetRevision(file);
        info.m_creator = GetCreator(file);
        return info;
    }

    void SetInfo(MDLFile& file, const SimulinkFileInfo& info)
    {
        return;
    }

} // namespace slxio