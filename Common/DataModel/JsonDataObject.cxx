#include "JsonDataObject.h"
#include "Json-c.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

JsonDataObject *JsonDataObject::New() { return new JsonDataObject(); }

void JsonDataObject::Initialize(void *implDataObject) {
  if (implDataObject == nullptr) {
    if (m_logger != nullptr) {
      // m_loogger->log(StringMessageWatever msg);
    }
    return;
  }
  ImplDataObject = SLXIO_STATIC_CAST(json_object *, implDataObject);
}

bool JsonDataObject::Empty() const { return ImplDataObject == nullptr; }

bool JsonDataObject::operator==(const DataObject &other) {
  if (ImplDataObject == nullptr || other.GetImplDataObject() == nullptr) {
    return ImplDataObject == other.GetImplDataObject();
  }

  return json_object_equal(
      ImplDataObject,
      SLXIO_STATIC_CAST(json_object *, other.GetImplDataObject()));
}

void *JsonDataObject::GetImplDataObject() const { return ImplDataObject; }

std::string JsonDataObject::ToString() const {
  if (Empty()) {
    return std::string("");
  }
  const char *str = json_object_to_json_string(ImplDataObject);
  return std::string(str);
}

JsonDataObject::JsonDataObject() : ImplDataObject(nullptr) {}

JsonDataObject::~JsonDataObject() {
  if (ImplDataObject) {
    json_object_put(ImplDataObject);
    ImplDataObject = nullptr;
  }
}
SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
