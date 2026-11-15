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

    class FileInfo;

    class File final
    {
    public:
        enum class Mode
        {
            Read,
            Write,
            Append,
            Truncate
        };
        File() = default;
        File(const std::string& path, Mode mode);
        explicit File(const std::string& path);

        ErrorCode Open();
        ErrorCode Close();
        ErrorCode Read();

        bool Empty() const;
        bool Exist() const;

        ErrorCode Write(const std::string& message);
        ErrorCode Write(std::vector<std::string>& message);
        ErrorCode Copy(const Directory& directory);
        ErrorCode Rename(const std::string& filename);
        ErrorCode Move(const Directory& directory);
        ErrorCode Delete();

        void SetFileMode(const File::Mode mode);
        FileInfo& GetFileInfo();

        ~File() = default;

    protected:
        FileInfo& m_info;
        std::string m_filePath;
        File::Mode m_mode;
        std::vector<char> m_buffer;
        uint32_t m_bytes = 0;
        uint32_t m_cachedSize;
    };

}; // namespace slxio
