// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef XMLDOCDATAOBJECT
#define XMLDOCDATAOBJECT

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "DataModelPCH.h"
#include "IDataObject.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class XmlDocDataObject
 * @brief A wrapper around libxml2 xmlDocPtr object
 * implementing IDataObject interface
 */
class SLXIO_APIEXPORT XmlDocDataObject : public IDataObject
{
public:
  XmlDocDataObject* New() override;
  void Initialize(void* implDataObject) override;
  bool Empty() const override;
  bool operator==(const IDataObject& other) const override;
  void* GetImplDataObject() const override;
  std::string ToString() const override;
  DataType GetDataType() const override;
  XmlDocDataObject();
  ~XmlDocDataObject();

private:
  xmlDocPtr m_implDataObject;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // XMLDOCDATAOBJECT
