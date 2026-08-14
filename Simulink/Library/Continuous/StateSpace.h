// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef STATESPACE_H
#define STATESPACE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT StateSpace : public IBlockParameters,
                                   public IBlockProperties
{
public:
    /** Default Constructor */
    StateSpace();

    /** Default Destructor */
    ~StateSpace();

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

    const std::string& GetParametertunability() const;
    void SetParametertunability(const std::string& value);

    const std::string& GetAllowtunabledmatrix() const;
    void SetAllowtunabledmatrix(const std::string& value);

    const std::string& GetAbsolutetolerance() const;
    void SetAbsolutetolerance(const std::string& value);

    const std::string& GetContinuousstateattributes() const;
    void SetContinuousstateattributes(const std::string& value);

private:
    std::string m_A;

    std::string m_B;

    std::string m_C;

    std::string m_D;

    std::string m_Initialcondition;

    std::string m_Parametertunability;

    std::string m_Allowtunabledmatrix;

    std::string m_Absolutetolerance;

    std::string m_Continuousstateattributes;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // STATESPACE_H
