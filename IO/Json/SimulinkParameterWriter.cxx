#include "SimulinkParameterWriter.h"
#include "Logger.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkParameterWriter::SimulinkParameterWriter() {}

ErrorCode SimulinkParameterWriter::Write() { return ErrorCode::SLX_OK; }

void SimulinkParameterWriter::setOutputData(json_object* data) {}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END


