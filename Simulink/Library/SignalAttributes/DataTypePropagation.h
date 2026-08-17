// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef DATATYPEPROPAGATION_H
#define DATATYPEPROPAGATION_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT DataTypePropagation : public IBlockParameters,
                                            public IBlockProperties
{
public:
    /** Default Constructor */
    DataTypePropagation();

    /** Default Destructor */
    ~DataTypePropagation();

    const std::string& GetPropdatatypemode() const;
    void SetPropdatatypemode(const std::string& value);

    const std::string& GetPropdatatype() const;
    void SetPropdatatype(const std::string& value);

    const std::string& GetIfrefdouble() const;
    void SetIfrefdouble(const std::string& value);

    const std::string& GetIfrefsingle() const;
    void SetIfrefsingle(const std::string& value);

    const std::string& GetIssigned() const;
    void SetIssigned(const std::string& value);

    const std::string& GetNumbitsbase() const;
    void SetNumbitsbase(const std::string& value);

    const std::string& GetNumbitsmult() const;
    void SetNumbitsmult(const std::string& value);

    const std::string& GetNumbitsadd() const;
    void SetNumbitsadd(const std::string& value);

    const std::string& GetNumbitsallowfinal() const;
    void SetNumbitsallowfinal(const std::string& value);

    const std::string& GetPropscalingmode() const;
    void SetPropscalingmode(const std::string& value);

    const std::string& GetPropscaling() const;
    void SetPropscaling(const std::string& value);

    const std::string& GetValuesusedbestprec() const;
    void SetValuesusedbestprec(const std::string& value);

    const std::string& GetSlopebase() const;
    void SetSlopebase(const std::string& value);

    const std::string& GetSlopemult() const;
    void SetSlopemult(const std::string& value);

    const std::string& GetSlopeadd() const;
    void SetSlopeadd(const std::string& value);

    const std::string& GetBiasbase() const;
    void SetBiasbase(const std::string& value);

    const std::string& GetBiasmult() const;
    void SetBiasmult(const std::string& value);

    const std::string& GetBiasadd() const;
    void SetBiasadd(const std::string& value);

private:
    std::string m_Propdatatypemode;

    std::string m_Propdatatype;

    std::string m_Ifrefdouble;

    std::string m_Ifrefsingle;

    std::string m_Issigned;

    std::string m_Numbitsbase;

    std::string m_Numbitsmult;

    std::string m_Numbitsadd;

    std::string m_Numbitsallowfinal;

    std::string m_Propscalingmode;

    std::string m_Propscaling;

    std::string m_Valuesusedbestprec;

    std::string m_Slopebase;

    std::string m_Slopemult;

    std::string m_Slopeadd;

    std::string m_Biasbase;

    std::string m_Biasmult;

    std::string m_Biasadd;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // DATATYPEPROPAGATION_H
