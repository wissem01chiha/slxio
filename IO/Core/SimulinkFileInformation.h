// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKFILEINFORMATION_H
#define SIMULINKFILEINFORMATION_H

#include "ABINamespaceMacro.h"
#include "DataModelPCH.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class SimulinkFileInformation
 * @brief Immutable metadata about a Simulink model file.
 * This class provides read-only access to basic file information
 * such as name, extension, size, version, and creator details.
 * It is constructed by the parser and cannot be modified by users.
 */
class SimulinkFileInformation
{
public:
  SimulinkFileInformation();

  const std::string& GetExtension() const { return extension; }
  const std::string& GetName() const { return name; }
  UInt16 GetSize() const { return size; }
  const std::string& GetCategory() const { return category; }
  const std::string& GetCreator() const { return creator; }
  const std::string& GetLastModifiedBy() const { return lastModifiedBy; }
  const std::string& GetRevision() const { return revision; }
  const std::string& GetVersion() const { return version; }
  const std::string& GetContentType() const { return contentType; }
  const std::string& GetContentTypeFriendlyName() const
  {
    return contentTypeFriendlyName;
  }
  const std::string& GetMatlabRelease() const { return matlabRelease; }
  const std::string& GetMatlabVersion() const { return matlabVersion; }

private:
  const std::string extension;
  const std::string name;
  const UInt16 size;

  const std::string category;
  const std::string creator;
  const std::string lastModifiedBy;
  const std::string revision;
  const std::string version;
  const std::string contentType;
  const std::string contentTypeFriendlyName;
  const std::string matlabRelease;
  const std::string matlabVersion;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // SIMULINKFILEINFORMATION_H
