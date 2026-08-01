#include "SignalDataObject.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

SignalObject* SignalObject::New()
{
  return new SignalObject();
}

bool SignalObject::operator==(const DataObject&)
{
  return ImplDataObject == nullptr;
}

void* SignalObject::GetImplDataObject() const
{
  return ImplDataObject;
}

std::string SignalObject::ToString() const
{
  return std::string();
}

bool SignalObject::Empty()
{
  return false;
}

SignalObject::SignalObject() {}

SLXIO_ABI_NAMESPACE_END
};
