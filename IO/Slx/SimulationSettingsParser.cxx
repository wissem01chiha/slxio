#include "SimulationSettingsParser.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

ErrorCode SimulationSettingsParser::setInputData(const xmlNodePtr data)
{
  if (!data)
  {
    l.log(Logger::V_ERROR,
      "SimulationSettingsParser::null data node pointer received");
    return ErrorCode::SLX_ENULLPTR;
  }

  if (xmlStrcmp(data->name, BAD_CAST "SimulationSettings") != 0)
  {
    l.log(Logger::V_ERROR,
      "SimulationSettingsParser::setInputData failed: expected "
      "node <SimulationSettings>, but got <%s>",
      data->name);
    return ErrorCode::SLX_EINVAR;
  }

  dataObject = data;
  return ErrorCode::E_OK;
}

ErrorCode SimulationSettingsParser::parse()
{

  return ErrorCode::E_OK;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END