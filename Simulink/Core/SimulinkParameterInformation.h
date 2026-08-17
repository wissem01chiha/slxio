// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKPARAMETERINFORMATION_H
#define SIMULINKPARAMETERINFORMATION_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class CoderInfo;

/**
 * @class SimulinkParameterInformation
 * @brief Metadata describing a Simulink parameter.
 */
class SLXIO_APIEXPORT SimulinkParameterInformation
{
public:
    SimulinkParameterInformation();
    ~SimulinkParameterInformation();

    const std::string& GetUnit() const;
    void SetUnit(const std::string& unit);

    const std::string& GetDescription() const;
    void SetDescription(const std::string& desc);

    const std::string& GetComplexity() const;
    void SetComplexity(const std::string& comp);

    Float32 GetMin() const;
    void SetMin(Float32 min);

    Float32 GetMax() const;
    void SetMax(Float32 max);

    const std::vector<UInt16>& GetDimensions() const;
    void SetDimensions(const std::vector<UInt16>& dims);

    void SetCoderInfo(const std::shared_ptr<CoderInfo>& coder);
    std::shared_ptr<CoderInfo> GetCoderInfo() const;

private:
    std::string m_unit;
    std::string m_description;
    std::string m_complexity;
    Float32 m_min;
    Float32 m_max;
    std::vector<UInt16> m_dimensions;
    std::shared_ptr<CoderInfo> m_coder;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // SIMULINKPARAMETERINFORMATION_H
