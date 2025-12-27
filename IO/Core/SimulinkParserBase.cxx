#include "SimulinkParserBase.h"
#include "Logger.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

ErrorBuffer& SimulinkParserBase::getErrorBuffer()  { return buffer_; }

const ErrorBuffer &SimulinkParserBase::getErrorBuffer() const {
  return buffer_;
}

SLXIO_NAMESPACE_END
SLXIO_ABI_NAMESPACE_END


