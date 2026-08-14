// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef ISFINITE_H
#define ISFINITE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Isfinite : public IBlockParameters,
                                 public IBlockProperties
{
public:
    /** Default Constructor */
    Isfinite();

    /** Default Destructor */
    ~Isfinite();

    const std::string& GetOperator() const;
    void SetOperator(const std::string& value);

    const std::string& GetInputsamedt() const;
    void SetInputsamedt(const std::string& value);

    const std::string& GetOutdatatypestr() const;
    void SetOutdatatypestr(const std::string& value);

    const std::string& GetZerocross() const;
    void SetZerocross(const std::string& value);

    const std::string& GetSampletime() const;
    void SetSampletime(const std::string& value);

    const std::string& GetRndmeth() const;
    void SetRndmeth(const std::string& value);

private:
    std::string m_Operator;

    std::string m_Inputsamedt;

    std::string m_Outdatatypestr;

    std::string m_Zerocross;

    std::string m_Sampletime;

    std::string m_Rndmeth;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // ISFINITE_H
