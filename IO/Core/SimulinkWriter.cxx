#include "SimulinkWriter.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

DataObject* SimulinkWriter::GetInputData() const
{
  return nullptr;
}

DataObject* SimulinkWriter::GetInputData(slxIdType idx) const
{
  return nullptr;
}


Logger& SimulinkWriter::GetLogger()
{
  return logger;
}

SLXIO_NAMESPACE_END
SLXIO_ABI_NAMESPACE_END


