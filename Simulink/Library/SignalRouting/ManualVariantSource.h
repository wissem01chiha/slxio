// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef MANUALVARIANTSOURCE_H
#define MANUALVARIANTSOURCE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT ManualVariantSource : public IBlockParameters,
                                            public IBlockProperties
{
public:
    /** Default Constructor */
    ManualVariantSource();

    /** Default Destructor */
    ~ManualVariantSource();

    const std::string& GetNumchoices() const;
    void SetNumchoices(const std::string& value);

private:
    std::string m_Numchoices;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // MANUALVARIANTSOURCE_H
