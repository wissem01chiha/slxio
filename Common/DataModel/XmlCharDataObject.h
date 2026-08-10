// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef XMLCHARDATAOBJECT
#define XMLCHARDATAOBJECT

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IDataObject.h"
#include "Libxml2.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class XmlCharDataObject
 * @brief
 */
class SLXIO_APIEXPORT XmlCharDataObject : public IDataObject
{
public:
  xmlCharDataObject* New() override;
  bool Empty() override;
  bool operator==(const DataObject&) override;
  void* GetImplDataObject() const override;
  std::string ToString() const override;
  XmlCharDataObject();

private:
  xmlChar* ImplDataObject;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // XMLCHARDATAOBJECT
