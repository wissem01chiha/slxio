#include "Point.h"
#include "SyslinkLogger.h"

SLXIO_ABI_NAMESPACE_BEGIN

Point::Point(const std::vector<uint32_t> &vec) {
  if (vec.size() < 4) {
    slog_error("Point constructor: vector too small to initialize Point!");
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