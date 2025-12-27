#include "SlxFile.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SlxFile::SlxFile(std::string path) {
  if (path != "") {
    filepath_ = path;
  }
}

File *SlxFile::loadblockDiagram() { return nullptr; }

File *SlxFile::loadConfigSet() { return nullptr; }

File *SlxFile::loadDataDictionary() { return nullptr; }

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
