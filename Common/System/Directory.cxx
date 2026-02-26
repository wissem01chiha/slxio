#include "Directory.h"
#include "Platform.h"
#include "Status.h"
#include <codecvt>
#include <cstring>
#include <locale>

Directory::Directory(const std::string& path)
  : path_(path)
{
  filelist.clear();
  subdirlist_.clear();
}

Directory::Directory(const std::wstring& path)
{
  size_t len = wcstombs(nullptr, path.c_str(), 0) + 1;
  char* buffer = new char[len];
  wcstombs(buffer, path.c_str(), len);
  std::string str(buffer);
  this->path_ = str;
  filelist.clear();
  delete buffer;
}

Directory::Directory(const char* path)
{
  this->path_ = std::string(path);
}

Directory::Directory(const wchar_t* wpath)
{

  std::wstring ws(wpath);
  std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> conv;
  path_ = conv.to_bytes(ws);
}

Directory::Directory(const Directory& dir)
{
  this->path_ = dir.path_;
  this->filelist = dir.filelist;
  this->filemap = dir.filemap;
  this->subdirlist_ = dir.subdirlist_;
  this->subdirs_ = dir.subdirs_;
}

Directory& Directory::operator=(const Directory& other)
{
  if (this != &other)
  {
    path_ = other.path_;
    filelist = other.filelist;
    subdirlist_ = other.subdirlist_;
    filemap = other.filemap;
    subdirs_ = other.subdirs_;
  }
  return *this;
}

Directory::Directory(Directory&& other) noexcept
  : path_(std::move(other.path_))
  , filelist(std::move(other.filelist))
  , subdirlist_(std::move(other.subdirlist_))
  , filemap(std::move(other.filemap))
  , subdirs_(std::move(other.subdirs_))
{
}

Directory& Directory::operator=(Directory&& other) noexcept
{

  if (this != &other)
  {
    path_ = std::move(other.path_);
    filelist = std::move(other.filelist);
    subdirlist_ = std::move(other.subdirlist_);
    filemap = std::move(other.filemap);
    subdirs_ = std::move(other.subdirs_);

    other.path_.clear();
    other.filelist.clear();
    other.subdirlist_.clear();
    other.filemap.clear();
    other.subdirs_.clear();
  }
  return *this;
}

ErrorCode Directory::open()
{

  if (path_.empty())
  {
    Status::log(static_cast<int>(ErrorCode::SLX_EIOERR));
    return ErrorCode::SLX_EIOERR;
  }

  uv_fs_t req;
  int err = uv_fs_opendir(uv_default_loop(), &req, path_.c_str(), nullptr);
  if (err < 0)
  {
    Status::log(err);
    uv_fs_req_cleanup(&req);
    return ErrorCode::SLX_EIOERR;
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
      Status::log(r);
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

      std::string full = path_;
      if (!full.empty() && full.back() != PATH_SEP)
        full.push_back(PATH_SEP);
      full += name;

      if (ent.type == UV_DIRENT_FILE)
      {
        File f_(full);
        filelist.push_back(f_);
        filemap[name] = f_;
      }
      else if (ent.type == UV_DIRENT_DIR)
      {
        Directory d_(full);
        subdirlist_.push_back(d_);
        subdirs_[name] = d_;
      }
    }

    uv_fs_req_cleanup(&readdir_req);
  }

  uv_fs_t closedir_req;
  uv_fs_closedir(uv_default_loop(), &closedir_req, dir, nullptr);
  uv_fs_req_cleanup(&closedir_req);
  uv_fs_req_cleanup(&req);

  return ErrorCode::SLX_OK;
}

ErrorCode Directory::remove()
{
  return ErrorCode::SLX_OK;
}

size_t Directory::getNumberOfFiles() const
{
  return filelist.size();
}

const File* Directory::getFile(const size_t& index) const
{
  if (index >= filelist.size())
  {
    return nullptr;
  }
  return &filelist[index];
}

const File* Directory::getFile(const std::string& filename) const
{

  auto it = filemap.find(filename);
  if (it != filemap.end())
  {
    return &it->second;
  }
  return nullptr;
}

const char* Directory::getCurrentDirectory()
{

  static char buffer[1024];
  size_t size = sizeof(buffer);

  int r = uv_cwd(buffer, &size);
  if (r < 0)
  {
    Status::log(r);
    return nullptr;
  }
  return buffer;
}

const char* Directory::getTemporaryDirectory(const char* prefix)
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
    Status::log(r);
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

bool Directory::isDirectory(const char* path)
{
  uv_fs_t req;
  int r = uv_fs_stat(uv_default_loop(), &req, path, nullptr);
  if (r < 0)
  {
    Status::log(r);
    uv_fs_req_cleanup(&req);
    return false;
  }

  bool result = (req.statbuf.st_mode & S_IFMT) == S_IFDIR;
  uv_fs_req_cleanup(&req);
  return result;
}

bool Directory::isDirectory(const std::string& path)
{
  return isDirectory(path.c_str());
}

std::vector<Directory> Directory::getSubDirectories()
{
  return std::vector<Directory>();
}

std::string Directory::getDirectoryName()
{
  if (path_.empty())
  {
    return "";
  }
  size_t pos = path_.find_last_of("/\\");
  if (pos == std::string::npos)
  {
    return path_;
  }
  return path_.substr(pos + 1);
}

const std::string& Directory::getDirectoryPath() const
{
  return path_;
}

bool Directory::empty()
{
  return filelist.empty();
}

ErrorCode Directory::zip(const char* dir)
{
  return ErrorCode::SLX_ENOTIMPL;
}

ErrorCode Directory::mkdir(const char* path)
{

  if (path == nullptr)
  {
    return ErrorCode::SLX_ENULLPTR;
  }

  char* path_ = (char*)malloc(strlen(path) + 1);
  strcpy(path_, path);

  if (path[strlen(path) - 1] != '/')
  {

    char* last_slash = strrchr(path_, '/');
    if (last_slash)
    {
      *(last_slash + 1) = '\0';
    }
    else
    {
      path_[0] = '\0';
    }
  }

  uv_fs_t req;
  char temp[1024];
  strncpy(temp, path_, sizeof(temp));
  temp[sizeof(temp) - 1] = '\0';

  for (char* p = temp + 1; *p; p++)
  {
    if (*p == '/')
    {
      *p = '\0';
      int r = uv_fs_mkdir(uv_default_loop(), &req, temp, 0755, NULL);
      if (r < 0 && r != UV_EEXIST)
      {
        Status::log(r);
        return static_cast<ErrorCode>(-r);
      }
      *p = '/';
    }
  }

  int r = uv_fs_mkdir(uv_default_loop(), &req, temp, 0755, NULL);
  if (r < 0 && r != UV_EEXIST)
  {
    Status::log(r);
    return static_cast<ErrorCode>(-r);
  }

  return ErrorCode::SLX_OK;
}
