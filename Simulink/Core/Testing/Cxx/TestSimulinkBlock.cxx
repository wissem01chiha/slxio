#include "SimulinkBlock.h"

class SimulinkBlockTestFixture : public ::testing::Test {
protected:
  void SetUp() override {
    slog_init("logfile", SLOG_FLAGS_ALL, 0);
    slog_disable(SLOG_TRACE);
  }

  void TearDown() override { slog_destroy(); }
};

TEST_F(SimulinkBlockTestFixture, ConstructorTest) {

  SimulinkBlock *block = new SimulinkBlock(SimulinkBlockType::Constant);
  ASSERT_EQ(block->getBlockType(), SimulinkBlockType::Constant);
}

TEST_F(SimulinkBlockTestFixture, CopyConstructorTest) {

  SimulinkBlock *pblockPtr =
      new SimulinkBlock(SimulinkBlockType::Constant, "ConstantBlock", 10);
  SimulinkBlock *block = new SimulinkBlock(*pblockPtr);

  ASSERT_EQ(block->getBlockType(), SimulinkBlockType::Constant);
  ASSERT_EQ(block->getID(), 10);
}

TEST_F(SimulinkBlockTestFixture, AddSubBlockTest) {

  SimulinkBlock *parentblockPtr =
      new SimulinkBlock(SimulinkBlockType::Constant, "ConstantBlock", 10);

  std::shared_ptr<SimulinkBlock> childblockPtr =
      std::make_shared<SimulinkBlock>(SimulinkBlockType::Clock, "ClockBlock",
                                      20);

  SimulinkErrorType status = parentblockPtr->add(childblockPtr);
  ASSERT_EQ(status, SimulinkErrorType::SLX_OK);
}

TEST_F(SimulinkBlockTestFixture, RemoveSubBlockTest) {

  SimulinkBlock *parentblockPtr =
      new SimulinkBlock(SimulinkBlockType::Constant, "ConstantBlock", 10);

  std::shared_ptr<SimulinkBlock> childblockPtr =
      std::make_shared<SimulinkBlock>(SimulinkBlockType::Clock, "ClockBlock",
                                      20);

  SimulinkErrorType addStatus = parentblockPtr->add(childblockPtr);
  ASSERT_EQ(addStatus, SimulinkErrorType::SLX_OK);

  SimulinkErrorType RemoveStatus = parentblockPtr->remove(childblockPtr);
  ASSERT_EQ(RemoveStatus, SimulinkErrorType::SLX_OK);
}