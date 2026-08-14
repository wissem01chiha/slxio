// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef VARIABLETRANSPORTDELAY_H
#define VARIABLETRANSPORTDELAY_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT VariableTransportDelay
  : public IBlockParameters
  , public IBlockProperties
{
public:
  /** Default Constructor */
  VariableTransportDelay();

  /** Default Destructor */
  ~VariableTransportDelay();

  const std::string& GetVariabledelaytype() const;
  void SetVariabledelaytype(const std::string& value);

  const std::string& GetMaximumdelay() const;
  void SetMaximumdelay(const std::string& value);

  const std::string& GetInitialoutput() const;
  void SetInitialoutput(const std::string& value);

  const std::string& GetMaximumpoints() const;
  void SetMaximumpoints(const std::string& value);

  const std::string& GetFixedbuffer() const;
  void SetFixedbuffer(const std::string& value);

  const std::string& GetZerodelay() const;
  void SetZerodelay(const std::string& value);

  const std::string& GetTransdelayfeedthrough() const;
  void SetTransdelayfeedthrough(const std::string& value);

  const std::string& GetPadeorder() const;
  void SetPadeorder(const std::string& value);

  const std::string& GetAbsolutetolerance() const;
  void SetAbsolutetolerance(const std::string& value);

  const std::string& GetContinuousstateattributes() const;
  void SetContinuousstateattributes(const std::string& value);

private:
  std::string m_Variabledelaytype;

  std::string m_Maximumdelay;

  std::string m_Initialoutput;

  std::string m_Maximumpoints;

  std::string m_Fixedbuffer;

  std::string m_Zerodelay;

  std::string m_Transdelayfeedthrough;

  std::string m_Padeorder;

  std::string m_Absolutetolerance;

  std::string m_Continuousstateattributes;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // VARIABLETRANSPORTDELAY_H
