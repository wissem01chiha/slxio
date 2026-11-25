#include "DataSourceType.h"
#include "doctest.h"

namespace slxio
{

    TEST_CASE("Data source from string test")
    {
        CHECK(FromString("ModelFile") == DataSourceType::ModelFile);
        CHECK(FromString("MatFile") == DataSourceType::MatFile);
        CHECK(FromString("MatlabCode") == DataSourceType::MatlabCode);
        CHECK(FromString("MatlabFile") == DataSourceType::MatlabFile);
    }

    TEST_CASE("Data source from string default test")
    {
        CHECK(FromString("Unknown") == DataSourceType::ModelFile);
        CHECK(FromString("") == DataSourceType::ModelFile);
    }

    TEST_CASE("Data source to string test")
    {
        CHECK(ToString(DataSourceType::ModelFile) == "ModelFile");
        CHECK(ToString(DataSourceType::MatFile) == "MatFile");
        CHECK(ToString(DataSourceType::MatlabCode) == "MatlabCode");
        CHECK(ToString(DataSourceType::MatlabFile) == "MatlabFile");
    }

}; // namespace slxio