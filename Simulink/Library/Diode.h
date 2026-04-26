// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKBLOCKDATA_H
#define SIMULINKBLOCKDATA_H

#include "ABINamespaceMacro.h"
#include "PlatformTypes.h"

SLXIO_ABI_NAMESPACE_BEGIN

class Diode
{

  float32 Ron;
  float32 Lon;
  float32 Vf;
  float32 IC;
  bool UseSnubber;
  float32 Rs;
  float32 Cs;
  bool Measurements;
};

SLXIO_ABI_NAMESPACE_END

#endif // SIMULINKBLOCKDATA_H
