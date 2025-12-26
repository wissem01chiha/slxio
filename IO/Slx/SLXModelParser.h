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
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef SIMUMINKMODELBUILDER_H
#define SIMUMINKMODELBUILDER_H

#include "ABINamespace.h"
#include "SLXParser.h"
#include "SimulinkBlockBuilder.h"
#include "SimulinkFile.h"
#include "SimulinkLineBuilder.h"
#include "SimulinkModel.h"
#include "SimulinkObjectBuilder.h"
#include "SimulinkParameterBuilder.h"
#include "SimulinkPortBuilder.h"

SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief model builder class.
 * This class is responsible for constructing the complete model representation,
 * including Simulink components, Stateflow charts, configuration sets, model
 * libraries (if present), and the data dictionary. It serves as the top-level
 * orchestrator for assembling all model elements from external sources such as
 * XML, JSON, or other supported formats.
 */
class SimulinkModelBuilder : public SLXParser<SimulinkModel> {
public:
  SimulinkModelBuilder();
  SimulinkModelBuilder(SimulinkFile *File);
  SimulinkErrorType build() override;
  std::shared_ptr<SimulinkModel> get() override;

private:
  std::unique_ptr<SimulinkModel> p_;
  std::shared_ptr<SimulinkFile> File_;
};

SLXIO_ABI_NAMESPACE_END

#endif // SIMUMINKMODELBUILDER_H