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

#include "ABINamespace.h"
#include "APIExport.h"
#include "LibXML2.h"
#include "SimulinkFileBase.h"
#include "Type.h"
#include <vector>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief SimulinkFile is a general low-level representation of
 * a Simulink .slx file’s metadata and contents.
 * Currently, only a single configuration set file is supported.
 * (If a model has multiple configuration sets, more than one XML file
 * will be present.)
 * This class contains only the necessary pointers to Simulink subfiles
 * required to construct the canonical core objects, along with some
 * additional layout or settings information.
 */
class APIEXPORT SimulinkFile final : public SimulinkFileBase {
public:
  SimulinkFile();

  xmlDocPtr getBlockdiagram();
  xmlDocPtr getConfigSetInfo();
  xmlDocPtr getModelDictionary();
  xmlDocPtr getConfigSet(Index & icfg);

  ~SimulinkFile() = default;

private:
  xmlDocPtr blockdiagram;
  xmlDocPtr modelDictionary;
  xmlDocPtr configSetInfo;
  xmlDocPtr bddefaults;
  xmlDocPtr ScheduleEditor;
  xmlDocPtr ScheduleCore;
  xmlDocPtr graphicalInterface;

  std::vector<xmlDocPtr> configSets;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
