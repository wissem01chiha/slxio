#include "Error.h"

Error::Error() { errno_ = ErrorCode::Ok; }

const char *Error::toString(ErrorCode type) {

  switch (type) {
  case ErrorCode::Ok:
    return "OK";
  case ErrorCode::SLX_ERR_OPEN:
    return "SLX_ERR_OPEN";
  case ErrorCode::SLX_ERR_DECOMPRESS:
    return "SLX_ERR_DECOMPRESS";
  case ErrorCode::SLX_ERR_ER_NOENT:
    return "SLX_ERR_ER_NOENT";
  case ErrorCode::SLX_ERR_ER_NOTEMPTY:
    return "SLX_ERR_ER_NOTEMPTY";
  case ErrorCode::SLX_ERR_ER_COPY_FAIL:
    return "SLX_ERR_ER_COPY_FAIL";
  case ErrorCode::SLX_ERR_NULL_PTR:
    return "SLX_ERR_NULL_PTR";
  case ErrorCode::SLX_ERR_ADD_FAIL:
    return "SLX_ERR_ADD_FAIL";
  case ErrorCode::SLX_ERR_FILE_DELETE:
    return "SLX_ERR_FILE_DELETE";
  case ErrorCode::SLX_ERR_MEMORY_ALLOC:
    return "SLX_ERR_MEMORY_ALLOC";
  case ErrorCode::SLX_ERR_DENIED:
    return "SLX_ERR_DENIED";
  case ErrorCode::SLX_ERR_TYPE_MISMATCH:
    return "SLX_ERR_TYPE_MISMATCH";
  case ErrorCode::SLX_ERR_CAST_FAIL:
    return "SLX_ERR_CAST_FAIL";
  case ErrorCode::SLX_ERR_INVALID_XML:
    return "SLX_ERR_INVALID_XML";
  case ErrorCode::SLX_ERR_UNKNOWN:
    return "SLX_ERR_UNKNOWN";
  case ErrorCode::SLX_ERR_INVALID_EXTENSION:
    return "SLX_ERR_INVALID_EXTENSION";
  case ErrorCode::SLX_ERR_EXTENSION_NOT_SUPPORTED:
    return "SLX_ERR_EXTENSION_NOT_SUPPORTED";
  default:
    return "UNRECOGNIZED_ERROR_CODE";
  }
}

const char *Error::toString() const { return toString(this->errno_); }

ErrorCode Error::toErrorCode(uint32 value) {
  return static_cast<ErrorCode>(value);
}

bool Error::isA(ErrorCode type) const { return errno_ == type; }

Error::Error(ErrorCode id) { errno_ = id; }