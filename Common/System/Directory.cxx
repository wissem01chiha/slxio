#include "Directory.h"
#include "ErrorCode.h"
#include "slxLibuv.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

Directory::Directory(const std::string& path)
  : DirectoryPath(path)
{
  DirectoryFileList.clear();
  SubDirList.clear();
}

SResult Directory::Initialize()
{
  if (DirectoryPath.empty())
    return E_PATH_EMPTY;

  uv_fs_t req;
  int err = uv_fs_opendir(uv_default_loop(), &req, DirectoryPath.c_str(), nullptr);
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
      return r;
    }
    if (r == 0)
    {
      uv_fs_req_cleanup(&readdir_req);
      return r;
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
      }
      else if (ent.type == UV_DIRENT_DIR)
      {
        Directory d_(full);
        SubDirList.push_back(d_);
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

void Directory::Add(const File& file)
{
  DirectoryFileList.push_back(file);
}

void Directory::Remove(const File& file) {}

bool Directory::Contains(std::string& entryname) const
{
  for (auto file : DirectoryFileList)
  {
    if (file.GetFileName() == entryname)
    {
      return true;
    }
  }

  for (auto subdir : SubDirList)
  {
    if (subdir.GetDirectoryName() == entryname)
    {
      return true;
    }
  }

  return false;
}

UInt32 Directory::GetNumberOfFiles() const
{
  return DirectoryFileList.size();
}

const std::shared_ptr<File> Directory::GetFile(const IdType& index) const
{
  if (index >= DirectoryFileList.size())
  {
    return nullptr;
  }
  return std::make_shared<File>(DirectoryFileList[index]);
}

const std::shared_ptr<File> Directory::GetFile(const std::string& filename) const
{
  for (size_t i = 0; i < DirectoryFileList.size(); i++)
  {
    if (DirectoryFileList[i].GetFileName() == filename)
    {
      return std::make_shared<File>(DirectoryFileList[i]);
    }
  }
  return nullptr;
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

std::vector<File> Directory::GetDirectoryFiles() const
{
  return DirectoryFileList;
}

std::string Directory::GetDirectoryName() const
{
  if (DirectoryPath.empty())
    return "";

  size_t pos = DirectoryPath.find_last_of("/\\");
  return (pos == std::string::npos) ? DirectoryPath : DirectoryPath.substr(pos + 1);
}

const std::string Directory::GetDirectoryPath() const
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

SResult Directory::Clear()
{
  return E_NOT_IMPLEMENTED;
}

SResult Directory::Move(const Directory& directory)
{
  return E_NOT_IMPLEMENTED;
}

SResult Directory::Delete(const std::string& path)
{
  uv_fs_t scandir_req;
  uv_dirent_t ent;
  int r = uv_fs_scandir(uv_default_loop(), &scandir_req, path.c_str(), 0, nullptr);
  if (r < 0)
  {
    return r;
  }

  while (UV_EOF != uv_fs_scandir_next(&scandir_req, &ent))
  {
    std::string fullPath = path + "/" + ent.name;

    if (ent.type == UV_DIRENT_DIR)
    {
      int sub = Delete(fullPath);
      if (sub < 0)
        return sub;
      uv_fs_t rmdir_req;
      int rr = uv_fs_rmdir(uv_default_loop(), &rmdir_req, fullPath.c_str(), nullptr);
      uv_fs_req_cleanup(&rmdir_req);
      if (rr < 0 && rr != UV_ENOENT)
        return rr;
    }
    else
    {
      uv_fs_t unlink_req;
      int ur = uv_fs_unlink(uv_default_loop(), &unlink_req, fullPath.c_str(), nullptr);
      uv_fs_req_cleanup(&unlink_req);
      if (ur < 0 && ur != UV_ENOENT)
        return ur;
    }
  }

  uv_fs_req_cleanup(&scandir_req);

  uv_fs_t rmdir_req;
  int rr = uv_fs_rmdir(uv_default_loop(), &rmdir_req, path.c_str(), nullptr);
  uv_fs_req_cleanup(&rmdir_req);
  return rr;
}

SResult Directory::Delete()
{
  return Delete(DirectoryPath);
}

SLXIO_ABI_NAMESPACE_END
};
