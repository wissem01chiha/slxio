// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKMUTABLEPARAMETER_H
#define SIMULINKMUTABLEPARAMETER_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IMutableParameterObject.h"
#include "IObservable.h"
#include "IParameterObject.h"
#include "PlatformTypes.h"
#include "SimulinkDataType.h"
#include "SimulinkParameterInformation.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class SimulinkMutableParameter
 */
class SLXIO_APIEXPORT SimulinkMutableParameter
    : public IMutableParameterObject<std::string>,
      public IObservable
{
public:
    SimulinkMutableParameter();

    explicit SimulinkMutableParameter(const std::string& value);

    IParameterObjectBase* New() override;

    ~SimulinkMutableParameter();

    void SetValue(const std::string& value) override;

    std::string& GetValue() override;

    UInt64 GetValueAsInt() const;
    Float32 GetValueAsFloat() const;
    Float64 GetValueAsDouble() const;

    DataType GetDataType() const override;
    SimulinkDataType GetSimulinkDataType() const;
    void SetSimulinkDataType(SimulinkDataType type);

    SimulinkParameterInformation& GetSimulinkParameterInformation() const;

private:
    std::string m_value;
    SimulinkDataType m_dataType{SimulinkDataType::Auto};
    std::unique_ptr<SimulinkParameterInformation> m_information;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // SIMULINKMUTABLEPARAMETER_H