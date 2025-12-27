#include "Parser.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

ErrorCode Parser::setInputData(void *data) {
  input_ = data;
  return ErrorCode::SLX_OK;
}

ErrorCode Parser::getLastError() const { return lastError_; }

const char *Parser::toString(ErrorCode code) { return "Unknown Error"; }

Parser::Parser() : lastError_(ErrorCode::SLX_OK) {}

void Parser::setError(ErrorCode code) { lastError_ = code; }

SLXIO_NAMESPACE_END
SLXIO_ABI_NAMESPACE_END
