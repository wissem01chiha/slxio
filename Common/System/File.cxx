#include "File.h"
#include "LibZip.h"
#include "Compiler.h"
#include "Directory.h"
#include "Libuv.h"
#include <cstring>
#include <fstream>
#include <iostream>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

File::File(const std::string& path, Mode mode)
  : mode_(mode)
  , path_(path)
{
}

File::File(const char* path, Mode mode)
  : mode_(mode)
{
  path_ = std::string(path);
}

File::File(const File& fs)
  : path_(fs.path_)
  , mode_(fs.mode_)
  , fd_(fs.fd_)
  , buffer_(fs.buffer_)
  , nbytes_(fs.nbytes_)
{
}

File& File::operator=(const File& other) noexcept
{
  if (this != &other)
  {
    path_ = other.path_;
    mode_ = other.mode_;
    fd_ = other.fd_;
    buffer_ = other.buffer_;
    nbytes_ = other.nbytes_;
  }
  return *this;
}

File& File::operator=(File&& other) noexcept
{
  if (this != &other)
  {

    path_ = std::move(other.path_);
    mode_ = other.mode_;
    fd_ = other.fd_;
    buffer_ = std::move(other.buffer_);
    nbytes_ = other.nbytes_;

    other.fd_ = -1;
    other.nbytes_ = 0;
    other.mode_ = Mode::Read;
    other.path_.clear();
    other.buffer_.clear();
  }
  return *this;
}

File::File(File&& other) noexcept
  : path_(std::move(other.path_))
  , mode_(other.mode_)
  , fd_(other.fd_)
  , buffer_(std::move(other.buffer_))
  , nbytes_(other.nbytes_)
{

  other.fd_ = -1;
  other.nbytes_ = 0;
  other.mode_ = Mode{};
  other.path_.clear();
  other.buffer_.clear();
}

bool File::isFile(const std::string& path)
{
  return isFile(path.c_str());
}

bool File::isFile(const char* path)
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

bool File::isFile()
{
  return isFile(path_);
}

bool File::isFile() const
{
  return isFile(path_);
}

int File::open()
{

  uv_fs_t req;

  int err = uv_fs_open(
    uv_default_loop(), &req, path_.c_str(), getFileMode(), 0, nullptr);
  uv_fs_req_cleanup(&req);

  if (err < 0)
  {
    //Status::log(err);
    return static_cast<int>(-err);
  }
  fd_ = err;
  return SLX_OK;
}

int File::read()
{

  if (mode_ != Read)
  {
    return SLX_EIOERR;
  }

  buffer_.resize(4096);
  uv_fs_t req;
  uv_buf_t iov =
    uv_buf_init(buffer_.data(), static_cast<unsigned int>(buffer_.size()));

  int err = uv_fs_read(uv_default_loop(), &req, fd_, &iov, 1, -1, nullptr);
  uv_fs_req_cleanup(&req);

  if (err < 0)
  {
    //Status::log(err);
    return static_cast<int>(-err);
  }
  if (err == 0)
  {
    //Status::log(err);
    return SLX_EEOF;
  }

  nbytes_ = static_cast<size_t>(err);
  return SLX_OK;
}

int File::write(const char* message)
{

  if (mode_ == Read)
  {
    return SLX_EIOERR;
  }

  uv_fs_t req;
  size_t len = strlen(message);
  uv_buf_t iov =
    uv_buf_init(const_cast<char*>(message), static_cast<unsigned int>(len));

  int err = uv_fs_write(uv_default_loop(), &req, fd_, &iov, 1, -1, nullptr);
  uv_fs_req_cleanup(&req);

  if (err < 0)
  {
    //Status::log(err);
    return static_cast<int>(-err);
  }
  return SLX_OK;
}

int File::close()
{
  if (fd_ < 0)
  {
    return SLX_ENOENT;
  }

  uv_fs_t req;
  int err = uv_fs_close(uv_default_loop(), &req, fd_, nullptr);
  uv_fs_req_cleanup(&req);

  if (err < 0)
  {
    //Status::log(err);
    return static_cast<int>(-err);
  }

  fd_ = -1;
  return SLX_OK;
}

bool File::eof() const
{

  if (fd_ < 0 || mode_ != Read)
  {
    return false;
  }

  uv_fs_t req;
  int result = uv_fs_fstat(uv_default_loop(), &req, fd_, nullptr);
  if (result < 0)
  {
    uv_fs_req_cleanup(&req);
    return false;
  }

  uv_stat_t* statbuf = static_cast<uv_stat_t*>(req.ptr);
  size_t size_ = statbuf->st_size;
  uv_fs_req_cleanup(&req);

  return nbytes_ >= size_;
}

std::vector<char> File::getBuffer()
{
  return buffer_;
}

size_t File::getNBytes() const
{
  return nbytes_;
}

std::string File::getFileDirectory()
{

  size_t pos = path_.find_last_of(PATH_SEP);
  if (pos == std::string::npos)
  {
    return std::string(".");
  }
  return path_.substr(0, pos + 1);
}

const char* File::getFileExtension() const
{

  if (path_ == "")
    return nullptr;

  const char* dot = strrchr(path_.c_str(), '.');
  if (!dot || dot == path_)
    return nullptr;

  return dot + 1;
}

int File::setFileExtension(const char* newExt)
{

  if (!newExt || *newExt == '\0')
  {
    return SLX_EINVAR;
  }
  if (path_.empty())
  {
    return SLX_EINVAR;
  }

  size_t pos = path_.find_last_of('.');
  std::string base;
  if (pos == std::string::npos)
  {
    base = path_;
  }
  else
  {
    base = path_.substr(0, pos);
  }

  std::string dest = base + "." + newExt;

  FILE* src = fopen(path_.c_str(), "rb");
  if (!src)
  {
    return SLX_EIOERR;
  }

  FILE* dst = fopen(dest.c_str(), "wb");
  if (!dst)
  {
    fclose(src);
    return SLX_EIOERR;
  }

  char buffer[4096];
  size_t bytes;
  while ((bytes = fread(buffer, 1, sizeof(buffer), src)) > 0)
  {
    fwrite(buffer, 1, bytes, dst);
  }

  fclose(src);
  fclose(dst);

  path_ = dest;

  return SLX_OK;
}

int File::move(const char* dirpath)
{

  if (dirpath == nullptr)
  {
    return SLX_ENULLPTR;
  }

  std::string newPath = std::string(dirpath);
  if (!newPath.empty() && newPath.back() != '/' && newPath.back() != '\\')
  {
    newPath += PATH_SEP;
  }
  newPath += getFilename();

  uv_fs_t req;
  int err = uv_fs_rename(
    uv_default_loop(), &req, path_.c_str(), newPath.c_str(), nullptr);
  uv_fs_req_cleanup(&req);

  if (err < 0)
  {
    //Status::log(err);
    return static_cast<int>(-err);
  }

  path_ = newPath;
  return SLX_OK;
}

int File::copy(File& ofile)
{
  return SLX_ENOTIMPL;
}

int File::copy(const char* destdir)
{
  if (!destdir)
    return SLX_EINVAR;

  std::string destpath(destdir);
  if (!destpath.empty() && destpath.back() != PATH_SEP)
  {
    destpath += PATH_SEP;
  }
  destpath += getFilename();

  std::ifstream src(path_, std::ios::binary);
  if (!src.is_open())
  {
    //Status::log((int)SLX_ENOENT);
    return SLX_ENOENT;
  }

  std::ofstream dst(destpath, std::ios::binary);
  if (!dst.is_open())
  {
    //Status::log((int)SLX_EIOERR);
    return SLX_EIOERR;
  }

  dst << src.rdbuf();

  if (!dst.good())
  {
    //Status::log((int)SLX_EIOERR);
    return SLX_EIOERR;
  }

  if (dst.tellp() == 0)
  {
    return SLX_EIOERR;
  }

  return SLX_OK;
}

int File::rename(const char* filename)
{

  if (!filename || *filename == '\0')
    return SLX_EINVAR;
  path_ = std::string(filename);
  return SLX_OK;
}

const std::string File::getFilename()
{

  size_t pos = path_.find_last_of("/\\");
  if (pos == std::string::npos)
  {
    return std::string(path_.begin(), path_.end());
  }
  return std::string(path_.begin() + pos + 1, path_.end());
}

const std::string& File::getFilepath() const
{
  return path_;
}

const int File::getFileMode()
{

  int flags = 0;

  switch (mode_)
  {
    case Read:
      flags = O_RDONLY;
      break;
    case Write:
      flags = O_WRONLY | O_CREAT;
      break;
    case Truncate:
      flags = O_WRONLY | O_CREAT | O_TRUNC;
      break;
    case Append:
      flags = O_WRONLY | O_CREAT | O_APPEND;
      break;
  }

  return flags;
}

const char* File::getFileModeAsChar()
{

  switch (mode_)
  {
    case File::Mode::Read:
      return "Read";
    case File::Mode::Write:
      return "Write";
    case File::Mode::Append:
      return "Append";
    case File::Mode::Truncate:
      return "Truncate";
    default:
      "";
  };
  return "Unvalid";
}

size_t File::size() const
{

  if (fd_ < 0)
  {
    return -1;
  }

  uv_fs_t req;
  int result = uv_fs_fstat(uv_default_loop(), &req, fd_, nullptr);
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

int File::unzip(const char* dir)
{

  int err = 0;
  uv_fs_t req;

  zip_t* archive = zip_open(path_.c_str(), ZIP_RDONLY, &err);
  if (!archive)
  {
    //Status::log((int)SLX_EIOERR);
    return SLX_EIOERR;
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

    int ec = Directory::mkdir(entrydirpath);
    if (ec != SLX_OK)
    {
      //Status::log((int)ec);
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

    char buffer[4096];
    zip_int64_t bytes;
    while ((bytes = zip_fread(zf, buffer, sizeof(buffer))) > 0)
    {
      fwrite(buffer, 1, bytes, out);
    }

    fclose(out);
    zip_fclose(zf);
  }

  return SLX_OK;
}

int File::zip(const char* zfilepath, const char* zname)
{

  zip_t* za;
  int err;

  if ((za = zip_open(zfilepath, ZIP_CREATE, &err)) == NULL)
  {
    zip_error_t error;
    zip_error_init_with_code(&error, err);
    fprintf(stderr, "cannot open zip archive '%s': %s\n", zfilepath,
      zip_error_strerror(&error));
    zip_error_fini(&error);
    return SLX_EIOERR;
  }

  zip_int64_t idx = zip_name_locate(za, zname, 0);
  if (idx < 0)
  {
    fprintf(stderr, "archive entry not found: %s\n", zname);
    return SLX_EIOERR;
  }

  zip_source_t* source = zip_source_file(za, path_.c_str(), 0, -1);
  if (source == nullptr)
  {
    fprintf(stderr, "zip source file failed: %s\n", zip_strerror(za));
    return SLX_EIOERR;
  }

  if (zip_file_replace(za, idx, source, ZIP_FL_ENC_UTF_8) < 0)
  {
    fprintf(stderr, "zip file replace failed: %s\n", zip_strerror(za));
    return SLX_EIOERR;
  }

  if (idx < 0)
  {
    fprintf(stderr, "zip file add failed: %s\n", zip_strerror(za));
    return SLX_EIOERR;
  }
  if (zip_close(za) < 0)
  {
    fprintf(stderr, "cannot close archive: %s\n", zip_strerror(za));
  }

  return SLX_OK;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END