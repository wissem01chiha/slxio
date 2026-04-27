#include "StateflowBlockParser.h"
#include "SimulinkObjectParser.h"
#include "SlxParameter.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

ErrorCode StateflowBlockParser::setInputData(const xmlNodePtr data)
{
  if (!data)
  {
    l.log(
      Logger::V_ERROR, "StateflowBlockParser::null data node pointer received");
    return ErrorCode::SLX_ENULLPTR;
  }

  if (xmlStrcmp(data->name, BAD_CAST "StateflowBlock") != 0)
  {
    l.log(Logger::V_ERROR,
      "StateflowBlockParser::setInputData failed: expected node "
      "<StateflowBlock>, but got <%s>",
      data->name);
    return ErrorCode::SLX_EINVAR;
  }

  dataObject = data;
  return ErrorCode::E_OK;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
