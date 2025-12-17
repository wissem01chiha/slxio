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

#ifndef SLXCONFIGSETPARSER_H
#define SLXCONFIGSETPARSER_H

#include "slxABINamespace.h"
#include "LibXML2.h"
#include "Parser.h"
#include "SimulinkConfigSet.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/** @brief Main Model Configuration Set builder class */
class SLXConfigSetParser : public Parser {
public:
  SLXConfigSetParser();
  SLXParser::ErrorCode parse(xmlNodePtr nodePtr) override;
  std::shared_ptr<SimulinkConfigSet> getOuput();

private:
  std::shared_ptr<SimulinkConfigSet> ptr_;
  xmlNodePtr input_;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SLXCONFIGSETPARSER_H