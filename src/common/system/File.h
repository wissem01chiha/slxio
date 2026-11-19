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
#include "IFile.h"
#include "Error.h"

namespace slxio
{
    class FileInfo;

    class File final : public IFile 
    {
    public:
        File() = default;
        File(const std::string& path);
        explicit File(const std::string& path);

        ErrorCode Open(IFile::Mode mode) override;
        ErrorCode Close() override;
        ErrorCode Read() override;

        bool Empty() const override;

        ErrorCode Write(const std::string& message);
        ErrorCode Write(std::vector<std::string>& message);
        ErrorCode Copy(const std::string& directory);
        ErrorCode Rename(const std::string& filename);
        ErrorCode Move(const std::string& directory);
        ErrorCode Delete();

        FileInfo& GetFileInfo();

        ~File() = default;

    protected:
        friend class FileInfo;
        
        FileInfo& m_info;
        std::string m_filePath;
        File::Mode m_mode;
        std::vector<char> m_buffer;
        uint32_t m_bytes = 0;
        uint32_t m_cachedSize;
    };

}; // namespace slxio
