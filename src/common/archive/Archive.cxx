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

#include "Archive.h"
#include "zip.h"

namespace slxio
{
    Archive::Archive() = default;

    Archive::Archive(const fs::path& file)
        : m_file(file)
    {
    }

    void Archive::SetArchiveExtractDirectory(const fs::path& directory)
    {
        m_directory = directory;
    }

    ArchiveInfo Archive::GetArchiveInfo() const
    {
        return slxio::GetArchiveInfo(m_file);
    }

    NODISCARD ErrorCode Archive::Extract()
    {
        int err = 0;
        std::unique_ptr<zip_t, decltype(&zip_close)> archive(zip_open(m_file.string().c_str(), ZIP_RDONLY, &err), &zip_close);
        if (!archive)
        {
            return ErrorCode::ArchiveOpenFailed;
        }

        const zip_int64_t count = zip_get_num_entries(archive.get(), 0);
        if (count < 0)
        {
            return ErrorCode::ArchiveOpenFailed;
        }

        for (zip_int64_t i = 0; i < count; ++i)
        {
            const char* name = zip_get_name(archive.get(), i, 0);
            if (!name)
            {
                continue;
            }

            const std::string_view entryName(name);
            const fs::path target = m_directory / entryName;
            std::error_code ec;

            if (!entryName.empty() && entryName.back() == '/')
            {
                fs::create_directories(target, ec);
                if (ec)
                {
                    return ErrorCode::FileSystemError;
                }
                continue;
            }

            fs::create_directories(target.parent_path(), ec);
            if (ec)
            {
                return ErrorCode::FileSystemError;
            }

            std::unique_ptr<zip_file_t, decltype(&zip_fclose)> entry(zip_fopen_index(archive.get(), i, 0), &zip_fclose);
            if (!entry)
            {
                continue;
            }

            std::ofstream out(target, std::ios::binary);
            if (!out)
            {
                return ErrorCode::FileSystemError;
            }

            std::array<char, 4096> buffer{};
            zip_int64_t bytes = 0;
            while ((bytes = zip_fread(entry.get(), buffer.data(), buffer.size())) > 0)
            {
                out.write(buffer.data(), static_cast<std::streamsize>(bytes));
            }
            if (bytes < 0 || !out)
            {
                return ErrorCode::ArchiveSourceFailed;
            }
        }

        return ErrorCode::Ok;
    }

    NODISCARD ErrorCode Archive::Add(const fs::path& file)
    {
        int err = 0;
        std::unique_ptr<zip_t, decltype(&zip_discard)> archive(zip_open(m_file.string().c_str(), ZIP_CREATE, &err), &zip_discard);
        if (!archive)
        {
            return ErrorCode::ArchiveOpenFailed;
        }

        const std::string entryName = file.filename().string();
        const zip_int64_t idx = zip_name_locate(archive.get(), entryName.c_str(), 0);

        zip_source_t* source = zip_source_file(archive.get(), file.string().c_str(), 0, -1);
        if (!source)
        {
            return ErrorCode::ArchiveSourceFailed;
        }

        if (idx >= 0)
        {
            if (zip_file_replace(archive.get(), idx, source, ZIP_FL_ENC_UTF_8) < 0)
            {
                zip_source_free(source);
                return ErrorCode::ArchiveReplaceFailed;
            }
        }
        else if (zip_file_add(archive.get(), entryName.c_str(), source, ZIP_FL_ENC_UTF_8) < 0)
        {
            zip_source_free(source);
            return ErrorCode::ArchiveAddFailed;
        }

        return zip_close(archive.release()) < 0 ? ErrorCode::ArchiveCloseFailed : ErrorCode::Ok;
    }

    NODISCARD ErrorCode Archive::Remove(const fs::path& file)
    {
        int err = 0;
        std::unique_ptr<zip_t, decltype(&zip_discard)> archive(zip_open(m_file.string().c_str(), 0, &err), &zip_discard);
        if (!archive)
        {
            return ErrorCode::ArchiveOpenFailed;
        }

        const std::string entryName = file.filename().string();
        const zip_int64_t idx = zip_name_locate(archive.get(), entryName.c_str(), 0);
        if (idx < 0)
        {
            return ErrorCode::ArchiveEntryNotFound;
        }

        if (zip_delete(archive.get(), idx) < 0)
        {
            return ErrorCode::ArchiveRemoveFailed;
        }

        return zip_close(archive.release()) < 0 ? ErrorCode::ArchiveCloseFailed : ErrorCode::Ok;
    }

    void Archive::SetArchiveExtension(const std::string& ext)
    {
        if (ext.empty())
        {
            return;
        }
        m_file.replace_extension(ext);
    }

}; // namespace slxio