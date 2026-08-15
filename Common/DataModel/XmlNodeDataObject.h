// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef XMLNODEDATAOBJECT
#define XMLNODEDATAOBJECT

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "DataModelPCH.h"
#include "IDataObject.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class XmlNodeDataObject
 * @brief A wrapper around libxml2 xmlNodePtr object
 * implementing IDataObject interface
 */
class SLXIO_APIEXPORT XmlNodeDataObject : public IDataObject
{
public:
    XmlNodeDataObject();
    ~XmlNodeDataObject();
    XmlNodeDataObject* New() override;
    void Initialize(void* implDataObject) override;
    bool Empty() const override;
    bool operator==(const IDataObject& other) const override;
    void* GetImplDataObject() const override;
    std::string ToString() const override;
    DataType GetDataType() const override;

private:
    xmlNodePtr m_implDataObject{nullptr};
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // XMLNODEDATAOBJECT
