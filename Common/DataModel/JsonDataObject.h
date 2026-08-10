// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef JSONDATAOBJECT_H
#define JSONDATAOBJECT_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IDataObject.h"
#include "PlatformTypes.h"

struct json_object;

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class JsonDataObject
 * @brief Wrapper of Json-c json_object type into IDataObject based
 * type
 * @note for now we have only Json-c lib for json parse/write support
 * in future could be added other so considr rename to something speciefic
 * liek CJsonDataObject to switch backends easily
 */
class SLXIO_APIEXPORT JsonDataObject : public IDataObject
{
public:
  JsonDataObject* New() override;
  void Initialize(void* implDataObject) override;
  bool Empty() const override;
  bool operator==(const IDataObject&) override;
  void* GetImplDataObject() const override;
  std::string ToString() const override;
  /** Returns SLXIO_TYPE_CJSON_OBJECT */
  DataType GetDataType() override;
  JsonDataObject();
  ~JsonDataObject();

private:
  json_object* m_implDataObject;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // JSONDATAOBJECT_H
