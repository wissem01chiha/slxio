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
 * @class SimulinkFileBase
 * @brief Base class for all lower-level readers/writers of Simulink file data.
 * Provides a common metadata grouping that describes essential information
 * about a Simulink file, this class is intended to be subclassed by specific
 * file readers/writers that need consistent metadata handling.
 */
class APIEXPORT SimulinkFileBase {
public:
  /// @brief Convert metadata fields to a human-readable string.
  std::string toString() const;

  /// @brief Default destructor.
  ~SimulinkFileBase() = default;

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

  std::string matlabVersion;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKFILEBASE_H
