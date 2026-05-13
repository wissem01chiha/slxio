#include "xmlCharDataObject.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

xmlCharDataObject* xmlCharDataObject::New()
{
  return new xmlCharDataObject();
}

bool xmlCharDataObject::Empty()
{
  return ImplDataObject ==nullptr;
}

bool xmlCharDataObject::operator==(const DataObject&)
{
  return false;
}

void* xmlCharDataObject::GetImplDataObject() const
{
  return ImplDataObject;
}

std::string xmlCharDataObject::toString() const
{
  return std::string();
}

xmlCharDataObject::xmlCharDataObject() {}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END


