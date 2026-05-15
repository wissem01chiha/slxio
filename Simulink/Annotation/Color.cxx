#include "Color.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

std::vector<UInt32> Color::toVector() const
{
  return { r, g, b, a };
}
Color::Color()
  : r(0)
  , g(0)
  , b(0)
  , a(255)
{
}
Color::Color(UInt32 red, UInt32 green, UInt32 blue, UInt32 alpha)
  : r(red)
  , g(green)
  , b(blue)
  , a(alpha)
{
}
bool Color::operator==(const Color& other) const
{
  return (r == other.r) && (g == other.g) && (b == other.b) && (a == other.a);
}
bool Color::operator!=(const Color& other) const
{
  return !(*this == other);
}
Color Color::fromVector(const std::vector<UInt32>& vec)
{
  if (vec.size() < 4)
  {
    return Color(vec.size() > 0 ? vec[0] : 0, vec.size() > 1 ? vec[1] : 0,
      vec.size() > 2 ? vec[2] : 0, vec.size() > 3 ? vec[3] : 255);
  }
  return Color(vec[0], vec[1], vec[2], vec[3]);
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
