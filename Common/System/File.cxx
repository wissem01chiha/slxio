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

slxErrorId File::setInputStream(std::fstream &stream) {

  if (!stream.is_open()) {
    return slxErrorId::IOError;
  }
  stream_ = std::move(stream);
  buffer = nullptr;
  return slxErrorId::Ok;
}

File &File::getInstance() {
  static File instance;
  return instance;
}

slxErrorId File::open(File::Mode mode) {

  mode_ = mode;
#ifdef PLATFORM_WINDOWS
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
    return slxErrorId::NotImplemented;
  }

  hFile_ = CreateFileA(path_.c_str(), access,
                       FILE_SHARE_READ | FILE_SHARE_WRITE | FILE_SHARE_DELETE,
                       NULL, creation, FILE_ATTRIBUTE_NORMAL, NULL);

  if (hFile_ == INVALID_HANDLE_VALUE) {
    hFile_ = nullptr;
    return slxErrorId::FileNotFound;
  }

  LARGE_INTEGER size;
  if (!GetFileSizeEx(hFile_, &size)) {
    CloseHandle(hFile_);
    hFile_ = nullptr;
    return slxErrorId::IOError;
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

  return slxErrorId::Ok;

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
    return NotImplemented;
  }

  stream_.open(path_, flags);
  if (!stream_.is_open()) {
    return FileNotFound;
  }
  if (stream_.fail()) {
    return slxErrorId::IOError;
  }

  struct stat st;
  ::fstat(fd_, &st);
  fsize_ = static_cast<size_t>(st.st_size);

  struct stat st;
  if (stat(path_.c_str(), &st) != 0) {
    type_ = Unknown;
  }
  if (S_ISREG(st.st_mode)) {
    tyep_ = Regular;
  }
  if (S_ISDIR(st.st_mode)) {
    type_ = Directory;
  }
  if (S_ISLNK(st.st_mode)) {
    type_ = Symlink;
  }
  if (S_ISCHR(st.st_mode)) {
    type_ = CharacterDevice;
  }
  if (S_ISBLK(st.st_mode)) {
    type_ = BlockDevice;
  }
  if (S_ISFIFO(st.st_mode)) {
    tyep_ = FIFO;
  }
  if (S_ISSOCK(st.st_mode)) {
    tyep_ = Socket;
  }
  tyep_ = Unknown;

  return slxErrorId::Ok;
#endif
}

slxErrorId File::map(bool writable) {

#ifdef PLATFORM_WINDOWS
  if (hFile_ == nullptr || hFile_ == INVALID_HANDLE_VALUE) {
    return slxErrorId::NotOpen;
  }

  DWORD protect = writable ? PAGE_READWRITE : PAGE_READONLY;
  DWORD access = writable ? (FILE_MAP_WRITE | FILE_MAP_READ) : FILE_MAP_READ;

  hFileMap_ = CreateFileMapping(hFile_, NULL, protect, 0, 0, NULL);
  if (hFileMap_ == nullptr) {
    return slxErrorId::IOError;
  }

  lpMapAddress = MapViewOfFile(hFileMap_, access, 0, 0, 0);
  if (lpMapAddress == nullptr) {
    CloseHandle(hFileMap_);
    hFileMap_ = nullptr;
    return slxErrorId::IOError;
  }

  return slxErrorId::Ok;
#else
  int flags = writable ? O_RDWR : O_RDONLY;
  fd_ = ::open(path_.c_str(), flags);
  if (fd_ < 0)
    return FileNotFound;

  struct stat st;
  if (::fstat(fd_, &st) < 0) {
    ::close(fd_);
    return slxErrorId::IOError;
  }
  fsize_ = static_cast<size_t>(st.st_size);

  int prot = writable ? (PROT_READ | PROT_WRITE) : PROT_READ;
  lpMapAddress = ::mmap(nullptr, fsize_, prot, MAP_SHARED, fd_, 0);
  if (lpMapAddress == MAP_FAILED) {
    lpMapAddress = nullptr;
    ::close(fd_);
    return slxErrorId::IOError;
  }
  return slxErrorId::Ok;
#endif
}

slxErrorId File::read(size_t buffsize) {

  if (buffsize > maxbuffsize_) {
    return slxErrorId::InvalidArgument;
  }

  bool writable = (mode_ == Mode::Write || mode_ == Mode::Append ||
                   mode_ == Mode::Truncate);

  slxErrorId map_stat = map(writable);
  if (map_stat != slxErrorId::Ok) {
    return map_stat;
  }

  if (!buffer) {
    free(buffer);
    buffer = malloc(buffsize);
    buffsize_ = buffsize;
    if (!buffer)
      return slxErrorId::NoSpace;
  }
  size_t toRead = std::min(buffsize_, fsize_ - readOffset_);

#ifdef PLATFORM_WINDOWS
  if (hFileMap_ == nullptr || lpMapAddress == nullptr || buffer == nullptr) {
    return slxErrorId::NotOpen;
  }
  if (fsize_ == 0) {
    return slxErrorId::EndOfFile;
  }

  __try {
    std::memcpy(buffer, lpMapAddress, toRead);
    nbytes_ = toRead;
    readOffset_ += toRead;
  } __except (GetExceptionCode() == EXCEPTION_IN_PAGE_ERROR
                  ? EXCEPTION_EXECUTE_HANDLER
                  : EXCEPTION_CONTINUE_SEARCH) {
    return slxErrorId::IOError;
  }
  if (readOffset_ >= fsize_) {
    return slxErrorId::EndOfFile;
  }
  return slxErrorId::Ok;
#else
  if (lpMapAddress) {
    std::memcpy(buffer, lpMapAddress, toRead);
    nbytes_ = toRead;
    return slxErrorId::Ok;
  }
  if (!stream_.is_open())
    return NotOpen;
  stream_.read(reinterpret_cast<char *>(buffer), buffsize_);
  if (stream_.fail() && !stream_.eof()) {
    return slxErrorId::IOError;
  }
  nbytes_ = static_cast<size_t>(stream_.gcount());
  if (stream_.eof())
    return EndOfFile;

  return slxErrorId::Ok;
#endif
}

slxErrorId File::write(const char *message) {

  size_t msglen = std::strlen(message);
  if (msglen > fsize_) {
    return slxErrorId::NoSpace;
  }
  bool writable = (mode_ == Mode::Write || mode_ == Mode::Append ||
                   mode_ == Mode::Truncate);
  if (!writable) {
    return slxErrorId::ReadOnly;
  }

  slxErrorId map_stat = map(true);
  if (map_stat != slxErrorId::Ok) {
    return map_stat;
  }

#ifdef PLATFORM_WINDOWS
  if (lpMapAddress == nullptr) {
    return slxErrorId::NotOpen;
  }

  __try {
    std::memcpy(lpMapAddress, message, msglen);
    nbytes_ = msglen;
  } __except (GetExceptionCode() == EXCEPTION_IN_PAGE_ERROR
                  ? EXCEPTION_EXECUTE_HANDLER
                  : EXCEPTION_CONTINUE_SEARCH) {
    return slxErrorId::IOError;
  }

  if (!FlushViewOfFile(lpMapAddress, msglen)) {
    return slxErrorId::IOError;
  }

  return slxErrorId::Ok;

#else
  if (lpMapAddress) {

    std::memcpy(lpMapAddress, message, msglen);
    return slxErrorId::Ok;
  }

  if (!stream_.is_open())
    return NotOpen;

  stream_.write(message, std::strlen(message));
  if (stream_.fail())
    return slxErrorId::IOError;

  return slxErrorId::Ok;
#endif
}

slxErrorId File::close() {

#ifdef PLATFORM_WINDOWS
  if (hFileMap_)
    CloseHandle(hFileMap_);
  if (hFile_)
    CloseHandle(hFile_);
  hFileMap_ = nullptr;
  hFile_ = nullptr;
  return slxErrorId::Ok;
  hFileMap_ = nullptr;
  hFile_ = nullptr;
  return slxErrorId::Ok;
#endif
  if (stream_.is_open()) {
    stream_.close();
  }
  return slxErrorId::Ok;
}

slxErrorId File::unmap() {

#ifdef PLATFORM_WINDOWS
  bool unmap_status_t = UnmapViewOfFile(lpMapAddress);
  if (unmap_status_t) {
    return slxErrorId::Ok;
  }
  return slxErrorId::IOError;
#else
  if (lpMapAddress) {
    ::munmap(lpMapAddress, fsize_);
    lpMapAddress = nullptr;
  }
  if (fd_ >= 0) {
    ::close(fd_);
    fd_ = -1;
  }
  return slxErrorId::Ok;
#endif
}

bool File::eof() {
#ifdef PLATFORM_WINDOWS
  return readOffset_ >= fsize_;
#else
  return stream_.eof();
#endif
}

const char *File::getData() { return static_cast<const char *>(buffer); }

size_t File::getNBytes() const { return nbytes_; }

slxErrorId File::swap(File &other) noexcept {

  std::swap(stream_, other.stream_);
  std::swap(path_, other.path_);
  return slxErrorId::Ok;
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

slxErrorId File::move(const char *dirpath) {

  if (dirpath == nullptr) {
    return slxErrorId::InvalidArgument;
  }

  std::string lpExistingFileName = getFilename();
  std::string lpNewFileName = std::string(dirpath);

#ifdef PLATFORM_WINDOWS
  if (lpNewFileName.back() != '\\')
    lpNewFileName += '\\';
#else
  if (lpNewFileName.back() != '/')
    lpNewFileName += '/';
#endif

  lpNewFileName += lpExistingFileName;

#ifdef PLATFORM_WINDOWS

  if (_mkdir(dirpath) == -1 && errno != EEXIST) {
    return slxErrorId::IOError;
  }
  if (!MoveFileA(path_.c_str(), lpNewFileName.c_str())) {
    DWORD err = GetLastError();
    switch (err) {
    case ERROR_FILE_NOT_FOUND:
    case ERROR_PATH_NOT_FOUND:
      return slxErrorId::FileNotFound;
    case ERROR_ALREADY_EXISTS:
    case ERROR_FILE_EXISTS:
      return slxErrorId::FileExists;
    case ERROR_ACCESS_DENIED:
    case ERROR_SHARING_VIOLATION:
      return slxErrorId::PermissionDenied;
    case ERROR_NOT_SAME_DEVICE:
      return slxErrorId::CrossDeviceMove;
    case ERROR_DIRECTORY:
      return slxErrorId::IsDirectory;
    case ERROR_INVALID_PARAMETER:
      return slxErrorId::InvalidArgument;
    default:
      return slxErrorId::IOError;
    }
  }

#else

  if (::mkdir(dirpath, 0755) == -1 && errno != EEXIST) {
    return slxErrorId::IOError;
  }
  if (::rename(path_.c_str(), lpNewFileName.c_str()) != 0) {
    return slxErrorId::IOError;
  }

#endif

  path_ = lpNewFileName;
  return slxErrorId::Ok;
}

slxErrorId File::copy() { return slxErrorId::NotImplemented; }

slxErrorId File::append() { return slxErrorId::NotImplemented; }

slxErrorId File::rename(const char *filename) {

  if (!filename || *filename == '\0')
    return slxErrorId::InvalidArgument;
  path_ = std::string(filename);
  return slxErrorId::Ok;
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

slxErrorId File::castFileExtension(const char *ext) {

  if (!ext || *ext == '\0')
    return slxErrorId::InvalidArgument;

  size_t pos = path_.find_last_of('.');
  if (pos == std::string::npos) {
    path_ += ".";
    path_ += ext;
    return slxErrorId::Ok;
  }

  std::string iext = path_.substr(pos + 1);
  if (iext == ext)
    return slxErrorId::AlreadyExists;

  path_.replace(pos + 1, iext.size(), ext);
  return slxErrorId::Ok;
}

size_t File::size() const { return fsize_; }

slxErrorId File::toZip() { return slxErrorId::NotImplemented; }
