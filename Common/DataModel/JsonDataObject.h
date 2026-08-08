// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef JSONDATAOBJECT_H
#define JSONDATAOBJECT_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "DataObject.h"
#include "PlatformTypes.h"

struct json_object;

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class JsonDataObject
 */
class SLXIO_APIEXPORT JsonDataObject : public DataObject {
public:
  JsonDataObject *New() override;
  void Initialize(void *implDataObject) override;
  bool Empty() const override;
  bool operator==(const DataObject &) override;
  void *GetImplDataObject() const override;
  std::string ToString() const override;
  JsonDataObject();
  ~JsonDataObject();

private:
  json_object *ImplDataObject;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // JSONDATAOBJECT_H
