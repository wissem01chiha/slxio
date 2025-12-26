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

#ifndef SLXPARAMETERPARSER_H
#define SLXPARAMETERPARSER_H

#include "ABINamespace.h"
#include "LibXML2.h"
#include "Parser.h"
#include "SimulinkParameter.h"
#include <memory>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief Builder for SimulinkParameter class
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
class SLXParameterParser : public Parser {
public:
  SLXParameterParser();

  Parser::ErrorCode setInputData(xmlNodePtr data);
  Parser::ErrorCode parse() override;

  std::string toString() override;
  std::shared_ptr<SimulinkParameter> getData();

  ~SLXParameterParser();

private:
  std::shared_ptr<SimulinkParameter> ptr_;
  xmlNodePtr input_;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SLXPARAMETERPARSER_H