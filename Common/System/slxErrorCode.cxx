#include "slxErrorCode.h"

slxErrorCode::slxErrorCode() { id_ = slxErrorId::Ok; }

const char *slxErrorCode::toString(slxErrorId type) {

  switch (type) {
  case slxErrorId::Ok:
    return "OK";
  case slxErrorId::SLX_ERR_OPEN:
    return "SLX_ERR_OPEN";
  case slxErrorId::SLX_ERR_DECOMPRESS:
    return "SLX_ERR_DECOMPRESS";
  case slxErrorId::SLX_ERR_ER_NOENT:
    return "SLX_ERR_ER_NOENT";
  case slxErrorId::SLX_ERR_ER_NOTEMPTY:
    return "SLX_ERR_ER_NOTEMPTY";
  case slxErrorId::SLX_ERR_ER_COPY_FAIL:
    return "SLX_ERR_ER_COPY_FAIL";
  case slxErrorId::SLX_ERR_NULL_PTR:
    return "SLX_ERR_NULL_PTR";
  case slxErrorId::SLX_ERR_ADD_FAIL:
    return "SLX_ERR_ADD_FAIL";
  case slxErrorId::SLX_ERR_FILE_DELETE:
    return "SLX_ERR_FILE_DELETE";
  case slxErrorId::SLX_ERR_MEMORY_ALLOC:
    return "SLX_ERR_MEMORY_ALLOC";
  case slxErrorId::SLX_ERR_DENIED:
    return "SLX_ERR_DENIED";
  case slxErrorId::SLX_ERR_TYPE_MISMATCH:
    return "SLX_ERR_TYPE_MISMATCH";
  case slxErrorId::SLX_ERR_CAST_FAIL:
    return "SLX_ERR_CAST_FAIL";
  case slxErrorId::SLX_ERR_INVALID_XML:
    return "SLX_ERR_INVALID_XML";
  case slxErrorId::SLX_ERR_UNKNOWN:
    return "SLX_ERR_UNKNOWN";
  case slxErrorId::SLX_ERR_INVALID_EXTENSION:
    return "SLX_ERR_INVALID_EXTENSION";
  case slxErrorId::SLX_ERR_EXTENSION_NOT_SUPPORTED:
    return "SLX_ERR_EXTENSION_NOT_SUPPORTED";
  default:
    return "UNRECOGNIZED_ERROR_CODE";
  }
}

const char *slxErrorCode::toString() const { return toString(this->id_); }

slxErrorId slxErrorCode::toErrorId(uint32 value) {
  return static_cast<slxErrorId>(value);
}

bool slxErrorCode::exist(slxErrorId type) const { return id_ == type; }

slxErrorCode::slxErrorCode(slxErrorId id) { id_ = id; }
