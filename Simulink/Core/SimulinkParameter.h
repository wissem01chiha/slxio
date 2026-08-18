// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKPARAMETER_H
#define SIMULINKPARAMETER_H

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
 * @class SimulinkParameter
 * @brief A Simulink Parameter object.
 * by default this is immutable for a mutable simulink parameter value
 * see SimulinkMutableParameter
 */
class SLXIO_APIEXPORT SimulinkParameter : public IParameterObject<std::string>,
                                          public IObservable
{
public:
    SimulinkParameter();

    explicit SimulinkParameter(const std::string& value);

    IParameterObjectBase* New() override;

    ~SimulinkParameter();

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

#endif // SIMULINKPARAMETER_H
