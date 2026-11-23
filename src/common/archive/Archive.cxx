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
#include "libzip.h"
#include "Filesystem.h"

namespace slxio
{
    Archive::Archive(const fs::path& file)
    {
    }

    void Archive::SetArchiveExtractDirectory(const fs::path& directory)
    {
        m_directory = directory;
    }

    ArchiveInfo& Archive::GetArchiveInfo() const
    {
        return m_info;
    }

    NODISCARD ErrorCode Archive::Extract()
    {
        int err = 0;
        uv_fs_t req;

        zip_t* archive = zip_open(file.GetFilePath().c_str(), ZIP_RDONLY, &err);
        if (!archive)
        {
            return SLXIO_LIBZIP_ERROR(err);
        }

        zip_int64_t num_entries = zip_get_num_entries(archive, 0);

        for (zip_uint64_t i = 0; i < num_entries; ++i)
        {
            const char* name = zip_get_name(archive, i, 0);
            if (!name)
            {
                continue;
            }
            char entrydirpath[1024];
            snprintf(entrydirpath,
                     sizeof(entrydirpath),
                     "%s/%s",
                     m_directory.GetDirectoryPath().c_str(),
                     name);

            ErrorCode ec = ErrorCode::Ok;
            CreateDirectories(entrydirpath, &ec);
            if (ec != ErrorCode::Ok)
            {
                return ec;
            }

            zip_file_t* zf = zip_fopen_index(archive, i, 0);
            if (!zf)
            {
                continue;
            }

            FILE* out = fopen(entrydirpath, "wb");
            if (!out)
            {
                zip_fclose(zf);
                continue;
            }

            char InternalBuffer[4096];
            zip_int64_t bytes;
            while ((bytes = zip_fread(zf, InternalBuffer, sizeof(InternalBuffer))) > 0)
            {
                fwrite(InternalBuffer, 1, bytes, out);
            }
            fclose(out);
            zip_fclose(zf);
        }

        return ErrorCode::Ok;
    }

    NODISCARD ErrorCode Archive::Add(const fs::path& file)
    {
        int err = 0;
        zip_t* za = zip_open(file.GetFilePath().c_str(), ZIP_CREATE, &err);
        if (!za)
        {
            return SLXIO_LIBZIP_ERROR(err);
        }

        zip_int64_t idx = zip_name_locate(za, file.GetFileName().c_str(), 0);

        zip_source_t* source = zip_source_file(za, file.GetFilePath().c_str(), 0, -1);
        if (!source)
        {
            zip_close(za);
            return ErrorCode::ArchiveSourceFailed;
        }

        if (idx >= 0)
        {
            if (zip_file_replace(za, idx, source, ZIP_FL_ENC_UTF_8) < 0)
            {
                zip_source_free(source);
                zip_close(za);
                return ErrorCode::ArchiveReplaceFailed;
            }
        }
        else
        {
            if (zip_file_add(za, file_.GetFileName().c_str(), source, ZIP_FL_ENC_UTF_8) < 0)
            {
                zip_source_free(source);
                zip_close(za);
                return ErrorCode::ArchiveAddFailed;
            }
        }
        if (zip_close(za) < 0)
        {
            return ErrorCode::ArchiveCloseFailed;
        }

        return ErrorCode::Ok;
    }

    NODISCARD ErrorCode Archive::Remove(const fs::path& file)
    {
        int err = 0;
        zip_t* za = zip_open(file.GetFilePath().c_str(), ZIP_CREATE, &err);
        if (!za)
        {
            return ErrorCode::ArchiveOpenFailed;
        }

        zip_int64_t idx = zip_name_locate(za, file_.GetFileName().c_str(), 0);
        if (idx < 0)
        {
            zip_close(za);
            return ErrorCode::ArchiveEntryNotFound;
        }

        if (zip_delete(za, idx) < 0)
        {
            zip_close(za);
            return ErrorCode::ArchiveRemoveFailed;
        }

        if (zip_close(za) < 0)
        {
            return ErrorCode::ArchiveCloseFailed;
        }

        return ErrorCode::Ok;
    }

    void Archive::SetArchiveExtension(const std::string& ext)
    {
        if (ext.empty())
        {
            return;
        }
        size_t pos = m_file.find_last_of('.');
        std::string base;
        base = (pos == std::string::npos) ? file.GetFilePath() : file.GetFilePath().substr(0, pos);
        std::string dest = base + "." + ext;
        file.Rename(dest);
    }

}; // namespace slxio
