#include "SimulinkModelParser.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

HError SimulinkModelParser::setInputData(const xmlNodePtr data)
{
  if (data == nullptr)
  {
    // l.log(Logger::V_ERROR, "SimulinkModelParser:: null pointer received");
    return E_INVALID_ARGUMENT;
  }
  dataObject = data;
  return E_OK;
}

SLXIO_ABI_NAMESPACE_END
};
