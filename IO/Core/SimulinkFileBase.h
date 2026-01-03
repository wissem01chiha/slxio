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

#ifndef SIMULINKFILEBASE_H
#define SIMULINKFILEBASE_H

#include "ABINamespace.h"
#include "APIExport.h"
#include <string>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief SimulinkFileBase is an general high level representation of
 * a Simulink  file data information and file oegnisation, 
 * for each IO submodule, they should implenat  their clocal mappig
 * rules based on this abstarct inetrface under the name "SimulinkFile.h" 
 * this class is a entry point to provide abstraction layer between canocanicl
 * Simulink data struct and their location in definction in the extrcated archive
 * @example Simulink R2019a stores configsets in fils named :  
 * @note for now we support configSet.xml, configSet0.xml, ...
 * given a SimulinkConfigSet typename, this class return list of files containg
 * configs, repsenation type (JSON for reeadering from exporter ouput), XML(
 * REALTED XML methda data ),...this 
 * class acts like "XSD SCHEMA VALIDATAION BUT FOR SIMULINK FILE hairachy tree"
 * only one configuration set file (for model attached multiple configs
 * more then 1 xml file is present)
 */
class APIEXPORT SimulinkFileBase {
public:
  ~SimulinkFileBase() = default;

  std::string toString() const;

protected:
  SimulinkFileBase() = default;

  std::string category; 
  std::string creator; 
  std::string lastModifiedBy; 
  std::string revision; 
  std::string version;

  std::string contentType; 
  std::string contentTypeFriendlyName;  
  std::string matlabRelease;

  std::string matlabVersion; ///< eg "9.6.0.1063848"
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKFILEBASE_H
