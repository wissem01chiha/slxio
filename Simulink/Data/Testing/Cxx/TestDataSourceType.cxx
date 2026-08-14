#include "DataSourceType.h"
#include "Doctest.h"

using namespace slxio;
SLXIO_ABI_NAMESPACE_BEGIN

TEST_CASE("DataSourceType constructor stores type")
{
    DataSourceType ds(DataSourceType::Type::MatFile);
    CHECK(ds.GetType() == DataSourceType::Type::MatFile);
}

TEST_CASE("FromString returns correct enum")
{
    CHECK(DataSourceType::FromString("ModelFile") ==
          DataSourceType::Type::ModelFile);
    CHECK(DataSourceType::FromString("MatFile") ==
          DataSourceType::Type::MatFile);
    CHECK(DataSourceType::FromString("MatlabCode") ==
          DataSourceType::Type::MatlabCode);
    CHECK(DataSourceType::FromString("MatlabFile") ==
          DataSourceType::Type::MatlabFile);
}

TEST_CASE("FromString returns default for invalid input")
{
    CHECK(DataSourceType::FromString("Unknown") ==
          DataSourceType::Type::ModelFile);
    CHECK(DataSourceType::FromString("") == DataSourceType::Type::ModelFile);
}

TEST_CASE("ToString returns correct string")
{
    CHECK(DataSourceType::ToString(DataSourceType::Type::ModelFile) ==
          "ModelFile");
    CHECK(DataSourceType::ToString(DataSourceType::Type::MatFile) == "MatFile");
    CHECK(DataSourceType::ToString(DataSourceType::Type::MatlabCode) ==
          "MatlabCode");
    CHECK(DataSourceType::ToString(DataSourceType::Type::MatlabFile) ==
          "MatlabFile");
}

SLXIO_ABI_NAMESPACE_END