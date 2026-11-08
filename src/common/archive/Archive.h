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

namespace slxio
{
    class Archive final
    {
    public:
        Archive();
        Archive(const File& file);
        Archive* New();
        std::string GetArchiveExtension() const;
        void SetArchiveExtension(const char* ext);

        /* Set the archive directory folder is not given a temporary one will be
         * used as default */
        void SetArchiveDirectory(const Directory& directory);

        /** Get the archive directory object */
        Directory GetArchiveDirectory() const;

        /** Extract the archive if it is a ZIP archive. */
        HError Extract();

        /** Add a file to the Archive, if the file already there */
        HError Add(const File& file);

        /** Remove a file from teh archive, if the file exist else return and error
         */
        HError Remove(const File& file);

        /** Default Destructor */
        ~Archive() = default;

    private:
        Directory directory;
        File file;
    };

}; // namespace slxio
