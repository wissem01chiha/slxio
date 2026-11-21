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
#include "Error.h"

namespace slxio
{

    namespace
    {

        std::string GraphicalInterfacePath(const fs::path& directory)
        {
#if SIMULINK_COMPATIBILTY_2024
            return (directory / "simulink/graphicalInterface.json").string();
#else
            return (directory / "simulink/graphicalInterface.xml").string();
#endif
        }

        ErrorCode LoadGraphicalInterface(SimulinkFile& file, const fs::path& directory)
        {
            const std::string path = GraphicalInterfacePath(directory);
            if (!fs::exists(path))
            {
                return ErrorCode::LoadGraphicalInterfaceFail;
            }

#if SIMULINK_COMPATIBILTY_2024

            yyjson_read_err err{};
            yyjson_read_flag flg = YYJSON_READ_ALLOW_COMMENTS | YYJSON_READ_ALLOW_TRAILING_COMMAS;
            file.m_graphicalInterface = yyjson_read_file(path.c_str(), flg, nullptr, &err);
            if (!file.m_graphicalInterface)
            {
                return ErrorCode::LoadGraphicalInterfaceFail;
            }

#else
            auto result = file.m_graphicalInterface.load_file(path.c_str());
            if (!result)
            {
                return ErrorCode::LoadGraphicalInterfaceFail;
            }
#endif
            return ErrorCode::Ok;
        }

        SimulinkFile Load(const fs::path& directory, ErrorCode& ec)
        {
            SimulinkFile file;
            file.m_coreProperties.load_file(
                (directory / "metadata/coreProperties.xml").string().c_str());
            file.m_mwcoreProperties.load_file(
                (directory / "metadata/mwcoreProperties.xml").string().c_str());
            ec = LoadGraphicalInterface(file, directory);

            file.m_mwcorePropertiesExtension.load_file(
                (directory / "metadata/mwcorePropertiesExtension.xml").string().c_str());
            file.m_configSetInfo.load_file(
                (directory / "simulink/configSetInfo.xml").string().c_str());
            file.m_blockdiagram.load_file(
                (directory / "simulink/blockdiagram.xml").string().c_str());
            file.m_modelDictionary.load_file(
                (directory / "simulink/modelDictionary.xml").string().c_str());
            file.m_bddefaults.load_file((directory / "simulink/bddefaults.xml").string().c_str());
            file.m_scheduleEditor.load_file(
                (directory / "simulink/scheduleEditor.xml").string().c_str());
            file.m_scheduleCore.load_file(
                (directory / "simulink/scheduleCore.xml").string().c_str());
            return file;
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

        GraphicalInterfaceInfo GetGraphicalInterfaceInfo(const SimulinkFile& file)
        {
            if (file.m_coreProperties)
            {
                auto root = file.m_coreProperties.child("GraphicalInterface");
                if (root)
                {
                    GraphicalInterfaceInfo info;

                    return info;
                }
            }
            return GraphicalInterfaceInfo();
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
        info.m_graphicalInterfaceInfo = GetGraphicalInterfaceInfo(file);

        return info;
    }

    SimulinkFileInfo GetSimulinkFileInfo(const fs::path& path, ErrorCode& ec)
    {
        SimulinkFile file = Import(path, ec);
        return GetInfo(file);
    }

    void SetInfo(SimulinkFile& file, const SimulinkFileInfo& info)
    {
        return;
    }

    SimulinkFile Import(const fs::path& path, ErrorCode& ec)
    {
        if (fs::is_directory(path))
        {
            return Load(path, ec);
        }
        SimulinkFile file;
        return file;
    }

    fs::path Flush(const SimulinkFile& file)
    {
        return fs::path();
    }

}; // namespace slxio