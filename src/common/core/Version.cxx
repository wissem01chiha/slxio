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

#include "Version.h"
#include "Config.h"

namespace slxio
{

    uint32_t Version::GetMajorVersion()
    {
        return (uint32_t)SLXIO_VERSION_MAJOR;
    }

    uint32_t Version::GetMinorVersion()
    {
        return (uint32_t)SLXIO_VERSION_MINOR;
    }

    uint32_t Version::GetPatchVersion()
    {
        return (uint32_t)SLXIO_VERSION_PATCH;
    }
    bool Version::IsMajorVersionLessThan(uint32_t version)
    {
        return SLXIO_VERSION_MAJOR < version;
    }

    bool Version::IsMinorVersionLessThan(uint32_t version)
    {
        return SLXIO_VERSION_MINOR < version;
    }

    std::string Version::GetVersionString()
    {
        return std::to_string(GetMajorVersion()) + "." + std::to_string(GetMinorVersion()) + "." +
               std::to_string(GetPatchVersion());
    }

}; // namespace slxio
