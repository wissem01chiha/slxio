// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "DataObject.h"
#include "LibXML2.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT xmlDocDataObject : public DataObject
{
public:
    xmlDocDataObject();
    ~xmlDocDataObject();
private:
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END