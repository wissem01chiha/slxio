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

    class SimulinkFileWriter
    {
    public:
        static ErrorCode Save(const SimulinkFile& file, const fs::path& directory);

    private:
        static ErrorCode SaveGraphicalInterface(const SimulinkFile& file,
                                                const fs::path& directory);
        static ErrorCode SaveCoreProperties(const SimulinkFile& file, const fs::path& directory);
        static ErrorCode SaveMwCoreProperties(const SimulinkFile& file, const fs::path& directory);
        static ErrorCode SaveMwCorePropertiesExtension(const SimulinkFile& file,
                                                       const fs::path& directory);
        static ErrorCode SaveConfigSetInfo(const SimulinkFile& file, const fs::path& directory);
        static ErrorCode SaveBlockDiagram(const SimulinkFile& file, const fs::path& directory);
        static ErrorCode SaveModelDictionary(const SimulinkFile& file, const fs::path& directory);
        static ErrorCode SaveBdDefaults(const SimulinkFile& file, const fs::path& directory);
        static ErrorCode SaveScheduleEditor(const SimulinkFile& file, const fs::path& directory);
        static ErrorCode SaveScheduleCore(const SimulinkFile& file, const fs::path& directory);
    };

}; // namespace slxio
