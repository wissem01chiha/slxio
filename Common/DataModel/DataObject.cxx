#include "DataObject.h"
#include "DataModelErrorType.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

DataObject::DataObject() {}

UInt32 DataObject::GetUpdateTime() const { return (UInt32)0; }

UInt32 DataObject::GetMemorySize() const { return (UInt32)0; }

HError DataObject::SetLogger(const ILogger *logger) {
  if (logger == nullptr) {
    return E_ILOGGER_NULLPTR_RECEIVED;
  }
  m_logger = logger;
  return E_OK;
}

const ILogger *DataObject::GetLogger() { return m_logger; }

SLXIO_ABI_NAMESPACE_END

}; // namespace slxio
