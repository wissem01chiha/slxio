#include "File.h"
#include <cstring>

File::File(const std::string &path, Mode mode) : mode_(mode), path_(path) {}

File::File(const char *path, Mode mode) : mode_(mode) {
  path_ = std::string(path);
}

File::File(const File &fs)
    : path_(fs.path_), mode_(fs.mode_), fd_(fs.fd_), buffer_(fs.buffer_),
      nbytes_(fs.nbytes_) {}

File &File::operator=(const File &other) noexcept {
  if (this != &other) {
    path_ = other.path_;
    mode_ = other.mode_;
    fd_ = other.fd_;
    buffer_ = other.buffer_;
    nbytes_ = other.nbytes_;
  }
  return *this;
}

File &File::operator=(File &&other) noexcept {
  if (this != &other) {

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

File::File(File &&other) noexcept
    : path_(std::move(other.path_)), mode_(other.mode_), fd_(other.fd_),
      buffer_(std::move(other.buffer_)), nbytes_(other.nbytes_) {

  other.fd_ = -1;
  other.nbytes_ = 0;
  other.mode_ = Mode{};
  other.path_.clear();
  other.buffer_.clear();
}

ErrorCode File::open() {

  uv_fs_t req;
  uint32_t flags = 0;

  switch (mode_) {
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

  int err =
      uv_fs_open(uv_default_loop(), &req, path_.c_str(), flags, 0, nullptr);
  uv_fs_req_cleanup(&req);

  if (err < 0) {
    const char *err_str = uv_strerror(err);
    fprintf(stderr, "%s : \n", err_str);
    return static_cast<ErrorCode>(-err);
  }
  fd_ = err;
  return ErrorCode::SLX_OK;
}

ErrorCode File::read() {

  if (mode_ != Read) {
    return ErrorCode::SLX_EIOERR;
  }

  buffer_.resize(4096);
  uv_fs_t req;
  uv_buf_t iov =
      uv_buf_init(buffer_.data(), static_cast<unsigned int>(buffer_.size()));

  int err = uv_fs_read(uv_default_loop(), &req, fd_, &iov, 1, -1, nullptr);
  uv_fs_req_cleanup(&req);

  if (err < 0) {
    const char *err_str = uv_strerror(err);
    fprintf(stderr, "%s : \n", err_str);
    return static_cast<ErrorCode>(-err);
  }
  if (err == 0) {
    const char *err_str = uv_strerror(err);
    fprintf(stderr, "%s : \n", err_str);
    return ErrorCode::SLX_EEOF;
  }

  nbytes_ = static_cast<size_t>(err);
  return ErrorCode::SLX_OK;
}

ErrorCode File::write(const char *message) {

  if (mode_ == Read) {
    return ErrorCode::SLX_EIOERR;
  }

  uv_fs_t req;
  size_t len = strlen(message);
  uv_buf_t iov =
      uv_buf_init(const_cast<char *>(message), static_cast<unsigned int>(len));

  int err = uv_fs_write(uv_default_loop(), &req, fd_, &iov, 1, -1, nullptr);
  uv_fs_req_cleanup(&req);

  if (err < 0) {
    const char *err_str = uv_strerror(err);
    fprintf(stderr, "%s : \n", err_str);
    return static_cast<ErrorCode>(-err);
  }
  return ErrorCode::SLX_OK;
}

ErrorCode File::close() {
  if (fd_ < 0) {
    return ErrorCode::SLX_ENOENT;
  }

  uv_fs_t req;
  int err = uv_fs_close(uv_default_loop(), &req, fd_, nullptr);
  uv_fs_req_cleanup(&req);

  if (err < 0) {
    const char *err_str = uv_strerror(err);
    fprintf(stderr, "%s : \n", err_str);
    return static_cast<ErrorCode>(-err);
  }

  fd_ = -1;
  return ErrorCode::SLX_OK;
}

bool File::eof() {

  if (fd_ < 0 || mode_ != Read) {
    return false;
  }

  uv_fs_t req;
  int result = uv_fs_fstat(uv_default_loop(), &req, fd_, nullptr);
  if (result < 0) {
    uv_fs_req_cleanup(&req);
    return false;
  }

  uv_stat_t *statbuf = static_cast<uv_stat_t *>(req.ptr);
  size_t size_ = statbuf->st_size;
  uv_fs_req_cleanup(&req);

  return nbytes_ >= size_;
}

std::vector<char> File::getBuffer() { return buffer_; }

size_t File::getNBytes() const { return nbytes_; }

std::string File::getFileDirectory() {

  size_t pos = path_.find_last_of("/\\");
  if (pos == std::string::npos) {
    return std::string("");
  }
  return path_.substr(0, pos + 1);
}

const char *File::getFileExtension() const {

  if (path_ == "")
    return nullptr;

  const char *dot = strrchr(path_.c_str(), '.');
  if (!dot || dot == path_)
    return nullptr;

  return dot + 1;
}

ErrorCode File::move(const char *dirpath) {

  if (dirpath == nullptr) {
    return ErrorCode::SLX_ENULLPTR;
  }

  std::string newPath = std::string(dirpath);
  if (!newPath.empty() && newPath.back() != '/' && newPath.back() != '\\') {
    newPath += '\\';
  }
  newPath += getFilename();

  uv_fs_t req;
  int err = uv_fs_rename(uv_default_loop(), &req, path_.c_str(),
                         newPath.c_str(), nullptr);
  uv_fs_req_cleanup(&req);

  if (err < 0) {
    const char *err_str = uv_strerror(err);
    fprintf(stderr, "%s : %s \n", err_str, newPath.c_str());
    return static_cast<ErrorCode>(-err);
  }

  path_ = newPath;
  return ErrorCode::SLX_OK;
}

ErrorCode File::copy(File &ofile) { return ErrorCode::SLX_ENOTIMPL; }

ErrorCode File::rename(const char *filename) {

  if (!filename || *filename == '\0')
    return ErrorCode::SLX_EINVAR;
  path_ = std::string(filename);
  return ErrorCode::SLX_OK;
}

const std::string File::getFilename() {

  size_t pos = path_.find_last_of("/\\");
  if (pos == std::string::npos) {
    return std::string(path_.begin(), path_.end());
  }
  return std::string(path_.begin() + pos + 1, path_.end());
}

const Index File::getFileMode() { return (Index)mode_; }

const char *File::getFileModeAsChar() {

  switch (mode_) {
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
}

ErrorCode File::setFileExtension(const char *ext) {

  if (!ext || *ext == '\0')
    return ErrorCode::SLX_EINVAR;

  size_t pos = path_.find_last_of('.');
  if (pos == std::string::npos) {
    path_ += ".";
    path_ += ext;
    return ErrorCode::SLX_OK;
  }

  std::string iext = path_.substr(pos + 1);
  if (iext == ext)
    return ErrorCode::SLX_EDUPOBJ;

  path_.replace(pos + 1, iext.size(), ext);
  return ErrorCode::SLX_OK;
}

size_t File::size() const {

  if (fd_ < 0) {
    return -1;
  }

  uv_fs_t req;
  int result = uv_fs_fstat(uv_default_loop(), &req, fd_, nullptr);
  if (result < 0) {
    uv_fs_req_cleanup(&req);
    return 0;
  }

  uv_stat_t *statbuf = static_cast<uv_stat_t *>(req.ptr);
  size_t size_ = statbuf->st_size;
  uv_fs_req_cleanup(&req);

  return size_;
}

ErrorCode File::toZip() { return ErrorCode::SLX_ENOTIMPL; }
