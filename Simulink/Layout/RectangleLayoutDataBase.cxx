#include "RectangleLayoutDataBase.h"

SLXIO_ABI_NAMESPACE_BEGIN

RectangleTypeLayoutDataBase::RectangleTypeLayoutDataBase() {}

RectangleTypeLayoutDataBase::RectangleTypeLayoutDataBase(const RectangleType& position,
  const Color& foregroundColor, const Color& backgroundColor)
{

  position_ = position;
  foregroundColor_ = foregroundColor;
  backgroundColor_ = backgroundColor;
}

SLXIO_ABI_NAMESPACE_END
