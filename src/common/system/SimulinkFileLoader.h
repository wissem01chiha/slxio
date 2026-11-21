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
#include "SimulinkFileInfo.h"
#include "Error.h"

namespace slxio
{
    struct SimulinkFile;

    /// Load a Simulink model from an extracted directory.
    class SimulinkFileLoader
    {
    public:
        static SimulinkFile Load(const fs::path& directory, ErrorCode& ec);
        static SimulinkFileInfo GetSimulinkFileInfo(const fs::path& path, ErrorCode& ec);

    private:
        static ErrorCode LoadGraphicalInterface(SimulinkFile& file, const fs::path& directory);
        static ErrorCode LoadCoreProperties(SimulinkFile& file, const fs::path& directory);
        static ErrorCode LoadMwCoreProperties(SimulinkFile& file, const fs::path& directory);
        static ErrorCode LoadMwCorePropertiesExtension(SimulinkFile& file,
                                                       const fs::path& directory);
        static ErrorCode LoadConfigSetInfo(SimulinkFile& file, const fs::path& directory);
        static ErrorCode LoadBlockDiagram(SimulinkFile& file, const fs::path& directory);
        static ErrorCode LoadModelDictionary(SimulinkFile& file, const fs::path& directory);
        static ErrorCode LoadBdDefaults(SimulinkFile& file, const fs::path& directory);
        static ErrorCode LoadScheduleEditor(SimulinkFile& file, const fs::path& directory);
        static ErrorCode LoadScheduleCore(SimulinkFile& file, const fs::path& directory);
    };

}; // namespace slxio
