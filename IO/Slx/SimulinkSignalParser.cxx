#include "SimulinkSignalParser.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

slxReturnType SimulinkSignalParser::setInputData(const xmlNodePtr data)
{
  if (data == nullptr)
  {
    //l.log(Logger::V_ERROR, "SimulinkSignalParser:: null node pointer received");
    return E_PARAMETER_NULL_PTR;
  }
  dataObject = data;
  return E_OK;
}

slxReturnType SimulinkSignalParser::parse()
{
  return E_OK;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
