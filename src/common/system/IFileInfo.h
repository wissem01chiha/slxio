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
    class IFileInfo
    {
    public:
        virtual ~IFileInfo() = default;
        virtual bool Empty() const = 0;
        virtual fs::path GetPath() const = 0;
        /** Get filename from path. */
        const std::string GetName() const;
    };
}; // namespace slxio

/** Get file mode flags. */
const int GetFileMode();

/** Get parent directory object. */
Directory GetFileDirectory() const;

/** Check Whatever the file is still open or not */
bool IsOpened() const;

/** Get file size on disk. */
UInt32 Size() const;

std::vector<char> GetInternalBuffer() const;