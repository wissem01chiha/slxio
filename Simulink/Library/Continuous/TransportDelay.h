// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef TRANSPORTDELAY_H
#define TRANSPORTDELAY_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT TransportDelay
  : public IBlockParameters
  , public IBlockProperties
{
public:
  /** Default Constructor */
  TransportDelay();

  /** Default Destructor */
  ~TransportDelay();

  const std::string& GetDelaytime() const;
  void SetDelaytime(const std::string& value);

  const std::string& GetInitialoutput() const;
  void SetInitialoutput(const std::string& value);

  const std::string& GetBuffersize() const;
  void SetBuffersize(const std::string& value);

  const std::string& GetFixedbuffer() const;
  void SetFixedbuffer(const std::string& value);

  const std::string& GetTransdelayfeedthrough() const;
  void SetTransdelayfeedthrough(const std::string& value);

  const std::string& GetPadeorder() const;
  void SetPadeorder(const std::string& value);

private:
  std::string m_Delaytime;

  std::string m_Initialoutput;

  std::string m_Buffersize;

  std::string m_Fixedbuffer;

  std::string m_Transdelayfeedthrough;

  std::string m_Padeorder;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // TRANSPORTDELAY_H
