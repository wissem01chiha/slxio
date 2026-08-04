#include "SimulinkLineParser.h"
#include "SimulinkParameterParser.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

SResult SimulinkLineParser::setInputData(const xmlNodePtr data)
{

  if (data == nullptr)
  {
    // l.log(Logger::V_ERROR, "SimulinkLineParser:: null node pointer
    // received");
    return E_PARAMETER_NULL_PTR;
  }
  dataObject = data;
  return E_OK;
}

SResult SimulinkLineParser::parse()
{
  return E_OK;
}

SLXIO_ABI_NAMESPACE_END
};
