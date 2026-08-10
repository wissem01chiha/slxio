// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef XMLDOCDATAOBJECT
#define XMLDOCDATAOBJECT

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IDataObject.h"
#include "Libxml2.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

/**
 *
 */
class SLXIO_APIEXPORT xmlDocDataObject : public IDataObject
{
public:
  xmlDocDataObject* New() override;
  bool Empty() override;
  bool operator==(const DataObject&) override;
  void* GetImplDataObject() const override;
  std::string ToString() const override;

  xmlDocDataObject();

private:
  xmlDocPtr ImplDataObject;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // XMLDOCDATAOBJECT
