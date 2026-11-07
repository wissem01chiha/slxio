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

#include "Doctest.h"
#include "VersionManager.h"

namespace slxio
{

    TEST_CASE("VersionManager reports a consistent version")
    {
        VersionManager version;
        const std::string expectedVersion = std::to_string(VersionManager::GetMajorVersion()) +
                                            "." +
                                            std::to_string(VersionManager::GetMinorVersion()) +
                                            "." + std::to_string(VersionManager::GetPatchVersion());

        CHECK(VersionManager::GetVersionString() == expectedVersion);
        CHECK(version.IsMajorVersionLessThan(VersionManager::GetMajorVersion() + 1));
        CHECK_FALSE(version.IsMajorVersionLessThan(VersionManager::GetMajorVersion()));
        CHECK(version.IsMinorVersionLessThan(VersionManager::GetMinorVersion() + 1));
        CHECK_FALSE(version.IsMinorVersionLessThan(VersionManager::GetMinorVersion()));
    }

}  // namespace slxio