#include "XmlCharDataObject.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

XmlCharDataObject* XmlCharDataObject::New()
{
  return new XmlCharDataObject();
}

bool XmlCharDataObject::Empty()
{
  return ImplDataObject == nullptr;
}

bool XmlCharDataObject::operator==(const IDataObject& other)
{
  return false;
}

void* XmlCharDataObject::GetImplDataObject() const
{
  return ImplDataObject;
}

std::string XmlCharDataObject::ToString() const
{
  return std::string();
}

DataType XmlCharDataObject::GetDataType() const
{
  return DataType();
}

XmlCharDataObject::XmlCharDataObject() : m_implDataObject(nullptr) {}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
