/*
 * Copyright 2026 Wissem Chiha
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "CommonPCH.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

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

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
