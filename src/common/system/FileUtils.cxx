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

#include "FileUtils.h"

namespace slxio
{

    std::string ReadFile(const fs::path& path)
    {
        constexpr auto read_size = std::size_t(4096);
        auto stream = std::ifstream(path);
        stream.exceptions(std::ios_base::badbit);

        if (not stream)
        {
            throw std::ios_base::failure("file does not exist");
        }

        auto out = std::string();
        auto buf = std::string(read_size, '\0');
        while (stream.read(&buf[0], read_size))
        {
            out.append(buf, 0, stream.gcount());
        }
        out.append(buf, 0, stream.gcount());
        return out;
    }

    std::string GetBasename(const fs::path& path)
    {
        return path.filename().string();
    }

    fs::path ChangeBaseName(const fs::path& path, const std::string& new_basename)
    {
        fs::path new_path = path;
        new_path.replace_filename(new_basename);
        return new_path;
    }

    std::string GetDirname(const fs::path& path)
    {
        return path.parent_path().string();
    }

    fs::path PathJoin(const fs::path& base, const std::vector<fs::path>& components)
    {
        fs::path result = base;
        for (const auto& comp : components)
        {
            result /= comp;
        }
        return result;
    }

    std::vector<fs::path> GetFileList(const fs::path& directory)
    {
        std::vector<fs::path> files;
        for (const auto& entry : fs::directory_iterator(directory))
        {
            if (entry.is_regular_file())
            {
                files.push_back(entry.path());
            }
        }
        return files;
    }

    uint32_t GetFileNumber(const fs::path& directory, ErrorCode* error)
    {
        uint32_t count = 0;
        try
        {
            for (const auto& entry : fs::directory_iterator(directory))
            {
                if (entry.is_regular_file())
                {
                    ++count;
                }
            }
        }
        catch (const fs::filesystem_error& e)
        {
            if (error)
                *error = ErrorCode::FileSystemError;
            return 0;
        }
        if (error)
            *error = ErrorCode::Ok;
        return count;
    }

    std::string ToString(const fs::path& directory)
    {
        std::string result;
        for (const auto& entry : fs::recursive_directory_iterator(directory))
        {
            result += entry.path().string() + "\n";
        }
        return result;
    }

    fs::path GetWorkingPath(ErrorCode* error)
    {
        try
        {
            fs::path cwd = fs::current_path();
            if (error)
                *error = ErrorCode::Ok;
            return cwd;
        }
        catch (const fs::filesystem_error& e)
        {
            if (error)
                *error = ErrorCode::FileSystemError;
            return fs::path();
        }
    }
} // namespace slxio