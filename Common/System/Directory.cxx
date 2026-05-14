#include "Directory.h"
#include "ErrorCode.h"
#include "File.h"
#include "Libuv.h"
#include <cstring>
#include <locale>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

Directory::Directory(const std::string& path)
  : DirectoryPath(path)
{
  DirectoryFileList.clear();
  SubDirList.clear();
}

ReturnType Directory::Create(const char* path)
{
  if (path == nullptr)
    return E_PARAMETER_NULL_PTR;

  char* Path = (char*)malloc(strlen(path) + 1);
  strcpy(Path, path);

  if (path[strlen(path) - 1] != '/')
  {

    char* last_slash = strrchr(Path, '/');
    if (last_slash)
    {
      *(last_slash + 1) = '\0';
    }
    else
    {
      Path[0] = '\0';
    }
  }

  uv_fs_t req;
  char temp[1024];
  strncpy(temp, Path, sizeof(temp));
  temp[sizeof(temp) - 1] = '\0';

  for (char* p = temp + 1; *p; p++)
  {
    if (*p == '/')
    {
      *p = '\0';
      int r = uv_fs_mkdir(uv_default_loop(), &req, temp, 0755, NULL);
      if (r < 0 && r != UV_EEXIST)
      {
        return r;
      }
      *p = '/';
    }
  }

  int r = uv_fs_mkdir(uv_default_loop(), &req, temp, 0755, NULL);
  if (r < 0 && r != UV_EEXIST)
  {
    return r;
  }

  return E_OK;
}

ReturnType Directory::Open()
{
  if (DirectoryPath.empty())
    return E_PATH_EMPTY;

  uv_fs_t req;
  int err =
    uv_fs_opendir(uv_default_loop(), &req, DirectoryPath.c_str(), nullptr);
  if (err < 0)
  {
    uv_fs_req_cleanup(&req);
    return err;
  }

  uv_dir_t* dir = static_cast<uv_dir_t*>(req.ptr);

  std::vector<uv_dirent_t> ents(64);

  while (true)
  {
    dir->dirents = ents.data();
    dir->nentries = static_cast<unsigned>(ents.size());

    uv_fs_t readdir_req;
    int r = uv_fs_readdir(uv_default_loop(), &readdir_req, dir, nullptr);

    if (r < 0)
    {
      uv_fs_req_cleanup(&readdir_req);
      break;
    }
    if (r == 0)
    {
      uv_fs_req_cleanup(&readdir_req);
      break;
    }

    for (unsigned i = 0; i < dir->nentries; ++i)
    {
      const uv_dirent_t& ent = dir->dirents[i];
      if (!ent.name)
      {
        continue;
      }
      const std::string name(ent.name);

      std::string full = DirectoryPath;
      if (!full.empty() && full.back() != PATH_SEP)
        full.push_back(PATH_SEP);
      full += name;

      if (ent.type == UV_DIRENT_FILE)
      {
        File f(full);
        DirectoryFileList.push_back(f);
        DirectoryFileMap[name] = f;
      }
      else if (ent.type == UV_DIRENT_DIR)
      {
        Directory d_(full);
        SubDirList.push_back(d_);
        SubDirs[name] = d_;
      }
    }

    uv_fs_req_cleanup(&readdir_req);
  }

  uv_fs_t closedir_req;
  uv_fs_closedir(uv_default_loop(), &closedir_req, dir, nullptr);
  uv_fs_req_cleanup(&closedir_req);
  uv_fs_req_cleanup(&req);

  return E_OK;
}

ReturnType Directory::Remove()
{
  return E_OK;
}

UInt32 Directory::GetNumberOfFiles() const
{
  return DirectoryFileList.size();
}

const File* Directory::GetFile(const IdType& index) const
{
  if (index >= DirectoryFileList.size())
  {
    return nullptr;
  }
  return &DirectoryFileList[index];
}

const File* Directory::GetFile(const std::string& filename) const
{
  auto it = DirectoryFileMap.find(filename);
  if (it != DirectoryFileMap.end())
  {
    return &it->second;
  }
  return nullptr;
}

const char* Directory::GetCurrentWorkingDirectory()
{
  static char buffer[1024];

  size_t size = sizeof(buffer);

  int r = uv_cwd(buffer, &size);
  if (r < 0)
  {
    return nullptr;
  }
  return buffer;
}

const char* Directory::CreateTemporaryDirectory(const char* prefix)
{
  uv_fs_t req;

  std::string tempDirName = "XXXXXX";
  if (prefix != nullptr && strlen(prefix) > 0)
  {
    tempDirName = std::string(prefix) + "_XXXXXX";
  }

  int r = uv_fs_mkdtemp(uv_default_loop(), &req, tempDirName.c_str(), nullptr);

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

  const char* tmpdir = strdup(req.path);
  uv_fs_req_cleanup(&req);

  return tmpdir;
}

bool Directory::Exist(const std::string& path)
{
  uv_fs_t req;
  int r = uv_fs_stat(uv_default_loop(), &req, path.c_str(), nullptr);
  if (r < 0)
  {
    uv_fs_req_cleanup(&req);
    return false;
  }
  bool result = (req.statbuf.st_mode & S_IFMT) == S_IFDIR;
  uv_fs_req_cleanup(&req);
  return result;
}

std::vector<Directory> Directory::GetSubDirectories() const
{
  return SubDirList;
}

std::string Directory::GetDirectoryName()
{
  if (DirectoryPath.empty())
  {
    return "";
  }
  size_t pos = DirectoryPath.find_last_of("/\\");
  if (pos == std::string::npos)
  {
    return DirectoryPath;
  }
  return DirectoryPath.substr(pos + 1);
}

const std::string& Directory::GetDirectoryPath() const
{
  return DirectoryPath;
}

bool Directory::Empty() const
{
  return DirectoryFileList.empty();
}

bool Directory::Exist() const
{
  return Exist(DirectoryPath);
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
