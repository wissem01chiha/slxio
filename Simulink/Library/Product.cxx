#include "Product.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Product::Product() {}

Float32 Product::GetProductValue() const { return ProductValue; }

void Product::SetProductValue(Float32 value) { ProductValue = value; }

Product::~Product() {}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
