#include "SimulinkHardwareParser.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

ErrorCode SimulinkHardwareParser::setInputData(const xmlNodePtr data)
{
  if (data == nullptr)
  {
    l.log(Logger::V_ERROR, "SimulinkHardwareParser:: null pointer received");
    return ErrorCode::SLX_EINVAR;
  }
  dataObject = data;
  return ErrorCode::E_OK;
}

ErrorCode SimulinkHardwareParser::parse()
{
  return ErrorCode::E_OK;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END