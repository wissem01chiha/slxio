// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef JSONDATAOBJECT_H
#define JSONDATAOBJECT_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "DataObject.h"
#include "PlatformTypes.h"

struct json_object;

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class JsonDataObject
 * @brief A Wrapper Around Json-c Object types
 */
class SLXIO_APIEXPORT JsonDataObject : public DataObject
{
public:
  JsonDataObject* New() override;
  bool Empty() override;
  bool operator==(const DataObject&) override;
  void* GetImplDataObject() const override;
  std::string toString() const override;
  JsonDataObject();

private:
  json_object* ImplDataObject;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // JSONDATAOBJECT_H
