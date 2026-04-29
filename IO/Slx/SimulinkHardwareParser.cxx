#include "SimulinkHardwareParser.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

ReturnType SimulinkHardwareParser::setInputData(const xmlNodePtr data)
{
  if (data == nullptr)
  {
    //l.log(Logger::V_ERROR, "SimulinkHardwareParser:: null pointer received");
    return E_WRNG_FUNC_PARAM;
  }
  dataObject = data;
  return E_OK;
}

ReturnType SimulinkHardwareParser::parse()
{
  return E_OK;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END