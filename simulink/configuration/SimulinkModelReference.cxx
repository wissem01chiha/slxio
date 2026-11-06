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

#include "SimulinkModelReference.h"

namespace slxio
{

std::vector<Diagnostic> Validate(const SimulinkModelReference&)
{
    return {};
}

std::string ToString(const SimulinkModelReference& config)
{
    std::ostringstream oss;
    oss << "SimulinkModelReference {" << std::endl;
    oss << "  DisabledProps: " << config.DisabledProps << std::endl;
    oss << "  Description: " << config.Description << std::endl;
    oss << "  Components: " << config.Components << std::endl;
    oss << "  UpdateModelReferenceTargets: " << config.UpdateModelReferenceTargets << std::endl;
    oss << "  EnableRefExpFcnMdlSchedulingChecks: " << config.EnableRefExpFcnMdlSchedulingChecks
        << std::endl;
    oss << "  CheckModelReferenceTargetMessage: " << config.CheckModelReferenceTargetMessage
        << std::endl;
    oss << "  EnableParallelModelReferenceBuilds: " << config.EnableParallelModelReferenceBuilds
        << std::endl;
    oss << "  ParallelModelReferenceErrorOnInvalidPool: "
        << config.ParallelModelReferenceErrorOnInvalidPool << std::endl;
    oss << "  ParallelModelReferenceMATLABWorkerInit: "
        << config.ParallelModelReferenceMATLABWorkerInit << std::endl;
    oss << "  ModelReferenceNumInstancesAllowed: " << config.ModelReferenceNumInstancesAllowed
        << std::endl;
    oss << "  PropagateVarSize: " << config.PropagateVarSize << std::endl;
    oss << "  ModelDependencies: " << config.ModelDependencies << std::endl;
    oss << "  ModelReferencePassRootInputsByReference: "
        << config.ModelReferencePassRootInputsByReference << std::endl;
    oss << "  ModelReferenceMinAlgLoopOccurrences: " << config.ModelReferenceMinAlgLoopOccurrences
        << std::endl;
    oss << "  PropagateSignalLabelsOutOfModel: " << config.PropagateSignalLabelsOutOfModel
        << std::endl;
    oss << "  SupportModelReferenceSimTargetCustomCode: "
        << config.SupportModelReferenceSimTargetCustomCode << std::endl;
    oss << "}";

    return oss.str();
}

}; // namespace slxio
