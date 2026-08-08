// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef JSONDATAOBJECT_H
#define JSONDATAOBJECT_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "DataObject.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

struct json_object;

/**
 * @class JsonDataObject
 * @brief A Wrapper Around Json-c Object types
 */
class SLXIO_APIEXPORT JsonDataObject : public DataObject {
public:
  JsonDataObject *New() override;
  bool Empty() override;
  bool operator==(const DataObject &) override;
  void *GetImplDataObject() const override;
  std::string ToString() const override;
  JsonDataObject();

private:
  json_object *ImplDataObject;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // JSONDATAOBJECT_H
