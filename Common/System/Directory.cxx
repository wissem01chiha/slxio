#include "Directory.h"

Directory::Directory(std::string path) { path_ = path; }

Directory::Directory(Directory &&other) {}

uint64 Directory::getNumberOfFiles() const { return uint64(); }

const File &Directory::getFile(Index index) const {
  // TODO: insert return statement here
  return *(new File());
}

std::string const &Directory::getFileName(Index index) const {
  // TODO: insert return statement here
  static std::string filename;
  return filename;
}

const char *Directory::getCurrentDirectory() { return nullptr; }

std::string Directory::getFilePath(Index index) const { return std::string(); }

bool Directory::isDirectory(const char *path) { return false; }

bool Directory::isDirectory(const std::string &path) { return false; }

std::vector<Directory> Directory::getSubDirectories() {
  return std::vector<Directory>();
}

std::string Directory::getDirectoryName() { return std::string(""); }

bool Directory::empty() { return false; }
