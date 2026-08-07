#include "xmlDocDataObject.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

xmlDocDataObject *xmlDocDataObject::New() { return new xmlDocDataObject(); }

bool xmlDocDataObject::Empty() { return ImplDataObject == nullptr; }

bool xmlDocDataObject::operator==(const DataObject &) { return false; }

void *xmlDocDataObject::GetImplDataObject() const { return ImplDataObject; }

std::string xmlDocDataObject::ToString() const {
  if (ImplDataObject == nullptr) {
    return std::string();
  }
  xmlChar *buffer = nullptr;
  int size = 0;
  xmlDocDumpMemory(ImplDataObject, &buffer, &size);
  std::string result;
  if (buffer != nullptr && size > 0) {
    result.assign(reinterpret_cast<char *>(buffer), size);
    xmlFree(buffer);
  }

  return result;
}

xmlDocDataObject::xmlDocDataObject() {}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
