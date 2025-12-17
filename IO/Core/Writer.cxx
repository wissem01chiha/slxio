#include "Writer.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

const char *Writer::toString(ErrorCode code) { return nullptr; }

void Writer::setError(ErrorCode code) { lastError_ = code; }

SLXIO_NAMESPACE_END
SLXIO_ABI_NAMESPACE_END
