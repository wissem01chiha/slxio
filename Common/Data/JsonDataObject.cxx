#include "JsonDataObject.h"
#include "Json-c.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

JsonDataObject* JsonDataObject::New()
{
  return new JsonDataObject();
}

bool JsonDataObject::Empty()
{
  return ImplDataObject == nullptr;
}

bool JsonDataObject::operator==(const DataObject& other)
{
  if (ImplDataObject == nullptr || other.GetImplDataObject() == nullptr)
  {
    return ImplDataObject == other.GetImplDataObject();
  }

  return json_object_equal(ImplDataObject, static_cast<json_object*>(other.GetImplDataObject()));
}

void* JsonDataObject::GetImplDataObject() const
{
  return ImplDataObject;
}

std::string JsonDataObject::ToString() const
{
  return std::string();
}

JsonDataObject::JsonDataObject()
  : ImplDataObject(nullptr)
{
}

SLXIO_ABI_NAMESPACE_END
};
