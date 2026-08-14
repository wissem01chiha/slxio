// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef FIXEDPOINTSTATESPACE_H
#define FIXEDPOINTSTATESPACE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT FixedPointStateSpace : public IBlockParameters,
                                             public IBlockProperties
{
public:
    /** Default Constructor */
    FixedPointStateSpace();

    /** Default Destructor */
    ~FixedPointStateSpace();

    const std::string& GetA() const;
    void SetA(const std::string& value);

    const std::string& GetB() const;
    void SetB(const std::string& value);

    const std::string& GetC() const;
    void SetC(const std::string& value);

    const std::string& GetD() const;
    void SetD(const std::string& value);

    const std::string& GetInitialcondition() const;
    void SetInitialcondition(const std::string& value);

    const std::string& GetInternaldatatype() const;
    void SetInternaldatatype(const std::string& value);

    const std::string& GetStateeqscaling() const;
    void SetStateeqscaling(const std::string& value);

    const std::string& GetOutputeqscaling() const;
    void SetOutputeqscaling(const std::string& value);

    const std::string& GetLockscale() const;
    void SetLockscale(const std::string& value);

    const std::string& GetRndmeth() const;
    void SetRndmeth(const std::string& value);

    const std::string& GetDosatur() const;
    void SetDosatur(const std::string& value);

private:
    std::string m_A;

    std::string m_B;

    std::string m_C;

    std::string m_D;

    std::string m_Initialcondition;

    std::string m_Internaldatatype;

    std::string m_Stateeqscaling;

    std::string m_Outputeqscaling;

    std::string m_Lockscale;

    std::string m_Rndmeth;

    std::string m_Dosatur;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // FIXEDPOINTSTATESPACE_H
