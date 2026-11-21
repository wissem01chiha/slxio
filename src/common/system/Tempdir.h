/*
 * Copyright 2025-2026 Wissem Chiha
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

    enum class CleanupOption
    {
        Always,
        OnSuccess,
        Never
    };

    struct ConfigOption
    {
        fs::path m_path = fs::temp_directory_path();
        CleanupOption m_cleanup = CleanupOption::Always;
        std::string m_prefix = "temp_dir";
    };

    class Tempdir final
    {
    public:
        Tempdir();
        explicit Tempdir(const ConfigOption& config);
        explicit Tempdir(fs::path root_path);
        explicit Tempdir(fs::path root_path, CleanupOption cleanup);
        explicit Tempdir(CleanupOption cleanup);

        Tempdir(const Tempdir&) = delete;
        Tempdir& operator=(const Tempdir&) = delete;

        // Moving Tempdir is enabled
        Tempdir(Tempdir&&) = default;
        Tempdir& operator=(Tempdir&&) = default;

        // Generates a unique name for the temporary directory.
        std::string GenerateDirName() noexcept;

        fs::path GetDirPath() const noexcept;

        // Manually triggers cleanup of the temporary directory.
        void Cleanup();

        ~Tempdir();

    private:
        fs::path m_root_path;
        ConfigOption m_config;
    };

}; // namespace slxio