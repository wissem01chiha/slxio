// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SHIFTARITHMETIC_H
#define SHIFTARITHMETIC_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT ShiftArithmetic : public IBlockParameters,
                                        public IBlockProperties
{
public:
    /** Default Constructor */
    ShiftArithmetic();

    /** Default Destructor */
    ~ShiftArithmetic();

    const std::string& GetBitshiftnumbersource() const;
    void SetBitshiftnumbersource(const std::string& value);

    const std::string& GetBitshiftnumber() const;
    void SetBitshiftnumber(const std::string& value);

    const std::string& GetBinptshiftnumber() const;
    void SetBinptshiftnumber(const std::string& value);

    const std::string& GetBitshiftdirection() const;
    void SetBitshiftdirection(const std::string& value);

    const std::string& GetDiagnosticforoorshift() const;
    void SetDiagnosticforoorshift(const std::string& value);

    const std::string& GetCheckoorbitshift() const;
    void SetCheckoorbitshift(const std::string& value);

private:
    std::string m_Bitshiftnumbersource;

    std::string m_Bitshiftnumber;

    std::string m_Binptshiftnumber;

    std::string m_Bitshiftdirection;

    std::string m_Diagnosticforoorshift;

    std::string m_Checkoorbitshift;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // SHIFTARITHMETIC_H
