#include "Directory.h"
#include "ErrorTypes.h"
#include "File.h"
#include "Libuv.h"
#include <codecvt>
#include <cstring>
#include <locale>

Directory::Directory(const std::string& path)
  : Path(path)
{
  FileList.clear();
  SubDirList.clear();
}

Directory::Directory(const std::wstring& path)
{
  size_t len = wcstombs(nullptr, path.c_str(), 0) + 1;
  char* buffer = new char[len];
  wcstombs(buffer, path.c_str(), len);
  std::string str(buffer);
  this->Path = str;
  FileList.clear();
  delete buffer;
}

Directory::Directory(const char* path)
{
  this->Path = std::string(path);
}

Directory::Directory(const wchar_t* wpath)
{
  std::wstring ws(wpath);
  std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> conv;
  Path = conv.to_bytes(ws);
}

Directory::Directory(const Directory& dir)
{
  this->Path = dir.Path;
  this->FileList = dir.FileList;
  this->FileMap = dir.FileMap;
  this->SubDirList = dir.SubDirList;
  this->SubDirs = dir.SubDirs;
}

Directory& Directory::operator=(const Directory& other)
{
  if (this != &other)
  {
    Path = other.Path;
    FileList = other.FileList;
    SubDirList = other.SubDirList;
    FileMap = other.FileMap;
    SubDirs = other.SubDirs;
  }
  return *this;
}

Directory::Directory(Directory&& other) noexcept
  : Path(std::move(other.Path))
  , FileList(std::move(other.FileList))
  , SubDirList(std::move(other.SubDirList))
  , FileMap(std::move(other.FileMap))
  , SubDirs(std::move(other.SubDirs))
{
}

Directory& Directory::operator=(Directory&& other) noexcept
{

  if (this != &other)
  {
    Path = std::move(other.Path);
    FileList = std::move(other.FileList);
    SubDirList = std::move(other.SubDirList);
    FileMap = std::move(other.FileMap);
    SubDirs = std::move(other.SubDirs);

    other.Path.clear();
    other.FileList.clear();
    other.SubDirList.clear();
    other.FileMap.clear();
    other.SubDirs.clear();
  }
  return *this;
}

UInt32 Directory::Open()
{

  if (Path.empty())
  {
    return E_NULL_DIR_PATH;
  }

  uv_fs_t req;
  int err = uv_fs_opendir(uv_default_loop(), &req, Path.c_str(), nullptr);
  if (err < 0)
  {
    uv_fs_req_cleanup(&req);
    return SLXIO_ERROR_CODE(E_ERROR, THIRDPARTY, LIBUV, abs(err));
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

      std::string full = Path;
      if (!full.empty() && full.back() != PATH_SEP)
        full.push_back(PATH_SEP);
      full += name;

      if (ent.type == UV_DIRENT_FILE)
      {
        File f(full);
        FileList.push_back(f);
        FileMap[name] = f;
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

UInt32 Directory::Remove()
{
  return E_OK;
}

UInt32 Directory::GetNumberOfFiles() const
{
  return FileList.size();
}

const File* Directory::GetFile(const size_t& index) const
{
  if (index >= FileList.size())
  {
    return nullptr;
  }
  return &FileList[index];
}

const File* Directory::GetFile(const std::string& filename) const
{

  auto it = FileMap.find(filename);
  if (it != FileMap.end())
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

const char* Directory::GetTemporaryDirectory(const char* prefix)
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

bool Directory::IsDirectory(const char* path)
{
  uv_fs_t req;
  int r = uv_fs_stat(uv_default_loop(), &req, path, nullptr);
  if (r < 0)
  {
    uv_fs_req_cleanup(&req);
    return false;
  }

  bool result = (req.statbuf.st_mode & S_IFMT) == S_IFDIR;
  uv_fs_req_cleanup(&req);
  return result;
}

bool Directory::IsDirectory(const std::string& path)
{
  return IsDirectory(path.c_str());
}

std::vector<Directory> Directory::GetSubDirectories()
{
  return std::vector<Directory>();
}

std::string Directory::GetDirectoryName()
{
  if (Path.empty())
  {
    return "";
  }
  size_t pos = Path.find_last_of("/\\");
  if (pos == std::string::npos)
  {
    return Path;
  }
  return Path.substr(pos + 1);
}

const std::string& Directory::GetDirectoryPath() const
{
  return Path;
}

bool Directory::Empty()
{
  return FileList.empty();
}

UInt32 Directory::Zip(const char* dir)
{
  return E_NOT_IMPL;
}

UInt32 Directory::Create(const char* path)
{

  if (path == nullptr)
  {
    return E_FUNC_PARAM_NULL_PTR;
  }

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
        return static_cast<UInt32>(-r);
      }
      *p = '/';
    }
  }

  int r = uv_fs_mkdir(uv_default_loop(), &req, temp, 0755, NULL);
  if (r < 0 && r != UV_EEXIST)
  {
    return static_cast<UInt32>(-r);
  }

  return E_OK;
}
