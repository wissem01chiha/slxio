#include "File.h"
#include <cstring>

#ifndef PLATFORM_WINDOWS
#include <fcntl.h>
#include <sys/mman.h>
#include <sys/stat.h>
#endif

File::File(const std::string &path, Mode mode) {

  mode_ = mode;
  path_ = path;
  buffer = nullptr;
}

File::File(const char *path, Mode mode) {

  mode_ = mode;
  path_ = std::string(path);
  buffer = nullptr;
}

ErrorCode File::setInputStream(std::fstream &stream) {

  if (!stream.is_open()) {
    return ErrorCode::IOError;
  }
  stream_ = std::move(stream);
  buffer = nullptr;
  return ErrorCode::Ok;
}

ErrorCode File::open(File::Mode mode) {

  mode_ = mode;
#ifdef _MSC_VER
  DWORD access = 0;
  DWORD creation = OPEN_EXISTING;

  switch (mode_) {
  case Mode::Read:
    access = GENERIC_READ;
    creation = OPEN_EXISTING;
    break;
  case Mode::Write:
    access = GENERIC_READ | GENERIC_WRITE;
    creation = OPEN_ALWAYS;
    break;
  case Mode::Truncate:
    access = GENERIC_READ | GENERIC_WRITE;
    creation = CREATE_ALWAYS;
    break;
  case Mode::Append:
    access = GENERIC_READ | GENERIC_WRITE;
    creation = OPEN_ALWAYS;
    break;
  default:
    return ErrorCode::NotImplemented;
  }

  hFile_ = CreateFileA(path_.c_str(), access,
                       FILE_SHARE_READ | FILE_SHARE_WRITE | FILE_SHARE_DELETE,
                       NULL, creation, FILE_ATTRIBUTE_NORMAL, NULL);

  if (hFile_ == INVALID_HANDLE_VALUE) {
    hFile_ = nullptr;
    return ErrorCode::FileNotFound;
  }

  LARGE_INTEGER size;
  if (!GetFileSizeEx(hFile_, &size)) {
    CloseHandle(hFile_);
    hFile_ = nullptr;
    return ErrorCode::IOError;
  }
  fsize_ = static_cast<size_t>(size.QuadPart);

  DWORD attr = GetFileAttributesA(path_.c_str());
  if (attr == INVALID_FILE_ATTRIBUTES) {
    type_ = Unknown;
  } else if (attr & FILE_ATTRIBUTE_DIRECTORY) {
    type_ = Directory;
  } else if (attr & FILE_ATTRIBUTE_REPARSE_POINT) {
    type_ = Symlink;
  } else {
    type_ = Regular;
  }

  return ErrorCode::Ok;

#else
  std::ios_base::openmode flags = std::ios::binary;
  switch (mode_) {
  case Mode::Read:
    flags |= std::ios::in;
    break;
  case Mode::Write:
    flags |= std::ios::out;
    break;
  case Mode::Truncate:
    flags |= std::ios::out | std::ios::trunc;
    break;
  case Mode::Append:
    flags |= std::ios::out | std::ios::app;
    break;
  default:
    return ErrorCode::NotImplemented;
  }

  stream_.open(path_, flags);
  if (!stream_.is_open()) {
    return ErrorCode::FileNotFound;
  }
  if (stream_.fail()) {
    return ErrorCode::IOError;
  }

  struct stat st;
  ::fstat(fd_, &st);
  fsize_ = static_cast<size_t>(st.st_size);

  if (stat(path_.c_str(), &st) != 0) {
    type_ = Unknown;
  }
  if (S_ISREG(st.st_mode)) {
    type_ = Regular;
  }
  if (S_ISDIR(st.st_mode)) {
    type_ = Directory;
  }
  if (S_ISCHR(st.st_mode)) {
    type_ = CharacterDevice;
  }
  if (S_ISBLK(st.st_mode)) {
    type_ = BlockDevice;
  }
  if (S_ISFIFO(st.st_mode)) {
    type_ = FIFO;
  }
  type_ = Unknown;

  return ErrorCode::Ok;
#endif
}

ErrorCode File::map(bool writable) {

#ifdef _MSC_VER
  if (hFile_ == nullptr || hFile_ == INVALID_HANDLE_VALUE) {
    return ErrorCode::NotOpen;
  }

  DWORD protect = writable ? PAGE_READWRITE : PAGE_READONLY;
  DWORD access = writable ? (FILE_MAP_WRITE | FILE_MAP_READ) : FILE_MAP_READ;

  hFileMap_ = CreateFileMapping(hFile_, NULL, protect, 0, 0, NULL);
  if (hFileMap_ == nullptr) {
    return ErrorCode::IOError;
  }

  lpMapAddress = MapViewOfFile(hFileMap_, access, 0, 0, 0);
  if (lpMapAddress == nullptr) {
    CloseHandle(hFileMap_);
    hFileMap_ = nullptr;
    return ErrorCode::IOError;
  }

  return ErrorCode::Ok;
#else
  int flags = writable ? O_RDWR : O_RDONLY;
  fd_ = ::open(path_.c_str(), flags);
  if (fd_ < 0)
    return ErrorCode::FileNotFound;

  struct stat st;
  if (::fstat(fd_, &st) < 0) {
    ::close(fd_);
    return ErrorCode::IOError;
  }
  fsize_ = static_cast<size_t>(st.st_size);

  int prot = writable ? (PROT_READ | PROT_WRITE) : PROT_READ;
  lpMapAddress = map(nullptr, fsize_, prot, MAP_SHARED, fd_, 0);
  if (lpMapAddress == MAP_FAILED) {
    lpMapAddress = nullptr;
    ::close(fd_);
    return ErrorCode::IOError;
  }
  return ErrorCode::Ok;
#endif
}

ErrorCode File::read(size_t buffsize) {

  if (buffsize > maxbuffsize_) {
    return ErrorCode::InvalidArgument;
  }

  bool writable = (mode_ == Mode::Write || mode_ == Mode::Append ||
                   mode_ == Mode::Truncate);

  ErrorCode map_stat = map(writable);
  if (map_stat != ErrorCode::Ok) {
    return map_stat;
  }

  if (!buffer) {
    free(buffer);
    buffer = malloc(buffsize);
    buffsize_ = buffsize;
    if (!buffer)
      return ErrorCode::NoSpace;
  }
  //size_t toRead = std::min(buffsize_, fsize_ - readOffset_);

#ifdef _MSC_VER
  if (hFileMap_ == nullptr || lpMapAddress == nullptr || buffer == nullptr) {
    return ErrorCode::NotOpen;
  }
  if (fsize_ == 0) {
    return ErrorCode::EndOfFile;
  }

  __try {
    std::memcpy(buffer, lpMapAddress, toRead);
    nbytes_ = toRead;
    readOffset_ += toRead;
  } __except (GetExceptionCode() == EXCEPTION_IN_PAGE_ERROR
                  ? EXCEPTION_EXECUTE_HANDLER
                  : EXCEPTION_CONTINUE_SEARCH) {
    return ErrorCode::IOError;
  }
  if (readOffset_ >= fsize_) {
    return ErrorCode::EndOfFile;
  }
  return ErrorCode::Ok;
#else
  if (lpMapAddress) {
    std::memcpy(buffer, lpMapAddress, toRead);
    nbytes_ = toRead;
    return ErrorCode::Ok;
  }
  if (!stream_.is_open())
    return ErrorCode::NotOpen;
  stream_.read(reinterpret_cast<char *>(buffer), buffsize_);
  if (stream_.fail() && !stream_.eof()) {
    return ErrorCode::IOError;
  }
  nbytes_ = static_cast<size_t>(stream_.gcount());
  if (stream_.eof())
    return ErrorCode::EndOfFile;

  return ErrorCode::Ok;
#endif
}

ErrorCode File::write(const char *message) {

  size_t msglen = std::strlen(message);
  if (msglen > fsize_) {
    return ErrorCode::NoSpace;
  }
  bool writable = (mode_ == Mode::Write || mode_ == Mode::Append ||
                   mode_ == Mode::Truncate);
  if (!writable) {
    return ErrorCode::ReadOnly;
  }

  ErrorCode map_stat = map(true);
  if (map_stat != ErrorCode::Ok) {
    return map_stat;
  }

#ifdef _MSC_VER
  if (lpMapAddress == nullptr) {
    return ErrorCode::NotOpen;
  }

  __try {
    std::memcpy(lpMapAddress, message, msglen);
    nbytes_ = msglen;
  } __except (GetExceptionCode() == EXCEPTION_IN_PAGE_ERROR
                  ? EXCEPTION_EXECUTE_HANDLER
                  : EXCEPTION_CONTINUE_SEARCH) {
    return ErrorCode::IOError;
  }

  if (!FlushViewOfFile(lpMapAddress, msglen)) {
    return ErrorCode::IOError;
  }

  return ErrorCode::Ok;

#else
  if (lpMapAddress) {

    std::memcpy(lpMapAddress, message, msglen);
    return ErrorCode::Ok;
  }

  if (!stream_.is_open())
    return ErrorCode::NotOpen;

  stream_.write(message, std::strlen(message));
  if (stream_.fail())
    return ErrorCode::IOError;

  return ErrorCode::Ok;
#endif
}

ErrorCode File::close() {

#ifdef _MSC_VER 
  if (hFileMap_)
    CloseHandle(hFileMap_);
  if (hFile_)
    CloseHandle(hFile_);
  hFileMap_ = nullptr;
  hFile_ = nullptr;
  return ErrorCode::Ok;
  hFileMap_ = nullptr;
  hFile_ = nullptr;
  return ErrorCode::Ok;
#endif
  if (stream_.is_open()) {
    stream_.close();
  }
  return ErrorCode::Ok;
}

ErrorCode File::unmap() {

#ifdef _MSC_VER
  bool unmap_status_t = UnmapViewOfFile(lpMapAddress);
  if (unmap_status_t) {
    return ErrorCode::Ok;
  }
  return ErrorCode::IOError;
#else
  if (lpMapAddress) {
    munmap(lpMapAddress, fsize_);
    lpMapAddress = nullptr;
  }
  if (fd_ >= 0) {
    ::close(fd_);
    fd_ = -1;
  }
  return ErrorCode::Ok;
#endif
}

bool File::eof() {
#ifdef _MSC_VER
  return readOffset_ >= fsize_;
#else
  return stream_.eof();
#endif
}

const char *File::getData() { return static_cast<const char *>(buffer); }

size_t File::getNBytes() const { return nbytes_; }

ErrorCode File::swap(File &other) noexcept {

  std::swap(stream_, other.stream_);
  std::swap(path_, other.path_);
  return ErrorCode::Ok;
}

Float File::getFileSwap() const { return Float(10); }

const char *File::getFileExtension() const {

  if (path_ == "")
    return nullptr;

  const char *dot = strrchr(path_.c_str(), '.');
  if (!dot || dot == path_)
    return nullptr;

  return dot + 1;
}

std::string File::getFileDirectory() {

  size_t pos = path_.find_last_of("/\\");
  if (pos == std::string::npos) {
    return std::string("");
  }
  return path_.substr(0, pos + 1);
}

ErrorCode File::move(const char *dirpath) {

  if (dirpath == nullptr) {
    return ErrorCode::InvalidArgument;
  }

  std::string lpExistingFileName = getFilename();
  std::string lpNewFileName = std::string(dirpath);

#ifdef _MSC_VER
  if (lpNewFileName.back() != '\\')
    lpNewFileName += '\\';
#else
  if (lpNewFileName.back() != '/')
    lpNewFileName += '/';
#endif

  lpNewFileName += lpExistingFileName;

#ifdef _MSC_VER

  if (_mkdir(dirpath) == -1 && errno != EEXIST) {
    return ErrorCode::IOError;
  }
  if (!MoveFileA(path_.c_str(), lpNewFileName.c_str())) {
    DWORD err = GetLastError();
    switch (err) {
    case ERROR_FILE_NOT_FOUND:
    case ERROR_PATH_NOT_FOUND:
      return ErrorCode::FileNotFound;
    case ERROR_ALREADY_EXISTS:
    case ERROR_FILE_EXISTS:
      return ErrorCode::FileExists;
    case ERROR_ACCESS_DENIED:
    case ERROR_SHARING_VIOLATION:
      return ErrorCode::PermissionDenied;
    case ERROR_NOT_SAME_DEVICE:
      return ErrorCode::CrossDeviceMove;
    case ERROR_DIRECTORY:
      return ErrorCode::IsDirectory;
    case ERROR_INVALID_PARAMETER:
      return ErrorCode::InvalidArgument;
    default:
      return ErrorCode::IOError;
    }
  }

#else
#ifdef PLATFORM_WINDOWS
  if (mkdir(dirpath) == -1 && errno != EEXIST) {
    return ErrorCode::IOError;
  }
#else
  if (mkdir(dirpath, 0755) == -1 && errno != EEXIST) {
    return ErrorCode::IOError;
  }
#endif
  if (::rename(path_.c_str(), lpNewFileName.c_str()) != 0) {
    return ErrorCode::IOError;
  }

#endif

  path_ = lpNewFileName;
  return ErrorCode::Ok;
}

ErrorCode File::copy() { return ErrorCode::NotImplemented; }

ErrorCode File::append() { return ErrorCode::NotImplemented; }

ErrorCode File::rename(const char *filename) {

  if (!filename || *filename == '\0')
    return ErrorCode::InvalidArgument;
  path_ = std::string(filename);
  return ErrorCode::Ok;
}

const std::string File::getFilename() {

  size_t pos = path_.find_last_of("/\\");
  if (pos == std::string::npos) {
    return std::string(path_.begin(), path_.end());
  }
  return std::string(path_.begin() + pos + 1, path_.end());
}

const Index File::getFileMode() { return (Index)mode_; }

std::string File::getFileType() {

  switch (type_) {
  case Unknown:
    return "Unknown";
  case Regular:
    return "Regular";
  case Directory:
    return "Directory";
  case Symlink:
    return "Symlink";
  default:
    return "InvalidType";
  }
}

const char *File::getFileTypeAsChar() { return getFileType().c_str(); }

ErrorCode File::castFileExtension(const char *ext) {

  if (!ext || *ext == '\0')
    return ErrorCode::InvalidArgument;

  size_t pos = path_.find_last_of('.');
  if (pos == std::string::npos) {
    path_ += ".";
    path_ += ext;
    return ErrorCode::Ok;
  }

  std::string iext = path_.substr(pos + 1);
  if (iext == ext)
    return ErrorCode::AlreadyExists;

  path_.replace(pos + 1, iext.size(), ext);
  return ErrorCode::Ok;
}

size_t File::size() const { return fsize_; }

ErrorCode File::toZip() { return ErrorCode::NotImplemented; }
