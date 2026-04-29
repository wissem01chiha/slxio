#include "SimulinkLineParser.h"
#include "SimulinkParameterParser.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

ReturnType SimulinkLineParser::setInputData(const xmlNodePtr data)
{

  if (data == nullptr)
  {
    //l.log(Logger::V_ERROR, "SimulinkLineParser:: null node pointer received");
    return E_FUNC_PARAM_NULL_PTR;
  }
  dataObject = data;
  return E_OK;
}

ReturnType SimulinkLineParser::parse()
{
  return E_OK;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
