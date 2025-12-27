#include "SimulinkFileBase.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkFileBase::SimulinkFileBase(std::string path) {
  if (path != "") {
    filepath_ = path;
  }
}

File *SimulinkFileBase::loadblockDiagram() { return nullptr; }

File *SimulinkFileBase::loadConfigSet() { return nullptr; }

File *SimulinkFileBase::loadDataDictionary() { return nullptr; }

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
