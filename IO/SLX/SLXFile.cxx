#include "SLXFile.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SLXFile::SLXFile(std::string path) {
  if (path != "") {
    filepath_ = path;
  }
}

File *SLXFile::loadblockDiagram() { return nullptr; }

File *SLXFile::loadConfigSet() { return nullptr; }

File *SLXFile::loadDataDictionary() { return nullptr; }

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
