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
#include "Error.h"

namespace slxio
{
    struct SimulinkFileInfo;

    struct MDLFile
    {
        std::string m_content;
    };

    SimulinkFileInfo GetInfo(const MDLFile& file);
    SimulinkFileInfo GetSimulinkFileInfo(const fs::path& path, ErrorCode& ec);

    void SetInfo(MDLFile& file, const SimulinkFileInfo& info);

    MDLFile Import(const fs::path& file, ErrorCode& ec);
    fs::path Flush(const MDLFile& file);

}; // namespace slxio