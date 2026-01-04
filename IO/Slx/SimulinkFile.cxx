#include "SimulinkFile.h"
#include "Logger.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkFile::SimulinkFile() {}

const SimulinkContent &SimulinkFile::getContent() const { return content; }

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END


