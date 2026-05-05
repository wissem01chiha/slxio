#include "SimulinkPortTypeParser.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

slxReturnType SimulinkPortTypeParser::setInputData(const std::string data)
{
  dataObject = data;
  return E_OK;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END