#ifndef PORTLAYOUTDATA_H
#define PORTLAYOUTDATA_H

#include "Color.h"
#include "Point.h"
#include "SlxioConfig.h"
#include "slxABINamespace.h"
#include "slxType.h"

SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief Encapsulates all information required for layouting a port (relative
 * to its parent's canvas).
 */
class PortLayoutData {
public:
  PortLayoutData();
  PortLayoutData(Point point, Color color);
  Point getPosition();
  float32 getDirection();
  Color getColor();

private:
  Point position;
  Color color;
  /**
   * @brief The direction in degree (0 to 360). A value of 0 indicates the
   * normal position for a non-rotated block, i.e. an input port that comes from
   * the left resp. an output port that points to the right. Other values are
   * counter-clockwise rotations.
   */
  float32 direction;
};

SLXIO_ABI_NAMESPACE_END

#endif // PORTLAYOUTDATA_H