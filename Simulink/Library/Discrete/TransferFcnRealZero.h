// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef TRANSFERFCNREALZERO_H
#define TRANSFERFCNREALZERO_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT TransferFcnRealZero : public IBlockParameters,
                                            public IBlockProperties
{
public:
    /** Default Constructor */
    TransferFcnRealZero();

    /** Default Destructor */
    ~TransferFcnRealZero();

    const std::string& GetZeroz() const;
    void SetZeroz(const std::string& value);

    const std::string& GetIcprevinput() const;
    void SetIcprevinput(const std::string& value);

    const std::string& GetInputprocessing() const;
    void SetInputprocessing(const std::string& value);

    const std::string& GetRndmeth() const;
    void SetRndmeth(const std::string& value);

    const std::string& GetDosatur() const;
    void SetDosatur(const std::string& value);

private:
    std::string m_Zeroz;

    std::string m_Icprevinput;

    std::string m_Inputprocessing;

    std::string m_Rndmeth;

    std::string m_Dosatur;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // TRANSFERFCNREALZERO_H
