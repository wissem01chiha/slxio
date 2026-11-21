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

#include "SimulinkFileLoader.h"
#include "SimulinkFile.h"
#include "Config.h"

#define RETURN_IF_FAILED(expr)                                                                     \
    if ((ec = (expr)) != ErrorCode::Ok)                                                            \
    return file

namespace slxio
{

#if SIMULINK_COMPATIBILTY_2024

    ErrorCode SimulinkFileLoader::LoadGraphicalInterface(SimulinkFile& file,
                                                         const fs::path& directory)
    {
        const std::string path = (directory / "simulink/graphicalInterface.json").string();
        if (!fs::exists(path))
        {
            return ErrorCode::LoadGraphicalInterfaceFail;
        }
        yyjson_read_err err{};
        yyjson_read_flag flg = YYJSON_READ_ALLOW_COMMENTS | YYJSON_READ_ALLOW_TRAILING_COMMAS;
        file.m_graphicalInterface = yyjson_read_file(path.c_str(), flg, nullptr, &err);
        if (!file.m_graphicalInterface)
        {
            return ErrorCode::LoadGraphicalInterfaceFail;
        }
        return ErrorCode::Ok;
    }
#else
    ErrorCode SimulinkFileLoader::LoadGraphicalInterface(SimulinkFile& file,
                                                         const fs::path& directory)
    {
        const std::string path = (directory / "simulink/graphicalInterface.xml").string();
        if (!fs::exists(path))
        {
            return ErrorCode::LoadGraphicalInterfaceFail;
        }
        auto result = file.m_graphicalInterface.load_file(path.c_str());
        if (!result)
        {
            return ErrorCode::LoadGraphicalInterfaceFail;
        }
        return ErrorCode::Ok;
    }
#endif

    ErrorCode SimulinkFileLoader::LoadCoreProperties(SimulinkFile& file, const fs::path& directory)
    {
        const auto path = directory / "metadata/coreProperties.xml";

        if (!fs::exists(path))
        {
            return ErrorCode::LoadCorePropertiesFail;
        }

        file.m_coreProperties.load_file(path.string().c_str());
        return ErrorCode::Ok;
    }

    ErrorCode SimulinkFileLoader::LoadMwCoreProperties(SimulinkFile& file,
                                                       const fs::path& directory)
    {
        const auto path = directory / "metadata/mwcoreProperties.xml";

        if (!fs::exists(path))
        {
            return ErrorCode::LoadMwCorePropertiesFail;
        }

        file.m_mwcoreProperties.load_file(path.string().c_str());
        return ErrorCode::Ok;
    }

    ErrorCode SimulinkFileLoader::LoadMwCorePropertiesExtension(SimulinkFile& file,
                                                                const fs::path& directory)
    {
        const auto path = directory / "metadata/mwcorePropertiesExtension.xml";

        if (!fs::exists(path))
        {
            return ErrorCode::LoadMwCorePropertiesExtensionFail;
        }

        file.m_mwcorePropertiesExtension.load_file(path.string().c_str());
        return ErrorCode::Ok;
    }

    ErrorCode SimulinkFileLoader::LoadConfigSetInfo(SimulinkFile& file, const fs::path& directory)
    {
        const auto path = directory / "simulink/configSetInfo.xml";

        if (!fs::exists(path))
        {
            return ErrorCode::LoadConfigSetInfoFail;
        }

        file.m_configSetInfo.load_file(path.string().c_str());
        return ErrorCode::Ok;
    }

    ErrorCode SimulinkFileLoader::LoadBlockDiagram(SimulinkFile& file, const fs::path& directory)
    {
        const auto path = directory / "simulink/blockdiagram.xml";

        if (!fs::exists(path))
        {
            return ErrorCode::LoadBlockDiagramFail;
        }

        file.m_blockdiagram.load_file(path.string().c_str());
        return ErrorCode::Ok;
    }

    ErrorCode SimulinkFileLoader::LoadModelDictionary(SimulinkFile& file, const fs::path& directory)
    {
        const auto path = directory / "simulink/modelDictionary.xml";

        if (!fs::exists(path))
        {
            return ErrorCode::LoadModelDictionaryFail;
        }

        file.m_modelDictionary.load_file(path.string().c_str());
        return ErrorCode::Ok;
    }

    ErrorCode SimulinkFileLoader::LoadBdDefaults(SimulinkFile& file, const fs::path& directory)
    {
        const auto path = directory / "simulink/bddefaults.xml";

        if (!fs::exists(path))
        {
            return ErrorCode::LoadBdDefaultsFail;
        }

        file.m_bddefaults.load_file(path.string().c_str());
        return ErrorCode::Ok;
    }

    ErrorCode SimulinkFileLoader::LoadScheduleEditor(SimulinkFile& file, const fs::path& directory)
    {
        const auto path = directory / "simulink/scheduleEditor.xml";

        if (!fs::exists(path))
        {
            return ErrorCode::LoadScheduleEditorFail;
        }

        file.m_scheduleEditor.load_file(path.string().c_str());
        return ErrorCode::Ok;
    }

    ErrorCode SimulinkFileLoader::LoadScheduleCore(SimulinkFile& file, const fs::path& directory)
    {
        const auto path = directory / "simulink/scheduleCore.xml";

        if (!fs::exists(path))
        {
            return ErrorCode::LoadScheduleCoreFail;
        }

        file.m_scheduleCore.load_file(path.string().c_str());
        return ErrorCode::Ok;
    }

    SimulinkFile SimulinkFileLoader::Load(const fs::path& directory, ErrorCode& ec)
    {
        SimulinkFile file;

        RETURN_IF_FAILED(LoadCoreProperties(file, directory));
        RETURN_IF_FAILED(LoadGraphicalInterface(file, directory));
        RETURN_IF_FAILED(LoadMwCoreProperties(file, directory));
        RETURN_IF_FAILED(LoadMwCorePropertiesExtension(file, directory));
        RETURN_IF_FAILED(LoadConfigSetInfo(file, directory));
        RETURN_IF_FAILED(LoadBlockDiagram(file, directory));
        RETURN_IF_FAILED(LoadModelDictionary(file, directory));
        RETURN_IF_FAILED(LoadBdDefaults(file, directory));
        RETURN_IF_FAILED(LoadScheduleEditor(file, directory));
        RETURN_IF_FAILED(LoadScheduleCore(file, directory));

        ec = ErrorCode::Ok;
        return file;
    }

    SimulinkFileInfo SimulinkFileLoader::GetSimulinkFileInfo(const fs::path& path, ErrorCode& ec)
    {
        SimulinkFile file = SimulinkFileLoader::Load(path, ec);
        return GetInfo(file);
    }

}; // namespace slxio