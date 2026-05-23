// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef PORTLAYOUTDATA_H
#define PORTLAYOUTDATA_H

#include "AbiNamespaceMacro.h"
#include "Color.h"
#include "Logger.h"
#include "PlatformTypes.h"
#include "Point.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief Encapsulates all information required for layouting a port
 * (relative to its parent's canvas).
 */
class PortLayoutData final
{
public:
  PortLayoutData();
  PortLayoutData(Point point, Color color);
  Point GetPosition();
  Float32 GetDirection();
  Color GetColor();

private:
  Logger& l;
  Point position;
  Color color;
  /**
   * @brief The direction in degree (0 to 360). A value of 0 indicates
   * the normal position for a non-rotated block, i.e. an input port
   * that comes from the left resp. an output port that points to the
   * right. Other values are counter-clockwise rotations.
   */
  Float32 direction;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // PORTLAYOUTDATA_H
