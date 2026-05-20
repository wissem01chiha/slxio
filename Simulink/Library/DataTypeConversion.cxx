#include "DataTypeConversion.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

DataTypeConversion::DataTypeConversion() {}

Float32 DataTypeConversion::GetConversionCode() const
{
  return ConversionCode;
}

void DataTypeConversion::SetConversionCode(Float32 value)
{
  ConversionCode = value;
}

DataTypeConversion::~DataTypeConversion()
{
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
