#include "doctest.h"
#include "SimulinkBlock.h"

namespace slxio
{
    TEST_CASE("Simulink block default constructor test")
    {
        SimulinkBlock* block = new SimulinkBlock();
        CHECK(block != nullptr);
        CHECK(block->GetType() == SimulinkBlockType::NotSupported);
        delete block;
    }

    TEST_CASE("Simulink block copy constructor test")
    {
        SimulinkBlock* pblockPtr = new SimulinkBlock();
        SimulinkBlock* block = new SimulinkBlock(*pblockPtr);
        CHECK(block != nullptr);
        delete block;
        delete pblockPtr;
    }

    TEST_CASE("Add subblock to block test")
    {
        SimulinkBlock* parentblockPtr = new SimulinkBlock(SimulinkBlockType::Accumulator);
        SimulinkBlock childblockPtr = SimulinkBlock(SimulinkBlockType::Acos);

        error_code status = parentblockPtr->AddSubBlock(childblockPtr);
        CHECK(status == error_code::Ok);
        CHECK(parentblockPtr->HasSubBlocks());
        delete parentblockPtr;
    }

    // TEST_CASE("RemoveSubBlockTest")
    // {
    //     SimulinkBlock* parentblockPtr = new SimulinkBlock(SimulinkBlockType::Constant);

    //     std::shared_ptr<SimulinkBlock> childblockPtr =
    //         std::make_shared<SimulinkBlock>(SimulinkBlockType::Clock, "ClockBlock", 20);

    //     HError addStatus = parentblockPtr->AddElement(childblockPtr);
    //     CHECK(addStatus == E_OK);

    //     HError RemoveStatus = parentblockPtr->RemoveElement(childblockPtr);
    //     CHECK(RemoveStatus == E_OK);
    // }

}; // namespace slxio
