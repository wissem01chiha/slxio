#include "doctest.h"
#include "MDLSection.h"

namespace slxio {

TEST_CASE("MDLSection default constructor test"){
    auto section = std::make_shared<MDLSection>();
    CHECK_NE(section,nullptr);
}
}; // namespace slxio