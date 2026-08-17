// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef DISCRETESTATESPACE_H
#define DISCRETESTATESPACE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT DiscreteStateSpace : public IBlockParameters,
                                           public IBlockProperties
{
public:
    /** Default Constructor */
    DiscreteStateSpace();

    /** Default Destructor */
    ~DiscreteStateSpace();

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

    const std::string& GetSampletime() const;
    void SetSampletime(const std::string& value);

    const std::string& GetStatename() const;
    void SetStatename(const std::string& value);

    const std::string& GetStatemustresolvetosignalobject() const;
    void SetStatemustresolvetosignalobject(const std::string& value);

    const std::string& GetStatesignalobject() const;
    void SetStatesignalobject(const std::string& value);

    const std::string& GetStatestorageclass() const;
    void SetStatestorageclass(const std::string& value);

    const std::string& GetRtwstatestoragetypequalifier() const;
    void SetRtwstatestoragetypequalifier(const std::string& value);

private:
    std::string m_A;

    std::string m_B;

    std::string m_C;

    std::string m_D;

    std::string m_Initialcondition;

    std::string m_Sampletime;

    std::string m_Statename;

    std::string m_Statemustresolvetosignalobject;

    std::string m_Statesignalobject;

    std::string m_Statestorageclass;

    std::string m_Rtwstatestoragetypequalifier;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // DISCRETESTATESPACE_H
