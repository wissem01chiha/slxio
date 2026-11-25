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
#include "Compiler.h"

namespace slxio
{
    struct MDLFile;

    /// Load a Simulink mdl model from a file path.
    class MDLFileLoader
    {
    public:
        static MDLFile Load(const fs::path& path, ErrorCode& ec);
        NODISCARD static SimulinkFileInfo GetSimulinkFileInfo(const fs::path& path, ErrorCode& ec);

    private:
        NODISCARD static ErrorCode LoadGraphicalInterface(MDLFile& file, const fs::path& directory);
        NODISCARD static ErrorCode LoadCoreProperties(MDLFile& file, const fs::path& directory);
        NODISCARD static ErrorCode LoadMwCoreProperties(MDLFile& file, const fs::path& directory);
        NODISCARD static ErrorCode LoadMwCorePropertiesExtension(MDLFile& file,
                                                                 const fs::path& directory);
        NODISCARD static ErrorCode LoadConfigSetInfo(MDLFile& file, const fs::path& directory);
        NODISCARD static ErrorCode LoadBlockDiagram(MDLFile& file, const fs::path& directory);
        NODISCARD static ErrorCode LoadModelDictionary(MDLFile& file, const fs::path& directory);
        NODISCARD static ErrorCode LoadBdDefaults(MDLFile& file, const fs::path& directory);
        NODISCARD static ErrorCode LoadScheduleEditor(MDLFile& file, const fs::path& directory);
        NODISCARD static ErrorCode LoadScheduleCore(MDLFile& file, const fs::path& directory);
    };

}; // namespace slxio