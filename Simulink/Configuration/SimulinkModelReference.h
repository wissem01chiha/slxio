// Copyright 2025-2026 Wissem Chiha
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
// implied. See the License for the specific language governing
// permissions and limitations under the License.

#ifndef SIMULINKMODELREFRENCE_H
#define SIMULINKMODELREFRENCE_H

#include "ABINamespace.h"
#include "APIExport.h"
#include "Type.h"

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