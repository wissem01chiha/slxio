#include "TransferFcn.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

TransferFcn::TransferFcn() {}

Float32 TransferFcn::GetNumerator() const
{
  return Numerator;
}

void TransferFcn::SetNumerator(Float32 value)
{
  Numerator = value;
}

TransferFcn::~TransferFcn() {}

SLXIO_ABI_NAMESPACE_END
};
