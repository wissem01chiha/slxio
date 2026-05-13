// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef XMLCHARDATAOBJECT
#define XMLCHARDATAOBJECT

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "DataObject.h"
#include "LibXML2.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT xmlCharDataObject : public DataObject
{
public:
  xmlCharDataObject* New() override;
  bool Empty() override;
  bool operator==(const DataObject&) override;
  void* GetImplDataObject() const override;
  std::string toString() const override;

  xmlCharDataObject();

private:
  xmlChar* ImplDataObject;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // XMLCHARDATAOBJECT