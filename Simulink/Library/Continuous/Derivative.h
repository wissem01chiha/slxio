// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef DERIVATIVE_H
#define DERIVATIVE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "ISimulinkBlock.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Derivative : public IBlockParameters,
                                   public IBlockProperties,
                                   public ISimulinkBlock
{
public:
    Derivative() = default;

    explicit Derivative(Float64 coefficientintfapproximation);

    ~Derivative() = default;

    SimulinkBlockType GetBlockType() const override;
    SimulinkBlockCategory GetBlockCategory() const override;

    void AddParam(const std::string& name,
                  const std::shared_ptr<IParameterObjectBase>& p) override;
    void SetParam(const std::string& name,
                  const std::shared_ptr<IParameterObjectBase>& p) override;
    std::shared_ptr<IParameterObjectBase>
    GetParam(const std::string& name) override;

    std::string ToString() const override;

private:
    std::string m_coefficientintfapproximation;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // DERIVATIVE_H
