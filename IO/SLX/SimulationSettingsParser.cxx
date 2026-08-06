#include "SimulationSettingsParser.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

HError SimulationSettingsParser::setInputData(const xmlNodePtr data)
{
  if (!data)
  {
    // l.log(Logger::V_ERROR,
      "SimulationSettingsParser::null data node pointer received");
      return E_PARAMETER_NULL_PTR;
  }

  if (xmlStrcmp(data->name, BAD_CAST "SimulationSettings") != 0)
  {
    // l.log(Logger::V_ERROR,
      "SimulationSettingsParser::setInputData failed: expected "
      "node <SimulationSettings>, but got <%s>",
      data->name);
      return E_INVALID_ARGUMENT;
  }

  dataObject = data;
  return E_OK;
}

HError SimulationSettingsParser::parse()
{

  return E_OK;
}

SLXIO_ABI_NAMESPACE_END
};
