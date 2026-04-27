#include "SimulinkSolverParser.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

ErrorCode SimulinkSolverParser::setInputData(const xmlNodePtr data)
{
  if (!data)
  {
    l.log(
      Logger::V_ERROR, "SimulinkSolverParser::null data node pointer received");
    return ErrorCode::SLX_ENULLPTR;
  }

  if (xmlStrcmp(data->name, BAD_CAST "Solver") != 0)
  {
    l.log(Logger::V_ERROR,
      "SimulinkSolverParser::setInputData failed: expected node "
      "<Solver>, but got <%s>",
      data->name);
    return ErrorCode::SLX_EINVAR;
  }

  dataObject = data;
  return ErrorCode::E_OK;
}

ErrorCode SimulinkSolverParser::parse()
{
  return ErrorCode::E_OK;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END