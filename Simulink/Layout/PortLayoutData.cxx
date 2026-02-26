#include "PortLayoutData.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

PortLayoutData::PortLayoutData()
  : l(Logger::getInstance())
{
}

PortLayoutData::PortLayoutData(Point point, Color color)
  : position(point)
  , color(color)
  , l(Logger::getInstance())
{
}

Point PortLayoutData::getPosition()
{
  return position;
}

Float PortLayoutData::getDirection()
{
  return 0.0;
}

Color PortLayoutData::getColor()
{
  return color;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END