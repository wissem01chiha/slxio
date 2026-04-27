#include "SimulinkSignalParser.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

ErrorCode SimulinkSignalParser::setInputData(const xmlNodePtr data)
{
  if (data == nullptr)
  {
    l.log(Logger::V_ERROR, "SimulinkSignalParser:: null node pointer received");
    return ErrorCode::SLX_ENULLPTR;
  }
  dataObject = data;
  return ErrorCode::E_OK;
}

ErrorCode SimulinkSignalParser::parse()
{
  return ErrorCode::E_OK;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
