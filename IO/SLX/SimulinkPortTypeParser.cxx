#include "SimulinkPortTypeParser.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

SResult SimulinkPortTypeParser::setInputData(const std::string data)
{
  dataObject = data;
  return E_OK;
}

SLXIO_ABI_NAMESPACE_END
};
