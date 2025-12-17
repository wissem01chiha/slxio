#include "Doctest.h"
#include "slxDirectory.h"

class sdxDirectoryTestFixture {
public:
  sdxDirectoryTestFixture() {}
  ~sdxDirectoryTestFixture() {}

protected:
};

TEST_CASE_FIXTURE(sdxDirectoryTestFixture, "Directory Constructor Test") {

  CHECK(1 == 1);
}
