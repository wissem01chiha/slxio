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
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
// implied. See the License for the specific language governing
// permissions and limitations under the License.

#ifndef SIMULINKELEMENTTYPE_H
#define SIMULINKELEMENTTYPE_H

#include "ABINamespace.h"
#include "APIExport.h"
#include "Type.h"
#include <string>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief
 */
class APIEXPORT SimulinkElementType
{
public:
  enum Type
  {
    Base = 0,
    Object = 1,
    Block = 2,
    Port = 3,
    Line = 4,
    Model = 5,
    Annotation = 6,
    Array = 7,
    Parameter = 8,
    ConfigSet = 9,
    Chart = 10,
    Unkown = 11
  };
  SimulinkElementType() = default;
  bool isA(const SimulinkElementType& typeObj);
  bool isA(const SimulinkElementType::Type& type);
  friend bool operator==(
    const SimulinkElementType& lhs, const SimulinkElementType& rhs);
  SimulinkElementType(SimulinkElementType::Type typeName);
  static SimulinkElementType& getInstance();
  static SimulinkElementType::Type toType(const char* typeName);
  static const char* toString(SimulinkElementType::Type type);
  std::string toString();

private:
  SimulinkElementType::Type type_;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKELEMENTTYPE_H