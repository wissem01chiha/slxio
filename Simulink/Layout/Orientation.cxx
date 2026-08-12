#include "Orientation.h"
#include <cstring>

SLXIO_ABI_NAMESPACE_BEGIN

float32 getDirection(Orientation Orientation)
{

  switch (Orientation) {
    case Orientation::RIGHT:
      return 0;
    case Orientation::DOWN:
      return 270;
    case Orientation::LEFT:
      return 180;
    case Orientation::UP:
      return 90;
    default:
      throw std::logic_error("Unknown Orientation value");
  }
}

bool isRotated(Orientation Orientation)
{
  return Orientation == Orientation::DOWN || Orientation == Orientation::UP;
}

bool isLeftOrUp(Orientation Orientation)
{
  return Orientation == Orientation::LEFT || Orientation == Orientation::UP;
}

bool isLeftOrDown(Orientation Orientation)
{
  return Orientation == Orientation::LEFT || Orientation == Orientation::DOWN;
}

Orientation getOpposite(Orientation Orientation)
{

  switch (Orientation) {
    case Orientation::RIGHT:
      return Orientation::LEFT;
    case Orientation::LEFT:
      return Orientation::RIGHT;
    case Orientation::UP:
      return Orientation::DOWN;
    case Orientation::DOWN:
      return Orientation::UP;
    default:
      throw std::logic_error("Unknown Orientation value");
  }
}

Orientation fromRotationValue(const char* str)
{
  if (std::strcmp(str, "0") == 0)
    return Orientation::RIGHT;
  if (std::strcmp(str, "90") == 0)
    return Orientation::DOWN;
  if (std::strcmp(str, "180") == 0)
    return Orientation::LEFT;
  if (std::strcmp(str, "270") == 0)
    return Orientation::UP;

  return Orientation::RIGHT;
}

SLXIO_ABI_NAMESPACE_END
