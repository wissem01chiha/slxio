#include "File.h"
#include "Compiler.h"
#include "Directory.h"
#include "ErrorCode.h"
#include "Libuv.h"
#include <fstream>
#include <iostream>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

File::File(const std::string& path, Mode mode)
  : InternalFileMode(mode)
  , FileDescriptor(-1)
  , FilePath(path)
  , CachedSize(0)
{
}

File::File(const std::string& path)
  : FileDescriptor(-1)
  , InternalFileMode(Mode::Append)
  , FilePath(path)
  , CachedSize(0)
{
}

bool File::Exist(const std::string& path)
{
  uv_fs_t req;
  int r = uv_fs_stat(uv_default_loop(), &req, path.c_str(), nullptr);
  if (r < 0)
  {
    uv_fs_req_cleanup(&req);
    return false;
  }
  bool result = S_ISREG(req.statbuf.st_mode);

  uv_fs_req_cleanup(&req);
  return result;
}

bool File::Empty() const
{
  return Size() == 0;
}

ReturnType File::Write(std::vector<std::string>& message)
{
  if (InternalFileMode == Mode::Read)
    return E_INVALID_FILE_MODE;

  for (const auto& line : message)
  {
    ReturnType result = Write(line.c_str());
    if (result != E_OK)
      return result;
  }
  return E_OK;
}

ReturnType File::Open()
{
  uv_fs_t req;
  int err = uv_fs_open(
    uv_default_loop(), &req, FilePath.c_str(), GetFileMode(), 0, nullptr);
  uv_fs_req_cleanup(&req);

  if (err < 0)
    return err;

  FileDescriptor = err;

  uv_fs_t statReq;
  int statErr =
    uv_fs_fstat(uv_default_loop(), &statReq, FileDescriptor, nullptr);
  if (statErr >= 0)
  {
    uv_stat_t* statbuf = static_cast<uv_stat_t*>(statReq.ptr);
    CachedSize = static_cast<UInt32>(statbuf->st_size);
  }
  uv_fs_req_cleanup(&statReq);

  return E_OK;
}

ReturnType File::Read()
{
  if (InternalFileMode != Mode::Read)
    return E_INVALID_FILE_MODE;

  InternalBuffer.resize(4096);
  uv_fs_t req;
  uv_buf_t iov = uv_buf_init(
    InternalBuffer.data(), static_cast<unsigned int>(InternalBuffer.size()));

  int err =
    uv_fs_read(uv_default_loop(), &req, FileDescriptor, &iov, 1, -1, nullptr);
  uv_fs_req_cleanup(&req);

  if (err < 0)
    return err;

  NumberOfBytes = static_cast<UInt32>(err);
  return E_OK;
}

std::string File::GetFilePath() const
{
  return FilePath;
}

ReturnType File::Write(const char* message)
{

  if (InternalFileMode == Mode::Read)
    return E_INVALID_FILE_MODE;

  uv_fs_t req;
  size_t len = strlen(message);
  uv_buf_t iov =
    uv_buf_init(const_cast<char*>(message), static_cast<unsigned int>(len));

  int err =
    uv_fs_write(uv_default_loop(), &req, FileDescriptor, &iov, 1, -1, nullptr);
  uv_fs_req_cleanup(&req);

  if (err < 0)
    return err;

  return E_OK;
}

ReturnType File::Close()
{
  if (FileDescriptor < 0)
    return 0;

  uv_fs_t req;
  int err = uv_fs_close(uv_default_loop(), &req, FileDescriptor, nullptr);
  uv_fs_req_cleanup(&req);

  if (err < 0)
    return err;

  FileDescriptor = -1;
  return E_OK;
}

Directory File::GetFileDirectory() const
{
  size_t pos = FilePath.find_last_of(PATH_SEP);
  if (pos == std::string::npos)
  {
    return Directory("");
  }
  return Directory(FilePath.substr(0, pos + 1));
}

ReturnType File::Move(Directory& directory)
{

  if (!directory.Exist())
    return E_DIRECTORY_NOT_EXSIT;

  std::string path = directory.GetDirectoryPath();
  if (!path.empty() && path.back() != '/' && path.back() != '\\')
    path += PATH_SEP;

  path += GetFileName();

  uv_fs_t req;
  int err = uv_fs_rename(
    uv_default_loop(), &req, FilePath.c_str(), path.c_str(), nullptr);
  uv_fs_req_cleanup(&req);

  if (err < 0)
    return err;

  FilePath = path;
  return E_OK;
}

ReturnType File::Copy(const Directory& directory)
{
  if (!directory.Exist())
    return E_INVALID_ARGUMENT;

  if (!Exist())
    return E_FILE_NOT_FOUND;

  std::string destpath = directory.GetDirectoryPath();
  if (!destpath.empty() && destpath.back() != PATH_SEP)
    destpath += PATH_SEP;
  destpath += GetFileName();

  std::ifstream src(FilePath, std::ios::binary);
  if (!src.is_open())
    return E_FILE_OPEN_FAIL;

  std::ofstream dst(destpath, std::ios::binary);
  if (!dst.is_open())
    return E_FILE_OPEN_FAIL;

  dst << src.rdbuf();

  if (!dst.good())
  {
    return E_STREAM_WRITE_FAIL;
  }
  src.seekg(0, std::ios::end);
  if (src.tellg() == 0)
    return E_STREAM_EMPTY_OUTPUT;

  return E_OK;
}

ReturnType File::Rename(const std::string& filename)
{
  if (filename.empty())
    return E_INVALID_ARGUMENT;

  uv_fs_t req;
  int err = uv_fs_rename(
    uv_default_loop(), &req, FilePath.c_str(), filename.c_str(), nullptr);
  uv_fs_req_cleanup(&req);

  if (err < 0)
    return err;

  FilePath = filename;
  return E_OK;
}

void File::SetFileMode(const File::Mode mode)
{
  InternalFileMode = mode;
}

const std::string File::GetFileName() const
{
  size_t pos = FilePath.find_last_of("/\\");
  return (pos == std::string::npos) ? FilePath : FilePath.substr(pos + 1);
}

bool File::Exist() const
{
  return Exist(FilePath);
}

const int File::GetFileMode()
{
  int flags = 0;
  switch (InternalFileMode)
  {
    case Mode::Read:
      flags =  O_RDONLY;
      break;
    case Mode::Write:
      flags =  O_WRONLY | O_CREAT;
      break;
    case Mode::Truncate:
      flags =  O_WRONLY | O_CREAT | O_TRUNC;
      break;
    case Mode::Append:
      flags =  O_WRONLY | O_CREAT | O_APPEND;
      break;
  }

  return flags;
}

std::vector<char> File::GetInternalBuffer() const
{
  return InternalBuffer;
}

UInt32 File::Size() const
{
  return CachedSize;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
