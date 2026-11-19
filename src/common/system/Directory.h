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

#pragma once

#include "CommonPCH.h"
#include "Error.h"

namespace slxio
{

    class Directory final
    {
    public:
        Directory() = default;
        explicit Directory(const std::string& path);

        HError Initialize();

        void Add(const File& file);
        void Remove(const File& file);

        /** Check if the directory contains a given file/directory, by name */
        bool Contains(std::string& entryname) const;

        /** Get subdirectories in the current directory. */
        std::vector<Directory> GetSubDirectories() const;

        /** Get files list in the subdiretcory  */
        std::vector<File> GetDirectoryFiles() const;

        /** Get a file by index.*/
        const std::shared_ptr<File> GetFile(const SId& index) const;

        /** Get a specific file by name.*/
        const std::shared_ptr<File> GetFile(const std::string& filename) const;

        uint32_t GetNumberOfFiles() const;
        std::string GetDirectoryName() const;
        const std::string GetDirectoryPath() const;

        /** Check if the given path is a directory. */
        static bool Exist(const std::string& path);

        /** Check if the directory is empty. */
        bool Empty() const;

        /** Check if the directory exist on disk. */
        bool Exist() const;

        /** Delete all files/subfolders inside the directory */
        HError Clear();

        /** Move the directory to an other directory. */
        HError Move(const Directory& directory);

        /** Delete a directory and contenant from disk */
        static HError Delete(const std::string& path);
        ErrorCode Delete();

        ~Directory() = default;

    private:
        std::string m_fullPath;
        std::vector<File> m_files;
        std::vector<Directory> m_subDirs;
    };

}; // namespace slxio

