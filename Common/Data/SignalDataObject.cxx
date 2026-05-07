#include "SignalObject.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN


SignalObject* SignalObject::New()
{
  return nullptr;
}

IdType SignalObject::GetDataType()
{
  return IdType();
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END