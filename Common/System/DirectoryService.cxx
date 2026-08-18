#include "DirectoryService.h"
#include "Directory.h"
#include "Libuv.h"
#include "PlatformMacro.h"
#include "SystemECH.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

std::string DirectoryService::ToString(const Directory& directory)
{
    std::ostringstream oss;

    oss << directory.GetDirectoryName() << "\n";

    std::vector<File> files = directory.GetDirectoryFiles();
    for (const auto& file : files)
    {
        oss << "  - " << file.GetFileName() << "\n";
    }
    std::vector<Directory> subdirs = directory.GetSubDirectories();
    for (const auto& subdir : subdirs)
    {
        oss << subdir.GetDirectoryName() << "\n";

        std::vector<File> subFiles = subdir.GetDirectoryFiles();
        for (const auto& f : subFiles)
        {
            oss << "    - " << f.GetFileName() << "\n";
        }
        std::vector<Directory> subSubDirs = subdir.GetSubDirectories();
        for (const auto& s : subSubDirs)
        {
            oss << s.GetDirectoryName() << "\n";
        }
    }

    return oss.str();
}

Directory DirectoryService::GetWorkingDirectory(int* error)
{
    static char buffer[1024];

    size_t size = sizeof(buffer);

    *error = uv_cwd(buffer, &size);
    return Directory(buffer);
}

std::shared_ptr<Directory>
DirectoryService::CreateDirectoryStructure(const std::string& structure,
                                           int* error)
{
    if (structure.empty())
    {
        if (error)
            *error = UV_EINVAL;
        return nullptr;
    }

    std::string path = structure;
    if (path.back() != PATH_SEP)
    {
        auto pos = path.find_last_of(PATH_SEP);
        if (pos != std::string::npos)
        {
            path.erase(pos + 1);
        }
        else
        {
            path.clear();
        }
    }

    uv_fs_t req;
    std::string temp;

    for (size_t i = 1; i < path.size(); ++i)
    {
        if (path[i] == PATH_SEP)
        {
            temp = path.substr(0, i);
            int r = uv_fs_mkdir(uv_default_loop(), &req, temp.c_str(), 0755,
                                nullptr);
            if (r < 0 && r != UV_EEXIST)
            {
                *error = r;
                return nullptr;
            }
        }
    }
    int r = uv_fs_mkdir(uv_default_loop(), &req, path.c_str(), 0755, nullptr);
    if (r < 0 && r != UV_EEXIST)
    {
        *error = r;
        return nullptr;
    }
    return std::make_shared<Directory>(path);
}

std::shared_ptr<Directory>
DirectoryService::CreateTemporaryDirectory(int* error)
{


    return std::make_shared<Directory>();
}

std::shared_ptr<Directory>
DirectoryService::CreatePrefixedTemporaryDirectory(const std::string& prefix,
                                                   int* error)
{
    uv_fs_t req;

    std::string tempDirName = "XXXXXX";
    if (prefix.length() > 0)
    {
        tempDirName = prefix + "_XXXXXX";
    }

    int r =
        uv_fs_mkdtemp(uv_default_loop(), &req, tempDirName.c_str(), nullptr);

    if (r < 0)
    {
        uv_fs_req_cleanup(&req);
        return nullptr;
    }

    if (req.path == nullptr)
    {
        uv_fs_req_cleanup(&req);
        return nullptr;
    }

    std::string tmpdir(req.path);
    uv_fs_req_cleanup(&req);
    return std::make_shared<Directory>(tmpdir);
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
