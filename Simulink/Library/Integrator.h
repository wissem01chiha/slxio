// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef INTEGRATOR_H
#define INTEGRATOR_H

#include "AbiNamespaceMacro.h"
#include "PlatformTypes.h"
#include "ApiExportMacro.h"
#include <string>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Integrator final 
{
public:
  /** Default Constructor */
  Integrator();

  /** Get the integrator value */
  float GetValue() const;

  /** Set the integrator value */
  void SetValue(float value);

  /** Default Destructor */
  ~Integrator();

private:
  float IntegratorValue;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // INTEGRATOR_H
