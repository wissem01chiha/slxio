#include "slxDirectory.h"

slxDirectory::slxDirectory(std::string path) { path_ = path; }

slxErrorId slxDirectory::init() { return slxErrorId::Ok; }

const char *slxDirectory::getCurrentDirectory() { return nullptr; }

std::string slxDirectory::getDirectoryname() { return std::string(""); }

bool slxDirectory::empty() { return false; }
