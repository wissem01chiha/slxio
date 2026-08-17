// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef VARIANTEND_H
#define VARIANTEND_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT VariantEnd : public IBlockParameters,
                                   public IBlockProperties
{
public:
    /** Default Constructor */
    VariantEnd();

    /** Default Destructor */
    ~VariantEnd();

    const std::string& GetVariantstartendtag() const;
    void SetVariantstartendtag(const std::string& value);

    const std::string& GetVariantpairedblock() const;
    void SetVariantpairedblock(const std::string& value);

private:
    std::string m_Variantstartendtag;

    std::string m_Variantpairedblock;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // VARIANTEND_H
