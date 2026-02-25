#include "SimulinkLineParser.h"
#include "SimulinkParameterParser.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

ErrorCode SimulinkLineParser::setInputData(const xmlNodePtr data)
{

  if (data == nullptr)
  {
    l.log(Logger::V_ERROR, "SimulinkLineParser:: null node pointer received");
    return ErrorCode::SLX_ENULLPTR;
  }
  dataObject = data;
  return ErrorCode::SLX_OK;
}

ErrorCode SimulinkLineParser::parse()
{
  return ErrorCode::SLX_OK;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
