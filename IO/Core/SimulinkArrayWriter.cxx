#include "SimulinkArrayWriter.h"
#include "DataObject.h"
#include "SimulinkArray.h"
#include "ErrorCode.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkArrayWriter* SimulinkArrayWriter::New()
{
  return nullptr;
}

ReturnType SimulinkArrayWriter::Write()
{
  return E_OK;
}

ReturnType SimulinkArrayWriter::SetInputData(const DataObject& data)
{

  return E_OK;
}
ReturnType SimulinkArrayWriter::SetInputData(IdType idx, const DataObject& data)
{

  return E_OK;
}
SLXIO_ABI_NAMESPACE_END
};
