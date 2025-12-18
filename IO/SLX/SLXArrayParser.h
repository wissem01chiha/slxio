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

#ifndef SLXARRAYPARSER_H
#define SLXARRAYPARSER_H

#include "Parser.h"
#include "SimulinkArray.h"
#include "slxABINamespace.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief Builder for Simulink Array
 * @code{.xml}
 * <Array PropName="logAsSpecifiedByModelsSSIDs_" Type="Cell" Dimension="1*1">
 *   <Cell Class="double">[]</Cell>
 * </Array>
 * @endcode
 */
class SLXArrayParser : public Parser {
public:
  SLXArrayParser();

private:
  std::shared_ptr<SimulinkArray> ptr_;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SLXARRAYPARSER_H