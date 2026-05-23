// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "PlatformTypes.h"
#include <string>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Delay final
{
public:
  /** Default Constructor */
  Delay();

  /** Get the delay time */
  float GetDelayTime() const;

  /** Set the delay time */
  void SetDelayTime(float delayTime);

  /** Default Destructor */
  ~Delay();

private:
  float DelayTime;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
