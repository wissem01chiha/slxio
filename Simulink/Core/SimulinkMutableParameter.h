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
    : public IParameterObject<std::string>,
      public IObservable
{
public:
    ~SimulinkMutableParameter();

private:
    // TODO: add member variables
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // SIMULINKMUTABLEPARAMETER_H