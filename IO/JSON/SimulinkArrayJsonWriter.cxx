#include "SimulinkArrayWriter.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkArrayWriter* SimulinkArrayWriter::New()
{
  return nullptr;
}

HError SimulinkArrayWriter::Write()
{
  return HError();
}

SLXIO_ABI_NAMESPACE_END
};
