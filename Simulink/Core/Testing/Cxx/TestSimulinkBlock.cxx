#include "Doctest.h"
#include "SimulinkBlock.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

class SimulinkBlockTestFixture {
public:
protected:
};

TEST_CASE_FIXTURE(SimulinkBlockTestFixture, "ConstructorTest") {

  SimulinkBlock *block = new SimulinkBlock(SimulinkBlockType::Type::Constant);
  CHECK(block->getBlockType().isA(SimulinkBlockType::Type::Constant));
}

TEST_CASE_FIXTURE(SimulinkBlockTestFixture, "CopyConstructorTest") {

  SimulinkBlock *pblockPtr =
      new SimulinkBlock(SimulinkBlockType::Type::Constant, "ConstantBlock", 10);
  SimulinkBlock *block = new SimulinkBlock(*pblockPtr);

  // ASSERT_EQ(block->getBlockType(), SimulinkBlockType::Constant);
  // ASSERT_EQ(block->getID(), 10);
}

TEST_CASE_FIXTURE(SimulinkBlockTestFixture, "AddSubBlockTest") {

  SimulinkBlock *parentblockPtr =
      new SimulinkBlock(SimulinkBlockType::Constant, "ConstantBlock", 10);

  std::shared_ptr<SimulinkBlock> childblockPtr =
      std::make_shared<SimulinkBlock>(SimulinkBlockType::Clock, "ClockBlock",
                                      20);

  // ErrorCode status = parentblockPtr->add(childblockPtr);
  // ASSERT_EQ(status, ErrorCode::SLX_OK);
}

TEST_CASE_FIXTURE(SimulinkBlockTestFixture, "RemoveSubBlockTest") {

  SimulinkBlock *parentblockPtr =
      new SimulinkBlock(SimulinkBlockType::Constant, "ConstantBlock", 10);

  std::shared_ptr<SimulinkBlock> childblockPtr =
      std::make_shared<SimulinkBlock>(SimulinkBlockType::Clock, "ClockBlock",
                                      20);

  // ErrorCode addStatus = parentblockPtr->add(childblockPtr);
  // ASSERT_EQ(addStatus, ErrorCode::SLX_OK);

  // ErrorCode RemoveStatus = parentblockPtr->remove(childblockPtr);
  // ASSERT_EQ(RemoveStatus, ErrorCode::SLX_OK);
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END