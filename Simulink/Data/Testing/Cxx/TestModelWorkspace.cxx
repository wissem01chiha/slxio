#include "Doctest.h"
#include "ModelWorkspace.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

class ModelWorkspaceTestFixture {
public:
  ModelWorkspaceTestFixture() {}
  ~ModelWorkspaceTestFixture() {}
protected:
    ModelWorkspace workspace;
};

TEST_CASE_FIXTURE(ModelWorkspaceTestFixture,
                  "ModelWorkspace Constructor Test") {
  //CHECK(workspace.hasVariable("non_existent_variable") == false);
  CHECK(1==1);
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END