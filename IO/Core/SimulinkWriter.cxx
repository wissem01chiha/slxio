#include "SimulinkWriter.h"
#include "DataObject.h"
#include "Logger.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

DataObject* SimulinkWriter::GetInputData() const
{
  return nullptr;
}

DataObject* SimulinkWriter::GetInputData(IdType idx) const
{
  return nullptr;
}

Logger& SimulinkWriter::GetLogger()
{
  return logger;
}

};
SLXIO_ABI_NAMESPACE_END
