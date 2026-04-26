// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKMODELREFRENCE_H
#define SIMULINKMODELREFRENCE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief SimulinkModelReference represents the model reference settings
 */
class APIEXPORT SimulinkModelReference final
{
public:
  SimulinkModelReference() = default;
  ~SimulinkModelReference() = default;

  const char** DisabledProps;
  const char* Description;
  const char** Components;
  const char* UpdateModelReferenceTargets;
  const char* EnableRefExpFcnMdlSchedulingChecks;
  const char* CheckModelReferenceTargetMessage;
  const char* EnableParallelModelReferenceBuilds;
  const char* ParallelModelReferenceErrorOnInvalidPool;
  const char* ParallelModelReferenceMATLABWorkerInit;
  const char* ModelReferenceNumInstancesAllowed;
  const char* PropagateVarSize;
  const char* ModelDependencies;
  const char* ModelReferencePassRootInputsByReference;
  const char* ModelReferenceMinAlgLoopOccurrences;
  const char* PropagateSignalLabelsOutOfModel;
  const char* SupportModelReferenceSimTargetCustomCode;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKMODELREFRENCE_H