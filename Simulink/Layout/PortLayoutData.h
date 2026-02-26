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
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
// implied. See the License for the specific language governing
// permissions and limitations under the License.

#ifndef PORTLAYOUTDATA_H
#define PORTLAYOUTDATA_H

#include "ABINamespace.h"
#include "Color.h"
#include "Logger.h"
#include "Point.h"
#include "Type.h"

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
  Point getPosition();
  Float getDirection();
  Color getColor();

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
  Float direction;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // PORTLAYOUTDATA_H