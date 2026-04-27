#include "SimulinkModelParser.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

ErrorCode SimulinkModelParser::setInputData(const xmlNodePtr data)
{
  if (data == nullptr)
  {
    l.log(Logger::V_ERROR, "SimulinkModelParser:: null pointer received");
    return ErrorCode::SLX_EINVAR;
  }
  dataObject = data;
  return ErrorCode::E_OK;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END