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

#ifndef SIMULINKPARAMETER_H
#define SIMULINKPARAMETER_H

#include "CoderInfo.h"
#include "APIExport.h"
#include "ErrorCode.h"
#include "ABINamespace.h"
#include "Type.h"
#include <string>
#include <vector>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

class SimulinkParameter {
public:
  enum ValueType { Int, Double, String, Vector, Char };

  SimulinkParameter() = default;

  SimulinkParameter(uint32 val);
  SimulinkParameter(Float val);
  SimulinkParameter(const std::string &val);
  SimulinkParameter(char *val);
  SimulinkParameter(const std::vector<Float> &val);

  Float getValueAsFloat();
  uint32 getValueAsInt();
  const char *getValueAsChar();
  std::string getValueAsString();
  const std::vector<Float> getValueAsVector();
  CoderInfo getCoderInfo();

  std::vector<uint16> getDimensions();
  std::string toString();
  static const char *toString(ValueType vtype);
  const char *getName();
  ErrorCode setName(const char *name);

private:
  const char *Name;
  ValueType DataType;

  uint32 intValue;
  Float doubleValue;
  char *charValue;
  std::vector<Float> vectorValue;
  std::string stringValue;

  const char *Unit;
  const char *Description;
  const char *Complexity;
  Float Min;
  Float Max;
  std::vector<uint16> Dimensions;
  CoderInfo coder;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // PARAMETER_H