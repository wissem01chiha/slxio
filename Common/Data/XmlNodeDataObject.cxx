#include "XmlNodeDataObject.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

XmlNodeDataObject::XmlNodeDataObject() = default;
;

XmlNodeDataObject* XmlNodeDataObject::New() { return new XmlNodeDataObject(); }

void XmlNodeDataObject::Initialize(void* implDataObject)
{
    m_implDataObject = static_cast<xmlNodePtr>(implDataObject);
}

bool XmlNodeDataObject::Empty() const { return m_implDataObject == nullptr; }

bool XmlNodeDataObject::operator==(const IDataObject& other) const
{
    const auto* otherNode = dynamic_cast<const XmlNodeDataObject*>(&other);
    if (!otherNode)
        return false;
    return m_implDataObject == otherNode->m_implDataObject;
}

void* XmlNodeDataObject::GetImplDataObject() const { return m_implDataObject; }

std::string XmlNodeDataObject::ToString() const
{
    if (m_implDataObject && m_implDataObject->name)
        return reinterpret_cast<const char*>(m_implDataObject->name);
    return "";
}

DataType XmlNodeDataObject::GetDataType() const
{
    return DataType::SLXIO_TYPE_LIBXML_XML_NODE;
}

XmlNodeDataObject::~XmlNodeDataObject()
{
    if (m_implDataObject != nullptr)
    {
        m_implDataObject = nullptr;
    }
}

SLXIO_ABI_NAMESPACE_END
} // namespace slxio
