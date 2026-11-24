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

#include "ArchiveInfo.h"

namespace slxio
{

    namespace
    {
        std::string GetFileExtension(const fs::path& file)
        {
            if (file.empty())
                return {};
            auto pos = file.string().find_last_of('.');
            if (pos == std::string::npos)
                return {};
            return file.string().substr(pos + 1);
        }
    } // namespace

    ArchiveInfo GetArchiveInfo(const fs::path& file)
    {
        ArchiveInfo info;
        info.m_file = file;
        info.m_extension = GetFileExtension(file);
        info.m_size = fs::file_size(file);
        info.m_empty = info.m_size == 0;
        return info;
    }

}; // namespace slxio