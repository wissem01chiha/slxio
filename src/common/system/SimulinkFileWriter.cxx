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

#include "SimulinkFileWriter.h"
#include "SimulinkFile.h"

namespace slxio
{
    ErrorCode SimulinkFileWriter::Save(const SimulinkFile& file, const fs::path& directory)
    {
        return ErrorCode::Ok;
    }

    ErrorCode SimulinkFileWriter::SaveGraphicalInterface(const SimulinkFile& file,
                                                     const fs::path& directory)
    {
        return ErrorCode::Ok;
    }

    ErrorCode SimulinkFileWriter::SaveCoreProperties(const SimulinkFile& file,
                                                 const fs::path& directory)
    {
        return ErrorCode::Ok;
    }

    ErrorCode SimulinkFileWriter::SaveMwCoreProperties(const SimulinkFile& file,
                                                   const fs::path& directory)
    {
        return ErrorCode::Ok;
    }

    ErrorCode SimulinkFileWriter::SaveMwCorePropertiesExtension(const SimulinkFile& file,
                                                            const fs::path& directory)
    {
        return ErrorCode::Ok;
    }

    ErrorCode SimulinkFileWriter::SaveConfigSetInfo(const SimulinkFile& file, const fs::path& directory)
    {
        return ErrorCode::Ok;
    }

    ErrorCode SimulinkFileWriter::SaveBlockDiagram(const SimulinkFile& file, const fs::path& directory)
    {
        return ErrorCode::Ok;
    }

    ErrorCode SimulinkFileWriter::SaveModelDictionary(const SimulinkFile& file,
                                                  const fs::path& directory)
    {
        return ErrorCode::Ok;
    }

    ErrorCode SimulinkFileWriter::SaveBdDefaults(const SimulinkFile& file, const fs::path& directory)
    {
        return ErrorCode::Ok;
    }

    ErrorCode SimulinkFileWriter::SaveScheduleEditor(const SimulinkFile& file,
                                                 const fs::path& directory)
    {
        return ErrorCode::Ok;
    }

    ErrorCode SimulinkFileWriter::SaveScheduleCore(const SimulinkFile& file, const fs::path& directory)
    {
        return ErrorCode::Ok;
    }

}; //  namespace slxio