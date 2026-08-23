#include "JsonDataObject.h"
#include "DataModelPCH.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

JsonDataObject* JsonDataObject::New() { return new JsonDataObject(); }

void JsonDataObject::Initialize(void* implDataObject)
{
    if (implDataObject == nullptr)
    {
        ILogger* m_logger = GetLogger();
        if (m_logger != nullptr)
        {
            // m_loogger->log(StringMessageWatever msg);
        }
        return;
    }
    m_implDataObject = SLXIO_STATIC_CAST(json_object*, implDataObject);
}

bool JsonDataObject::Empty() const { return m_implDataObject == nullptr; }

bool JsonDataObject::operator==(const IDataObject& other) const
{
    if (m_implDataObject == nullptr || other.GetImplDataObject() == nullptr)
    {
        return m_implDataObject == other.GetImplDataObject();
    }
    if (GetDataType() == other.GetDataType())
    {
        return json_object_equal(
            m_implDataObject,
            SLXIO_STATIC_CAST(json_object*, other.GetImplDataObject()));
    }

    return false;
}

void* JsonDataObject::GetImplDataObject() const { return m_implDataObject; }

std::string JsonDataObject::ToString() const
{
    if (Empty())
    {
        return std::string("");
    }
    const char* str = json_object_to_json_string(m_implDataObject);
    return std::string(str);
}

DataType JsonDataObject::GetDataType() const
{
    return DataType::SLXIO_TYPE_CJSON_OBJECT;
}

JsonDataObject::JsonDataObject() : m_implDataObject(nullptr) {}

JsonDataObject::~JsonDataObject()
{
    if (m_implDataObject)
    {
        json_object_put(m_implDataObject);
        m_implDataObject = nullptr;
    }
}
SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
