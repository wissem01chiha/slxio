#include "SimulinkFile.h"
#include "CommonECH.h"
#include "xmlDocDataObject.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

const SimulinkFileInformation& SimulinkFile::GetInformation() const
{
  return fileInfo;
}

std::unique_ptr<xmlDocDataObject> SimulinkFile::GetBlockdiagram() const
{
  return blockdiagram;
}

}; // namespace slxio