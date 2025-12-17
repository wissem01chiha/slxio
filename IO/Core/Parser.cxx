#include "Parser.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

Parser::ErrorCode Parser::setInputData(void *data) {
  input_ = data;
  return Ok;
}

Parser::ErrorCode Parser::getLastError() const { return lastError_; }

const char *Parser::toString(ErrorCode code) {
  switch (code) {
  case Ok:
    return "Ok";
  case InvalidFormat:
    return "Invalid Format";
  case FormatNotSupported:
    return "Format Not Supported";
  default:
    return "Unknown Error";
  }
}

Parser::Parser() : lastError_(Ok) {}

void Parser::setError(ErrorCode code) { lastError_ = code; }

SLXIO_NAMESPACE_END
SLXIO_ABI_NAMESPACE_END
