#include "SimulinkArrayWriter.h"

#include "DataObject.h"
#include "ErrorCode.h"
#include "SimulinkArray.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkArrayWriter* SimulinkArrayWriter::New() { return nullptr; }

HError SimulinkArrayWriter::Write() { return E_OK; }

HError SimulinkArrayWriter::SetInputData(const DataObject& data)
{
    return E_OK;
}
HError SimulinkArrayWriter::SetInputData(SId idx, const DataObject& data)
{
    return E_OK;
}
SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
