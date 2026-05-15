#include "PortLayoutData.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

PortLayoutData::PortLayoutData()
  : l(Logger::GetInstance())
{
}

PortLayoutData::PortLayoutData(Point point, Color color)
  : position(point)
  , color(color)
  , l(Logger::GetInstance())
{
}

Point PortLayoutData::GetPosition()
{
  return position;
}

Float32 PortLayoutData::GetDirection()
{
  return 0.0;
}

Color PortLayoutData::GetColor()
{
  return color;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
