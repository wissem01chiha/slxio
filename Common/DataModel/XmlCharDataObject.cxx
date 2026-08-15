#include "XmlCharDataObject.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

XmlCharDataObject* XmlCharDataObject::New() { return new XmlCharDataObject(); }

void XmlCharDataObject::Initialize(void* implDataObject)
{

    if (implDataObject != nullptr)
    {
        m_implDataObject = SLXIO_STATIC_CAST(xmlChar*, implDataObject);
    }
}

bool XmlCharDataObject::Empty() const { return m_implDataObject == nullptr; }

bool XmlCharDataObject::operator==(const IDataObject& other) const
{
    if (m_implDataObject == nullptr || other.GetImplDataObject() == nullptr)
    {
        return m_implDataObject == other.GetImplDataObject();
    }
    if (GetDataType() != other.GetDataType())
    {
        return false;
    }
    return m_implDataObject == other.GetImplDataObject();
}

void* XmlCharDataObject::GetImplDataObject() const { return m_implDataObject; }

std::string XmlCharDataObject::ToString() const
{

    if (m_implDataObject == nullptr)
    {
        return std::string("");
    }
    return std::string(reinterpret_cast<const char*>(m_implDataObject));
}

DataType XmlCharDataObject::GetDataType() const
{
    return DataType::SLXIO_TYPE_LIBXML_XMLCHAR;
}

XmlCharDataObject::XmlCharDataObject() : m_implDataObject(nullptr) {}

XmlCharDataObject::~XmlCharDataObject()
{
    if (m_implDataObject)
    {
        m_implDataObject = nullptr;
    }
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
