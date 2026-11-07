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
#include "CoderInfo.h"

namespace slxio
{

    CoderInfo::CoderInfo() : m_identifier(""), m_storageClass("auto")
    {
    }

    std::string
    CoderInfo::GetStorageClass() const
    {
        return m_storageClass;
    }

    bool
    CoderInfo::IsTunable() const
    {
        return m_tunable;
    }

    std::string
    CoderInfo::GetIdentifier() const
    {
        return m_identifier;
    }

    uint32_t
    CoderInfo::GetAlignment() const
    {
        return m_alignment;
    }

};  // namespace slxio
