// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef XMLCHARDATAOBJECT
#define XMLCHARDATAOBJECT

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IDataObject.h"
#include "Libxml2.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class XmlCharDataObject
 * @brief
 */
class SLXIO_APIEXPORT XmlCharDataObject : public IDataObject
{
public:
    XmlCharDataObject* New() override;
    bool Empty() const override;
    bool operator==(const IDataObject&) const override;
    void* GetImplDataObject() const override;
    std::string ToString() const override;
    DataType GetDataType() const override;
    XmlCharDataObject();

private:
    xmlChar* m_implDataObject;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // XMLCHARDATAOBJECT
