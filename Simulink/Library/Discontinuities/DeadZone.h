// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef DEADZONE_H
#define DEADZONE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT DeadZone
  : public IBlockParameters
  , public IBlockProperties
{
public:
  /** Default Constructor */
  DeadZone();

  /** Default Destructor */
  ~DeadZone();

  const std::string& GetLowervalue() const;
  void SetLowervalue(const std::string& value);

  const std::string& GetUppervalue() const;
  void SetUppervalue(const std::string& value);

  const std::string& GetSaturateonintegeroverflow() const;
  void SetSaturateonintegeroverflow(const std::string& value);

  const std::string& GetLinearizeasgain() const;
  void SetLinearizeasgain(const std::string& value);

  const std::string& GetZerocross() const;
  void SetZerocross(const std::string& value);

  const std::string& GetSampletime() const;
  void SetSampletime(const std::string& value);

private:
  std::string m_Lowervalue;

  std::string m_Uppervalue;

  std::string m_Saturateonintegeroverflow;

  std::string m_Linearizeasgain;

  std::string m_Zerocross;

  std::string m_Sampletime;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // DEADZONE_H
