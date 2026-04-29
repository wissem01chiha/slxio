#include "StateflowBlockParser.h"
#include "SimulinkObjectParser.h"
#include "SlxParameter.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

ReturnType StateflowBlockParser::setInputData(const xmlNodePtr data)
{
  if (!data)
  {
    //l.log(
      Logger::V_ERROR, "StateflowBlockParser::null data node pointer received");
    return E_FUNC_PARAM_NULL_PTR;
  }

  if (xmlStrcmp(data->name, BAD_CAST "StateflowBlock") != 0)
  {
    //l.log(Logger::V_ERROR,
      "StateflowBlockParser::setInputData failed: expected node "
      "<StateflowBlock>, but got <%s>",
      data->name);
    return E_WRNG_FUNC_PARAM;
  }

  dataObject = data;
  return E_OK;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
