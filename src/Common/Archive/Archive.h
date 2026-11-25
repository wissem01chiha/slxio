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
#include "Compiler.h"
#include "Error.h"
#include "Diagnostic.h"
#include "ArchiveInfo.h"

namespace slxio
{
    class Archive final
    {
    public:
        Archive();
        explicit Archive(const fs::path& file);

        void SetArchiveExtractDirectory(const fs::path& directory);

        NODISCARD ArchiveInfo GetArchiveInfo() const;

        // Extract the archive if it is a ZIP archive.
        NODISCARD ErrorCode Extract();

        // Add a file to the Archive, if the file already there
        NODISCARD ErrorCode Add(const fs::path& file);

        // Remove a file from teh archive, if the file exist else return and error
        NODISCARD ErrorCode Remove(const fs::path& file);

        ~Archive() = default;

    private:
        // Set the extension of the archive path
        void SetArchiveExtension(const std::string& ext);

        fs::path m_file;
        fs::path m_directory;
        ArchiveInfo info;
    };

}; // namespace slxio
