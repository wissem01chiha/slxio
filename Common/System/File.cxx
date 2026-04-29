#include "File.h"
#include "Compiler.h"
#include "Directory.h"
#include "ErrorTypes.h"
#include "LibZip.h"
#include "Libuv.h"
#include <cstring>
#include <fstream>
#include <iostream>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

File::File(const std::string& path, Mode mode)
  : FileMode(mode)
  , FilePath(path)
{
}

File::File(const std::string& path) {}

File::File(const char* path, Mode mode)
  : FileMode(mode)
{
  FilePath = std::string(path);
}

File::File(const File& fs)
  : FilePath(fs.FilePath)
  , FileMode(fs.FileMode)
  , FileDescriptor(fs.FileDescriptor)
  , InternalBuffer(fs.InternalBuffer)
  , NumberOfBytes(fs.NumberOfBytes)
{
}

File& File::operator=(const File& other) noexcept
{
  if (this != &other)
  {
    FilePath = other.FilePath;
    FileMode = other.FileMode;
    FileDescriptor = other.FileDescriptor;
    InternalBuffer = other.InternalBuffer;
    NumberOfBytes = other.NumberOfBytes;
  }
  return *this;
}

File& File::operator=(File&& other) noexcept
{
  if (this != &other)
  {

    FilePath = std::move(other.FilePath);
    FileMode = other.FileMode;
    FileDescriptor = other.FileDescriptor;
    InternalBuffer = std::move(other.InternalBuffer);
    NumberOfBytes = other.NumberOfBytes;

    other.FileDescriptor = -1;
    other.NumberOfBytes = 0;
    other.FileMode = Mode::READ;
    other.FilePath.clear();
    other.InternalBuffer.clear();
  }
  return *this;
}

File::File(File&& other) noexcept
  : FilePath(std::move(other.FilePath))
  , FileMode(other.FileMode)
  , FileDescriptor(other.FileDescriptor)
  , InternalBuffer(std::move(other.InternalBuffer))
  , NumberOfBytes(other.NumberOfBytes)
{

  other.FileDescriptor = -1;
  other.NumberOfBytes = 0;
  other.FileMode = Mode{};
  other.FilePath.clear();
  other.InternalBuffer.clear();
}

bool File::IsFile(const std::string& path)
{
  return IsFile(path.c_str());
}

bool File::IsFile(const char* path)
{

  uv_fs_t req;
  int r = uv_fs_stat(uv_default_loop(), &req, path, nullptr);
  if (r < 0)
  {
    uv_fs_req_cleanup(&req);
    return false;
  }
  bool result = S_ISREG(req.statbuf.st_mode);

  uv_fs_req_cleanup(&req);
  return result;
}

bool File::IsFile()
{
  return this->IsFile(FilePath);
}

bool File::IsFile() const
{
  return IsFile(FilePath);
}

UInt32 File::Open()
{

  uv_fs_t req;

  int err = uv_fs_open(
    uv_default_loop(), &req, FilePath.c_str(), GetFileMode(), 0, nullptr);
  uv_fs_req_cleanup(&req);

  if (err < 0)
  {

    return SLXIO_ERROR_CODE(E_ERROR, THIRDPARTY, LIBUV, abs(err));
  }
  FileDescriptor = err;
  return E_OK;
}

UInt32 File::Read()
{

  if (FileMode != READ)
  {
    return E_WRNG_FILE_MODE;
  }

  InternalBuffer.resize(4096);
  uv_fs_t req;
  uv_buf_t iov = uv_buf_init(
    InternalBuffer.data(), static_cast<unsigned int>(InternalBuffer.size()));

  int err =
    uv_fs_read(uv_default_loop(), &req, FileDescriptor, &iov, 1, -1, nullptr);
  uv_fs_req_cleanup(&req);

  if (err < 0)
  {
    return SLXIO_ERROR_CODE(ERROR, THIRDPARTY, LIBUV, abs(err));
  }
  if (err == 0)
  {

    return E_EOF;
  }

  NumberOfBytes = static_cast<size_t>(err);
  return E_OK;
}

UInt32 File::Write(const char* message)
{

  if (FileMode == READ)
  {
    return E_WRNG_FILE_MODE;
  }

  uv_fs_t req;
  size_t len = strlen(message);
  uv_buf_t iov =
    uv_buf_init(const_cast<char*>(message), static_cast<unsigned int>(len));

  int err =
    uv_fs_write(uv_default_loop(), &req, FileDescriptor, &iov, 1, -1, nullptr);
  uv_fs_req_cleanup(&req);

  if (err < 0)
  {

    return static_cast<int>(-err);
  }
  return E_OK;
}

UInt32 File::Close()
{
  if (FileDescriptor < 0)
  {
    return 0;
  }

  uv_fs_t req;
  int err = uv_fs_close(uv_default_loop(), &req, FileDescriptor, nullptr);
  uv_fs_req_cleanup(&req);

  if (err < 0)
  {
    return static_cast<int>(-err);
  }

  FileDescriptor = -1;
  return E_OK;
}

bool File::Eof() const
{

  if (FileDescriptor < 0 || FileMode != READ)
  {
    return false;
  }

  uv_fs_t req;
  int result = uv_fs_fstat(uv_default_loop(), &req, FileDescriptor, nullptr);
  if (result < 0)
  {
    uv_fs_req_cleanup(&req);
    return false;
  }

  uv_stat_t* statbuf = static_cast<uv_stat_t*>(req.ptr);
  size_t size_ = statbuf->st_size;
  uv_fs_req_cleanup(&req);

  return NumberOfBytes >= size_;
}

std::vector<char> File::GetInternalBuffer()
{
  return InternalBuffer;
}

size_t File::GetNumberOfBytes() const
{
  return NumberOfBytes;
}

std::string File::GetFileDirectory()
{

  size_t pos = FilePath.find_last_of(PATH_SEP);
  if (pos == std::string::npos)
  {
    return std::string(".");
  }
  return FilePath.substr(0, pos + 1);
}

const char* File::GetFileExtension() const
{

  if (FilePath == "")
    return nullptr;

  const char* dot = strrchr(FilePath.c_str(), '.');
  if (!dot || dot == FilePath)
    return nullptr;

  return dot + 1;
}

UInt32 File::SetFileExtension(const char* newExt)
{

  if (!newExt || *newExt == '\0')
  {
    return E_WRNG_FUNC_PARAM;
  }
  if (FilePath.empty())
  {
    return E_WRNG_FUNC_PARAM;
  }

  size_t pos = FilePath.find_last_of('.');
  std::string base;
  if (pos == std::string::npos)
  {
    base = FilePath;
  }
  else
  {
    base = FilePath.substr(0, pos);
  }

  std::string dest = base + "." + newExt;

  FILE* src = fopen(FilePath.c_str(), "rb");
  if (!src)
  {
    return E_FOPEN_FAIL;
  }

  FILE* dst = fopen(dest.c_str(), "wb");
  if (!dst)
  {
    fclose(src);
    return E_FOPEN_FAIL;
  }

  char InternalBuffer[4096];
  size_t bytes;
  while ((bytes = fread(InternalBuffer, 1, sizeof(InternalBuffer), src)) > 0)
  {
    fwrite(InternalBuffer, 1, bytes, dst);
  }

  fclose(src);
  fclose(dst);

  FilePath = dest;

  return E_OK;
}

UInt32 File::Move(const char* dirpath)
{

  if (dirpath == nullptr)
  {
    return E_FUNC_PARAM_NULL_PTR;
  }

  std::string newPath = std::string(dirpath);
  if (!newPath.empty() && newPath.back() != '/' && newPath.back() != '\\')
  {
    newPath += PATH_SEP;
  }
  newPath += GetFileName();

  uv_fs_t req;
  int err = uv_fs_rename(
    uv_default_loop(), &req, FilePath.c_str(), newPath.c_str(), nullptr);
  uv_fs_req_cleanup(&req);

  if (err < 0)
  {

    return static_cast<int>(-err);
  }

  FilePath = newPath;
  return E_OK;
}

UInt32 File::Copy(File& ofile)
{
  return E_NOT_IMPL;
}

UInt32 File::Copy(const char* destdir)
{
  if (!destdir)
    return E_WRNG_FUNC_PARAM;

  std::string destpath(destdir);
  if (!destpath.empty() && destpath.back() != PATH_SEP)
  {
    destpath += PATH_SEP;
  }
  destpath += GetFileName();

  std::ifstream src(FilePath, std::ios::binary);
  if (!src.is_open())
  {
    return E_FOPEN_FAIL;
  }

  std::ofstream dst(destpath, std::ios::binary);
  if (!dst.is_open())
  {
    return E_FOPEN_FAIL;
  }

  dst << src.rdbuf();

  if (!dst.good())
  {
    return E_STREAM_WRITE_FAIL;
  }

  if (dst.tellp() == 0)
  {
    return E_STREAM_EMPTY_OUTPUT;
  }

  return E_OK;
};

UInt32 File::Rename(const char* filename)
{
  if (!filename || *filename == '\0')
    return E_WRNG_FUNC_PARAM;
  FilePath = std::string(filename);
  return E_OK;
}

const std::string File::GetFileName()
{
  size_t pos = FilePath.find_last_of("/\\");
  if (pos == std::string::npos)
  {
    return std::string(FilePath.begin(), FilePath.end());
  }
  return std::string(FilePath.begin() + pos + 1, FilePath.end());
}

const std::string& File::GetFilePath() const
{
  return FilePath;
}

const int File::GetFileMode()
{
  int flags = 0;
  switch (FileMode)
  {
    case READ:
      flags = O_RDONLY;
      break;
    case WRITE:
      flags = O_WRONLY | O_CREAT;
      break;
    case TRUNCATE:
      flags = O_WRONLY | O_CREAT | O_TRUNC;
      break;
    case APPEND:
      flags = O_WRONLY | O_CREAT | O_APPEND;
      break;
  }

  return flags;
}

size_t File::Size() const
{

  if (FileDescriptor < 0)
  {
    return -1;
  }

  uv_fs_t req;
  int result = uv_fs_fstat(uv_default_loop(), &req, FileDescriptor, nullptr);
  if (result < 0)
  {
    uv_fs_req_cleanup(&req);
    return 0;
  }
  uv_stat_t* statbuf = static_cast<uv_stat_t*>(req.ptr);
  size_t size_ = statbuf->st_size;
  uv_fs_req_cleanup(&req);

  return size_;
}

UInt32 File::Unzip(const char* dir)
{

  int err = 0;
  uv_fs_t req;

  zip_t* archive = zip_open(FilePath.c_str(), ZIP_RDONLY, &err);
  if (!archive)
  {
    return SLXIO_ERROR_CODE(E_INFO, THIRDPARTY, LIBZIP, err);
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
    snprintf(entrydirpath, sizeof(entrydirpath), "%s/%s", dir, name);

    int ec = Directory::Create(entrydirpath);
    if (ec != E_OK)
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

  return E_OK;
}

UInt32 File::Zip(const char* zfilepath, const char* zname)
{

  zip_t* za;
  int err;

  if ((za = zip_open(zfilepath, ZIP_CREATE, &err)) == NULL)
  {
    zip_error_t error;
    zip_error_init_with_code(&error, err);
    zip_error_fini(&error);
    return SLXIO_ERROR_CODE(E_INFO, THIRDPARTY, LIBZIP, &error);
  }

  zip_int64_t idx = zip_name_locate(za, zname, 0);
  if (idx < 0)
  {
    return SLXIO_ERROR_CODE(E_INFO, THIRDPARTY, LIBZIP, &za);
  }

  zip_source_t* source = zip_source_file(za, FilePath.c_str(), 0, -1);
  if (source == nullptr)
  {
    return SLXIO_ERROR_CODE(E_INFO, THIRDPARTY, LIBZIP, &za);
  }

  if (zip_file_replace(za, idx, source, ZIP_FL_ENC_UTF_8) < 0)
  {
    return SLXIO_ERROR_CODE(E_INFO, THIRDPARTY, LIBZIP, &za);
  }

  if (idx < 0)
  {
    return SLXIO_ERROR_CODE(E_INFO, THIRDPARTY, LIBZIP, &za);
  }
  if (zip_close(za) < 0)
  {
    return SLXIO_ERROR_CODE(E_INFO, THIRDPARTY, LIBZIP, &za);
  }

  return E_OK;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
