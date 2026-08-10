#include "XmlDocDataObject.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

XmlDocDataObject* XmlDocDataObject::New()
{
  return new XmlDocDataObject();
}

void XmlDocDataObject::Initialize(void* implDataObject)
{
  if (implDataObject != nullptr) {
    m_implDataObject = SLXIO_STATIC_CAST(xmlDocPtr, implDataObject);
  }
}

bool XmlDocDataObject::Empty() const
{
  return m_implDataObject == nullptr;
}

bool XmlDocDataObject::operator==(const IDataObject&)
{
  return false;
}

void* XmlDocDataObject::GetImplDataObject() const
{
  return m_implDataObject;
}

std::string XmlDocDataObject::ToString() const
{
  if (m_implDataObject == nullptr) {
    return std::string();
  }
  xmlChar* buffer = nullptr;
  int size = 0;
  xmlDocDumpMemory(m_implDataObject, &buffer, &size);
  std::string result;
  if (buffer != nullptr && size > 0) {
    result.assign(reinterpret_cast<char*>(buffer), size);
    xmlFree(buffer);
  }

  return result;
}

DataType XmlDocDataObject::GetDataType()
{
  return DataType::SLXIO_TYPE_LIBXML_DOCPTR;
}

XmlDocDataObject::XmlDocDataObject() {}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
