#include "XmlCharDataObject.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

XmlCharDataObject* XmlCharDataObject::New()
{
  return new xmlCharDataObject();
}

bool xmlCharDataObject::Empty()
{
  return ImplDataObject == nullptr;
}

bool xmlCharDataObject::operator==(const DataObject&)
{
  return false;
}

void* xmlCharDataObject::GetImplDataObject() const
{
  return ImplDataObject;
}

std::string xmlCharDataObject::ToString() const
{
  return std::string();
}

xmlCharDataObject::xmlCharDataObject() {}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
