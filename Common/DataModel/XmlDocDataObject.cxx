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

bool XmlDocDataObject::operator==(const IDataObject& other) const
{
  if (m_implDataObject == nullptr || other.GetImplDataObject() == nullptr) {
    return m_implDataObject == other.GetImplDataObject();
  }
  if (GetDataType() != other.GetDataType()) {
    return false;
  }

  auto otherDoc = SLXIO_STATIC_CAST(xmlDocPtr, other.GetImplDataObject());

  if (otherDoc->type != m_implDataObject->type) {
    return false;
  }
  xmlChar* buf1 = nullptr;
  int size1 = 0;
  xmlDocDumpMemory(m_implDataObject, &buf1, &size1);

  xmlChar* buf2 = nullptr;
  int size2 = 0;
  xmlDocDumpMemory(otherDoc, &buf2, &size2);

  bool equal = (size1 == size2) && (xmlStrcmp(buf1, buf2) == 0);

  xmlFree(buf1);
  xmlFree(buf2);

  return equal;
}

void* XmlDocDataObject::GetImplDataObject() const
{
  return m_implDataObject;
}

std::string XmlDocDataObject::ToString() const
{
  if (m_implDataObject == nullptr) {
    return std::string("");
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

DataType XmlDocDataObject::GetDataType() const
{
  return DataType::SLXIO_TYPE_LIBXML_DOCPTR;
}

XmlDocDataObject::XmlDocDataObject()
  : m_implDataObject(nullptr)
{
}

XmlDocDataObject::~XmlDocDataObject()
{
  if (m_implDataObject) {
    xmlFreeDoc(m_implDataObject);
    m_implDataObject = nullptr;
  }
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
