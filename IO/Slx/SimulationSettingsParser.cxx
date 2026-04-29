#include "SimulationSettingsParser.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

ReturnType SimulationSettingsParser::setInputData(const xmlNodePtr data)
{
  if (!data)
  {
    //l.log(Logger::V_ERROR,
      "SimulationSettingsParser::null data node pointer received");
    return E_FUNC_PARAM_NULL_PTR;
  }

  if (xmlStrcmp(data->name, BAD_CAST "SimulationSettings") != 0)
  {
    //l.log(Logger::V_ERROR,
      "SimulationSettingsParser::setInputData failed: expected "
      "node <SimulationSettings>, but got <%s>",
      data->name);
    return E_WRNG_FUNC_PARAM;
  }

  dataObject = data;
  return E_OK;
}

ReturnType SimulationSettingsParser::parse()
{

  return E_OK;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END