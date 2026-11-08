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

#include "DirectoryOperations.h"

namespace slxio
{
    namespace system
    {

        std::string ToString(const std::filesystem::path& directory)
        {
            std::ostringstream oss;

            oss << directory.GetDirectoryName() << "\n";

            std::vector<File> files = directory.GetDirectoryFiles();
            for (const auto& file : files)
            {
                oss << "  - " << file.GetFileName() << "\n";
            }
            std::vector<Directory> subdirs = directory.GetSubDirectories();
            for (const auto& subdir : subdirs)
            {
                oss << subdir.GetDirectoryName() << "\n";

                std::vector<File> subFiles = subdir.GetDirectoryFiles();
                for (const auto& f : subFiles)
                {
                    oss << "    - " << f.GetFileName() << "\n";
                }
                std::vector<Directory> subSubDirs = subdir.GetSubDirectories();
                for (const auto& s : subSubDirs)
                {
                    oss << s.GetDirectoryName() << "\n";
                }
            }

            return oss.str();
        }

    }; // namespace system
}; // namespace slxio