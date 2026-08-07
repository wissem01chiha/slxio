#include "StateflowBlockParser.h"
#include "SimulinkObjectParser.h"
#include "SlxParameter.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

HError StateflowBlockParser::setInputData(const xmlNodePtr data) {
  if (!data) {
    // l.log(
      Logger::V_ERROR, "StateflowBlockParser::null data node pointer received");
      return E_PARAMETER_NULL_PTR;
  }

  if (xmlStrcmp(data->name, BAD_CAST "StateflowBlock") != 0) {
    // l.log(Logger::V_ERROR,
      "StateflowBlockParser::setInputData failed: expected node "
      "<StateflowBlock>, but got <%s>",
      data->name);
      return E_INVALID_ARGUMENT;
  }

  dataObject = data;
  return E_OK;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
