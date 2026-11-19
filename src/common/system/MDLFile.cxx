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

#include "MDLFile.h"
#include "SimulinkFileInfo.h"

namespace slxio
{
    namespace
    {
        MDLFile Load(const fs::path& directory)
        {
            return MDLFile();
        };

    } // namespace

    SimulinkFileInfo GetInfo(const MDLFile& file)
    {
        SimulinkFileInfo info;
        info.m_extension = "mdl";
        return info;
    }

    void SetInfo(MDLFile& file, const SimulinkFileInfo& info)
    {
        return;
    }

    MDLFile Import(const fs::path& file)
    {
        return Load(file);
    }

    fs::path Flush(const MDLFile& file)
    {
        // Implementation goes here
        return fs::path();
    }
} // namespace slxio