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

 /// Provides access to the library version information.
class  VersionManager final
{
public:
    VersionManager() = default;

    /** Returns the major version number of the library.*/
    static uint32_t GetMajorVersion();

    /** Returns the minor version number of the library.*/
    static uint32_t GetMinorVersion();

    /** Returns the patch version number of the library.*/
    static uint32_t GetPatchVersion();

    /** Checks if the current major version is less than the given version.*/
    bool IsMajorVersionLessThan(uint32_t version);

    /** Checks if the current minor version is less than the given version.*/
    bool IsMinorVersionLessThan(uint32_t version);

    /** Returns the full version string in "major.minor.patch" format.*/
    static std::string GetVersionString();

    ~VersionManager() = default;
};

}; // namespace slxio
