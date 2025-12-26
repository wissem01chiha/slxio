#include "Directory.h"
#include <codecvt>
#include <locale>

Directory::Directory(const std::string &path) : path_(path) {
  filelist.clear();
  subdirlist_.clear();
}

Directory::Directory(const std::wstring &path) {
  size_t len = wcstombs(nullptr, path.c_str(), 0) + 1;
  char *buffer = new char[len];
  wcstombs(buffer, path.c_str(), len);
  std::string str(buffer);
  this->path_ = str;
  filelist.clear();
}

Directory::Directory(const char *path) { this->path_ = std::string(path); }

Directory::Directory(const wchar_t *wpath) {
  std::wstring ws(wpath);
  std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> conv;
  path_ = conv.to_bytes(ws);
}

Directory::Directory(const Directory &dir) {
  this->path_ = dir.path_;
  this->filelist = dir.filelist;
  this->filemap = dir.filemap;
  this->subdirlist_ = dir.subdirlist_;
  this->subdirs_ = dir.subdirs_;
}

Directory &Directory::operator=(const Directory &other) {
  if (this != &other) {
    path_ = other.path_;
    filelist = other.filelist;
    subdirlist_ = other.subdirlist_;
    filemap = other.filemap;
    subdirs_ = other.subdirs_;
  }
  return *this;
}

Directory &Directory::operator=(Directory &&other) noexcept {
  if (this != &other) {

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

ErrorCode Directory::open() {

  uv_fs_t req;
  int err = uv_fs_opendir(uv_default_loop(), &req, path_.c_str(), nullptr);
  if (err < 0) {
    const char *err_str = uv_strerror(err);
    fprintf(stderr, "%s : \n", err_str);
    uv_fs_req_cleanup(&req);
    return ErrorCode::SLX_EIOERR;
  }
  uv_dir_t *dir = static_cast<uv_dir_t *>(req.ptr);

  int32_t count = 0;
  while (true) {
    uv_fs_t readdir_req;
    int r = uv_fs_readdir(uv_default_loop(), &readdir_req, dir, nullptr);
    if (r < 0) {
      fprintf(stderr, "%s\n", uv_strerror(r));
      uv_fs_req_cleanup(&readdir_req);
      break;
    }
    if (r == 0) {
      uv_fs_req_cleanup(&readdir_req);
      break;
    }

    for (unsigned i = 0; i < dir->nentries; ++i) {
      uv_dirent_t &ent = dir->dirents[i];
      std::string name(ent.name);
      if (ent.type == UV_DIRENT_FILE) {
        File f_(name);
        filelist.push_back(f_);
        filemap[name] = f_;
      } else if (ent.type == UV_DIRENT_DIR) {
        Directory d_(name);
        subdirlist_.push_back(d_);
        subdirs_[name] = d_;
      }
    }

    count += r;
    uv_fs_req_cleanup(&readdir_req);
  }

  uv_fs_t closedir_req;
  uv_fs_closedir(uv_default_loop(), &closedir_req, dir, nullptr);
  uv_fs_req_cleanup(&closedir_req);
  uv_fs_req_cleanup(&req);
  return ErrorCode::SLX_OK;
}

sint32 Directory::getNumberOfFiles() const {

  uv_fs_t req;
  int err = uv_fs_opendir(uv_default_loop(), &req, path_.c_str(), nullptr);
  if (err < 0) {
    const char *err_str = uv_strerror(err);
    fprintf(stderr, "%s : \n", err_str);
    uv_fs_req_cleanup(&req);
    return -1;
  }
  uv_dir_t *dir = static_cast<uv_dir_t *>(req.ptr);

  int32_t count = 0;
  while (true) {
    uv_fs_t readdir_req;
    int r = uv_fs_readdir(uv_default_loop(), &readdir_req, dir, nullptr);
    if (r < 0) {
      fprintf(stderr, "%s\n", uv_strerror(r));
      uv_fs_req_cleanup(&readdir_req);
      break;
    }
    if (r == 0) {
      uv_fs_req_cleanup(&readdir_req);
      break;
    }
    count += r;
    uv_fs_req_cleanup(&readdir_req);
  }
  uv_fs_closedir(uv_default_loop(), &req, dir, nullptr);
  uv_fs_req_cleanup(&req);

  return count;
}

const File *Directory::getFile(const size_t &index) const {
  if (index >= filelist.size()) {
    return nullptr;
  }
  return &filelist[index];
}

const File *Directory::getFile(const std::string &filename) const {

  auto it = filemap.find(filename);
  if (it != filemap.end()) {
    return &it->second;
  }
  return nullptr;
}

const char *Directory::getCurrentDirectory() {

  static char buffer[1024];
  size_t size = sizeof(buffer);

  int r = uv_cwd(buffer, &size);
  if (r < 0) {
    fprintf(stderr, "%s\n", uv_strerror(r));
    return nullptr;
  }
  return buffer;
}

bool Directory::isDirectory(const char *path) {
  uv_fs_t req;
  int r = uv_fs_stat(uv_default_loop(), &req, path, nullptr);
  if (r < 0) {
    fprintf(stderr, "%s\n", uv_strerror(r));
    uv_fs_req_cleanup(&req);
    return false;
  }

  bool result = (req.statbuf.st_mode & S_IFMT) == S_IFDIR;
  uv_fs_req_cleanup(&req);
  return result;
}

bool Directory::isDirectory(const std::string &path) {
  return isDirectory(path.c_str());
}

std::vector<Directory> Directory::getSubDirectories() {
  return std::vector<Directory>();
}

std::string Directory::getDirectoryName() {
  if (path_.empty()) {
    return "";
  }
  size_t pos = path_.find_last_of("/\\");
  if (pos == std::string::npos) {
    return path_;
  }
  return path_.substr(pos + 1);
}

bool Directory::empty() { return filelist.empty(); }

ErrorCode Directory::toZip() { return ErrorCode::SLX_OK; }
