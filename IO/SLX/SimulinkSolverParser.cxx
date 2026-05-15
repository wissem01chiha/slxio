#include "SimulinkSolverParser.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

ReturnType SimulinkSolverParser::setInputData(const xmlNodePtr data)
{
  if (!data)
  {
    //l.log(
      Logger::V_ERROR, "SimulinkSolverParser::null data node pointer received");
    return E_PARAMETER_NULL_PTR;
  }

  if (xmlStrcmp(data->name, BAD_CAST "Solver") != 0)
  {
    //l.log(Logger::V_ERROR,
      "SimulinkSolverParser::setInputData failed: expected node "
      "<Solver>, but got <%s>",
      data->name);
    return E_INVALID_ARGUMENT;
  }

  dataObject = data;
  return E_OK;
}

ReturnType SimulinkSolverParser::parse()
{
  return E_OK;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
