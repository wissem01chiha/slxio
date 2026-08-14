// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef EXTRACTBITS_H
#define EXTRACTBITS_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT ExtractBits : public IBlockParameters,
                                    public IBlockProperties
{
public:
    /** Default Constructor */
    ExtractBits();

    /** Default Destructor */
    ~ExtractBits();

    const std::string& GetBitstoextract() const;
    void SetBitstoextract(const std::string& value);

    const std::string& GetNumbits() const;
    void SetNumbits(const std::string& value);

    const std::string& GetBitidxrange() const;
    void SetBitidxrange(const std::string& value);

    const std::string& GetOutscalingmode() const;
    void SetOutscalingmode(const std::string& value);

private:
    std::string m_Bitstoextract;

    std::string m_Numbits;

    std::string m_Bitidxrange;

    std::string m_Outscalingmode;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // EXTRACTBITS_H
