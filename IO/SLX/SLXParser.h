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

#ifndef SLXPARSER_H
#define SLXPARSER_H

#include "LibXML2.h"
#include "Parser.h"
#include "ABINamespace.h"
#include <memory>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief base class for all simulink elments parsers.
 */
template <typename T> class SLXParser : public Parser {
public:
  enum ErrorCode { Ok, SLX_ERR_NULL_PTR, SLX_ERR_INVALID_XML };
  ~SLXParser() override = default;
  Parser::ErrorCode parseNextChunk() override;

protected:
  virtual ErrorCode parse(xmlNodePtr node);
  std::shared_ptr<T> get();
  /// @brief fetch next XML node
  xmlNodePtr getNextNode();
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SLXPARSER_H
