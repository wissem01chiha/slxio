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

#ifndef SIMULINKPARAMETERPARSER_H
#define SIMULINKPARAMETERPARSER_H

#include "LibXML2.h"
#include "Logger.h"
#include "ABINamespace.h"
#include "APIExport.h"
#include "SimulinkDataType.h"
#include "SimulinkParserBase.h"
#include "SimulinkParameter.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief Parser for SimulinkParameter class
 * @example Definition of multiple parameter in slx file
 *  @code{.xml}
 * <P Name="LibraryLinkDisplay">disabled</P>
 * <P Name="ExtModeTrigLevel">0</P>
 * <P Name="Components" Class="double">[]</P>
 * <P Name="Extents" Class="double">[887.0, 452.0]</P>
 * <P Name="Visible" Class="logical">1</P>
 * <P Name="OverrideMode" Class="uint32">0U</P>
 * @endcode
 */
class APIEXPORT SimulinkParameterParser final
    : public SimulinkParserBase <xmlNodePtr, SimulinkParameter> {
public:
  SimulinkParameterParser();
  /// @note Check if the related node name attribute is empty.
  /// If so, it returns an error since a parameter cannot be built without a
  /// name.
  ErrorCode setInputData(const xmlNodePtr data) override;
  std::shared_ptr<SimulinkParameter> getDataObject() const override;
  ErrorCode parse() override;

  ~SimulinkParameterParser() =default;

private:
  /// @brief maps an explicit string data type to SimulinkDataType
  SimulinkDataType getDataType(const char *paramClassStr, Logger &l);

  std::shared_ptr<SimulinkParameter> ptr_;
  xmlNodePtr dataObject;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKPARAMETERPARSER_H