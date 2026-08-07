#include "RelationalOperator.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

RelationalOperator::RelationalOperator() {}

Float32 RelationalOperator::GetOperatorCode() const { return OperatorCode; }

void RelationalOperator::SetOperatorCode(Float32 value) {
  OperatorCode = value;
}

RelationalOperator::~RelationalOperator() {}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
