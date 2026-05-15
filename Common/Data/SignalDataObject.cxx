#include "SignalDataObject.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SignalObject* SignalObject::New()
{
  return new SignalObject();
}

bool SignalObject::operator==(const DataObject&)
{
  return ImplDataObject ==nullptr;
}

void* SignalObject::GetImplDataObject() const
{
  return ImplDataObject;
}

std::string SignalObject::toString() const
{
  return std::string();
}

bool SignalObject::Empty()
{
  return false;
}

SignalObject::SignalObject() {}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
