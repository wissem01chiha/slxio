#include "Point.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Point::Point(const std::vector<UInt32>& vec)
  : l(Logger::GetInstance())
{
  if (vec.size() < 4) {
    // l.Log(Logger::V_ERROR,
    //  "Point constructor: vector too small to initialize Point!");
    x = y = width = height = 0;
  } else {
    x = vec[0];
    y = vec[1];
    width = vec[2];
    height = vec[3];
  }
}

std::vector<UInt32> Point::toVector() const
{
  return { x, y, width, height };
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
