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
    // Source: https://stackoverflow.com/a/116220
    std::string ReadFile(const fs::path& path);

    // Get the basename of the given path
    std::string GetBasename(const fs::path& path);

    // Change the basename of the given path
    fs::path ChangeBaseName(const fs::path& path, const std::string& new_basename);

    // Get the directory name of the given path
    std::string GetDirname(const fs::path& path);

    // Join multiple path components into a single path
    fs::path PathJoin(const fs::path& base, const std::vector<fs::path>& components);

    // Get files path list in the given directory path
    std::vector<fs::path> GetFileList(const fs::path& directory);

    // Get the number of files in the directory.
    uint32_t GetFileNumber(const fs::path& directory, ErrorCode* error = nullptr);

    // Get a String Serialisation of the directory tree
    std::string ToString(const fs::path& directory);

    // Get the current working directory.
    fs::path GetWorkingPath(ErrorCode* error = nullptr);

    /**
     * Creates the directory structure for a given entry name.
     * The entry name can be in one of the following formats:
     * - "simulink/plugin/rels/"  (a directory path)
     * - "simulink/blockdiagram.xml" (a file path)
     * This function ensures that the directory structure is created up
     * to the specified root folder (`dir`)
     */
    std::shared_ptr<fs::path> CreateDirectoryStructure(const std::string& structure,
                                                       ErrorCode* error = nullptr);

}; // namespace slxio