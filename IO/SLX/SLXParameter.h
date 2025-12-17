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

#ifndef SLXPARAMETER_H
#define SLXPARAMETER_H

#include "SLXConstant.h"
#include "SLXElementBase.h"
#include "slxABINamespace.h"
#include "slxType.h"
#include <string>
#include <vector>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief Base structure for parsing a single XML element and storing its data.
 * This structure facilitates propagation of parsed data to other parsers or
 * processes. It supports reading from and writing to a custom structure.
 * Specifically, this class enables reading from an XML element or writing one.
 * This is a low-level API not intended for direct use. It was refactored from
 * the ParameterizedElement class and now includes support for XSD and dynamic
 * parsing.
 * @note This class does not support handling multiple SLX elements.
 *       It only support Named Paramters ie of type {'ParameterName', 'Value'}
 * @todo Support for parsing the "Class" attribute is incomplete.
 *       Implementing this will allow conversion to a numeric type for storage
 * or computation.
 * @warning This class is a low level API should not expose to user !
 * @example An SLX Parameter encoding is as given
 *
 */
class SLXParameter : public SLXElementBase {
public:
  enum ErrorCode { Ok = 0, InvalidArgument };
  SLXParameter() = default;
  ~SLXParameter() = default;
  SLXParameter(const SLXParameter &other);

  SLXParameter(std::string name, std::string value);
  SLXParameter(std::string name, std::string value, std::string className);

  std::string getClass() const;
  std::string getName() const;
  std::string getValue() const;
  ErrorCode setValue(std::string value);

  std::string toString() const;

  template <typename T> T static_cast_value();
  template <typename T> std::vector<T> static_cast_vector();

private:
  std::vector<std::string> split(const std::string &line,
                                 const std::string &del);
  std::string class_;
  std::string name_;
  std::string value_;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SLXPARAMETER_H