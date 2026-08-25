#include "Doctest.h"
#include "SimulinkBlockCategory.h"

using namespace slxio; // NOSONAR

SLXIO_ABI_NAMESPACE_BEGIN

TEST_CASE("SimulinkBlockCategory default constructor")
{
    SimulinkBlockCategory cat;
    CHECK(!cat.GetAllCategories().empty());
}

TEST_CASE("SimulinkBlockCategory constructor DefaultCategory")
{
    SimulinkBlockCategory cat(
        SimulinkBlockCategory::DefaultCategory::MathOperations);
    auto categories = cat.GetAllCategories();
    CHECK_FALSE(categories.empty());
    CHECK(categories[0] == "MathOperations");
}

SLXIO_ABI_NAMESPACE_END