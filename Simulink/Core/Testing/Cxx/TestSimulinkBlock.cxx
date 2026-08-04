#include "SimulinkBlock.h"
#include "slxDoctest.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SimulinkBlockTestFixture
{
public:
protected:
};

TEST_CASE_FIXTURE(SimulinkBlockTestFixture, "ConstructorTest")
{

  SimulinkBlock* block = new SimulinkBlock(SimulinkBlockType::Type::Constant);
  CHECK(block->GetBlockType().isA(SimulinkBlockType::Type::Constant));
  CHECK(block->GetType().isA(SimulinkElementType::Type::Block));
}

TEST_CASE_FIXTURE(SimulinkBlockTestFixture, "CopyConstructorTest")
{

  SimulinkBlock* pblockPtr =
    new SimulinkBlock(SimulinkBlockType::Type::Constant, "ConstantBlock", 10);
  SimulinkBlock* block = new SimulinkBlock(*pblockPtr);

  CHECK(block->GetId() == 10);
}

TEST_CASE_FIXTURE(SimulinkBlockTestFixture, "AddSubBlockTest")
{

  SimulinkBlock* parentblockPtr =
    new SimulinkBlock(SimulinkBlockType::Constant, "ConstantBlock", 10);

  std::shared_ptr<SimulinkBlock> childblockPtr =
    std::make_shared<SimulinkBlock>(SimulinkBlockType::Type::Clock, "ClockBlock", 20);

  SResult status = parentblockPtr->AddElement(childblockPtr);
  CHECK(status == E_OK);
}

TEST_CASE_FIXTURE(SimulinkBlockTestFixture, "RemoveSubBlockTest")
{

  SimulinkBlock* parentblockPtr =
    new SimulinkBlock(SimulinkBlockType::Constant, "ConstantBlock", 10);

  std::shared_ptr<SimulinkBlock> childblockPtr =
    std::make_shared<SimulinkBlock>(SimulinkBlockType::Clock, "ClockBlock", 20);

  SResult addStatus = parentblockPtr->AddElement(childblockPtr);
  CHECK(addStatus == E_OK);

  SResult RemoveStatus = parentblockPtr->RemoveElement(childblockPtr);
  CHECK(RemoveStatus == E_OK);
}

SLXIO_ABI_NAMESPACE_END
};
