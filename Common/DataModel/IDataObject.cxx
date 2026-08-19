#include "IDataObject.h"
#include "DataModelECH.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

HError IDataObject::SetLogger(ILogger* logger)
{
    if (logger == nullptr)
    {
        return E_ILOGGER_NULLPTR_RECEIVED;
    }
    m_logger = logger;
    return E_OK;
}

ILogger* IDataObject::GetLogger() { return m_logger; }

void IDataObject::UpdateTime() { m_updateTime = TimeStamp::Now(); }

TimeStamp IDataObject::GetUpdateTime() const { return m_updateTime; }

SLXIO_ABI_NAMESPACE_END

}; // namespace slxio
