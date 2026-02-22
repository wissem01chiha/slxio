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

#ifndef SIMULINKLINEPARSER_H
#define SIMULINKLINEPARSER_H

#include "ABINamespace.h"
#include "APIExport.h"
#include "LibXML2.h"
#include "SimulinkLine.h"
#include "SimulinkParserBase.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief This class is responsible for building the lines between Simulink
 * blocks as defined in the SLX file.
 * @code{.xml}
 * <Line>
    <P Name="ZOrder">116</P>
    <P Name="Src">35#out:1</P>
    <P Name="Points">[0, 0]</P>
    <P Name="Dst">54#in:1</P>
  </Line>
 * @endcode
 * 31#out:1: Block ID 31, output port 1
 * 36#in:1: Block ID 36, input port 1
 */
class APIEXPORT SimulinkLineParser final
    : public SimulinkParserBase<xmlNodePtr, SimulinkLine> {
public:
  SimulinkLineParser();

  ErrorCode setInputData(const xmlNodePtr data) override;
  std::shared_ptr<SimulinkLine> getOutputData() const override;
  ErrorCode parse() override;

  ~SimulinkLineParser() = default;

private:
  std::shared_ptr<SimulinkLine> ptr_;
  xmlNodePtr dataObject;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKLINEPARSER_H