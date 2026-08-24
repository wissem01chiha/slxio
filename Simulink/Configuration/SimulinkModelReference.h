// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKMODELREFRENCE_H
#define SIMULINKMODELREFRENCE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "ConfigurationPCH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief SimulinkModelReference represents the model reference settings
 */
struct SLXIO_APIEXPORT SimulinkModelReference final // NOSONAR
{
    std::string DisabledProps;
    std::string Description;
    std::string Components;
    std::string UpdateModelReferenceTargets;
    std::string EnableRefExpFcnMdlSchedulingChecks;
    std::string CheckModelReferenceTargetMessage;
    std::string EnableParallelModelReferenceBuilds;
    std::string ParallelModelReferenceErrorOnInvalidPool;
    std::string ParallelModelReferenceMATLABWorkerInit;
    std::string ModelReferenceNumInstancesAllowed;
    std::string PropagateVarSize;
    std::string ModelDependencies;
    std::string ModelReferencePassRootInputsByReference;
    std::string ModelReferenceMinAlgLoopOccurrences;
    std::string PropagateSignalLabelsOutOfModel;
    std::string SupportModelReferenceSimTargetCustomCode;
};

bool IsValid(const SimulinkModelReference* reference);

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // SIMULINKMODELREFRENCE_H
