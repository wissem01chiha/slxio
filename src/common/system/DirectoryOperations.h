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
    namespace system
    {

        /** Get files list in the subdiretcory  */
        std::vector<std::filesystem::path>
        GetDirectoryFiles(const std::filesystem::path& directory);

        /** Get a String Serialisation of the directory tree */
        std::string ToString(const std::filesystem::path& directory);

        /** Get the directory path. */
        std::string GetDirectoryPath(const std::filesystem::path& directory);

        /** Get the current working directory. */
        Directory GetWorkingDirectory(int* error);

        /**
         * Creates the directory structure for a given entry name.
         * The entry name can be in one of the following formats:
         * - "simulink/plugin/rels/" (a directory path)
         * - "simulink/blockdiagram.xml" (a file path)
         * This function ensures that the directory structure is created up
         * to the specified root folder (`dir`)
         */
        std::shared_ptr<Directory> CreateDirectoryStructure(const std::string& structure,
                                                            int* error);

        /** Create a system temporary directory and retrun a pointer to it*/
        error_code CreateTemporaryDirectory(int* error);

        /** same as CreateTemporaryDirectory using a prefix for directory name */
        std::shared_ptr<Directory> CreatePrefixedTemporaryDirectory(const std::string& prefix,
                                                                    int* error);

        /** Get the number of files in the directory.*/
        uint32_t GetNumberOfFiles();
    };

}; // namespace system
}
; // namespace slxio