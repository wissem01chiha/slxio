#include "PortLayoutData.h"

SLXIO_ABI_NAMESPACE_BEGIN

PortLayoutData::PortLayoutData() {}

PortLayoutData::PortLayoutData(Point point, Color color) {
  this->color = color;
  this->position = point;
}

Point PortLayoutData::getPosition() { return Point(); }

float32 PortLayoutData::getDirection() { return 0.0; }

SLXIO_ABI_NAMESPACE_END