#include "IDataObject.h"
#include "DataModelECH.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

IDataObject::IDataObject() {}

UInt32 IDataObject::GetUpdateTime() const
{
  return (UInt32)0;
}

UInt32 IDataObject::GetMemorySize() const
{
  return (UInt32)0;
}

HError IDataObject::SetLogger(const ILogger* logger)
{
  if (logger == nullptr) {
    return E_ILOGGER_NULLPTR_RECEIVED;
  }
  m_logger = logger;
  return E_OK;
}

const ILogger* IDataObject::GetLogger()
{
  return m_logger;
}

SLXIO_ABI_NAMESPACE_END

}; // namespace slxio
