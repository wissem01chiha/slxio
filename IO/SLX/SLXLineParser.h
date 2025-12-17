// Copyright 2024-2026 Wissem Chiha
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

#ifndef SLXLINEPARSER_H
#define SLXLINEPARSER_H

#include "slxABINamespace.h"
#include "SLXParameterParser.h"
#include "SLXParser.h"
#include "SimulinkLine.h"

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
class SimulinkLineBuilder : public SLXParser<SimulinkLine> {
public:
  SimulinkLineBuilder();
  SimulinkErrorType build(xmlNodePtr node) override;
  std::shared_ptr<SimulinkLine> get() override;

private:
  std::shared_ptr<SimulinkLine> p_;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SLXLINEPARSER_H