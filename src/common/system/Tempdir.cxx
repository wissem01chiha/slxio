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

#include "Tempdir.h"

namespace slxio
{
    Tempdir::Tempdir()
    {
        m_root_path = fs::temp_directory_path() / GenerateDirName();
        fs::create_directories(m_root_path);
    }

    Tempdir::Tempdir(const ConfigOption& config)
    {
        m_config = config;
        m_root_path = m_config.m_path / GenerateDirName();
        fs::create_directories(m_root_path);
    }

    Tempdir::Tempdir(fs::path root_path)
    {
        m_root_path = std::move(root_path);
        fs::create_directories(m_root_path);
    }

    Tempdir::Tempdir(fs::path root_path, CleanupOption cleanup)
    {
        m_root_path = std::move(root_path);
        m_config.m_cleanup = cleanup;
        fs::create_directories(m_root_path);
    }

    Tempdir::Tempdir(CleanupOption cleanup)
    {
        m_config.m_cleanup = cleanup;
        m_root_path = fs::temp_directory_path() / GenerateDirName();
        fs::create_directories(m_root_path);
    }

    std::string Tempdir::GenerateDirName() noexcept
    {
        using namespace std::chrono;

        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dist(10000, 99999);
        int random_number = dist(gen);
 
        auto now = system_clock::now();
        auto timestamp = duration_cast<milliseconds>(now.time_since_epoch()).count();

        std::string ts = std::to_string(timestamp);
        std::string rn = std::to_string(random_number);
        return m_config.m_prefix + "_" + ts + "_" + rn;
    }

    fs::path Tempdir::GetDirPath() const noexcept
    {
        return m_root_path;
    }

    void Tempdir::Cleanup()
    {
         if (!fs::exists(m_root_path))
            return;

        bool always_cleanup = m_config.m_cleanup == CleanupOption::Always;
        bool on_sucess_cleanup_no_exception =
            m_config.m_cleanup == CleanupOption::OnSuccess && std::uncaught_exceptions() <= 0;

        if (!always_cleanup && !on_sucess_cleanup_no_exception)
        {
            return;
        }

        try
        {
            fs::remove_all(m_root_path);
        }
        catch (const std::exception& ex)
        {
            throw std::runtime_error("failed to remove temporary directory: " + m_root_path.string() + ". Error: " + ex.what());
        }
    }

    Tempdir::~Tempdir()
    {
         try
        {
            Cleanup();
        }
        catch (const std::exception& e)
        {
            // do nothing as rethrowing is not allowed in destructor
            // error was already logged in cleanup method
        }
    }

}; // namespace slxio