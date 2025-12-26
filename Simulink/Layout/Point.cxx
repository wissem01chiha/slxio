#include "Point.h"
#include "Logger.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

Point::Point(const std::vector<uint32_t> &vec) {
  if (vec.size() < 4) {
    Logger::getInstance().log(
        Logger::V_ERROR,
        "Point constructor: vector too small to initialize Point!");
    x = y = width = height = 0;
  } else {
    x = vec[0];
    y = vec[1];
    width = vec[2];
    height = vec[3];
  }
}

std::vector<uint32_t> Point::toVector() const { return {x, y, width, height}; }

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END