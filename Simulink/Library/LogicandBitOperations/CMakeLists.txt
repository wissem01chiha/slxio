set(LogicandBitOperations_SRCS
    ${CMAKE_CURRENT_SOURCE_DIR}/BitClear.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/BitSet.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/BitToIntegerConverter.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/BitwiseOperator.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/CombinatorialLogic.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/CompareToConstant.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/CompareToZero.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/DetectChange.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/DetectDecrease.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/DetectFallNegative.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/DetectFallNonpositive.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/DetectIncrease.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/DetectRiseNonnegative.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/DetectRisePositive.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/ExtractBits.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/FloatExtractBits.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/IntegerToBitConverter.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/IntervalTest.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/IntervalTestDynamic.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/LogicalOperator.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/RelationalOperator.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/ShiftArithmetic.cxx
)

set(LogicandBitOperations_HDRS
    ${CMAKE_CURRENT_SOURCE_DIR}/BitClear.h
    ${CMAKE_CURRENT_SOURCE_DIR}/BitSet.h
    ${CMAKE_CURRENT_SOURCE_DIR}/BitToIntegerConverter.h
    ${CMAKE_CURRENT_SOURCE_DIR}/BitwiseOperator.h
    ${CMAKE_CURRENT_SOURCE_DIR}/CombinatorialLogic.h
    ${CMAKE_CURRENT_SOURCE_DIR}/CompareToConstant.h
    ${CMAKE_CURRENT_SOURCE_DIR}/CompareToZero.h
    ${CMAKE_CURRENT_SOURCE_DIR}/DetectChange.h
    ${CMAKE_CURRENT_SOURCE_DIR}/DetectDecrease.h
    ${CMAKE_CURRENT_SOURCE_DIR}/DetectFallNegative.h
    ${CMAKE_CURRENT_SOURCE_DIR}/DetectFallNonpositive.h
    ${CMAKE_CURRENT_SOURCE_DIR}/DetectIncrease.h
    ${CMAKE_CURRENT_SOURCE_DIR}/DetectRiseNonnegative.h
    ${CMAKE_CURRENT_SOURCE_DIR}/DetectRisePositive.h
    ${CMAKE_CURRENT_SOURCE_DIR}/ExtractBits.h
    ${CMAKE_CURRENT_SOURCE_DIR}/FloatExtractBits.h
    ${CMAKE_CURRENT_SOURCE_DIR}/IntegerToBitConverter.h
    ${CMAKE_CURRENT_SOURCE_DIR}/IntervalTest.h
    ${CMAKE_CURRENT_SOURCE_DIR}/IntervalTestDynamic.h
    ${CMAKE_CURRENT_SOURCE_DIR}/LogicalOperator.h
    ${CMAKE_CURRENT_SOURCE_DIR}/RelationalOperator.h
    ${CMAKE_CURRENT_SOURCE_DIR}/ShiftArithmetic.h
)


set(LogicandBitOperations_HDRS ${LogicandBitOperations_HDRS} PARENT_SCOPE)
set(LogicandBitOperations_SRCS ${LogicandBitOperations_SRCS} PARENT_SCOPE)
