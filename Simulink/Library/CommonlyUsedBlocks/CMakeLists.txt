set(CommonlyUsedBlocks_SRCS
    ${CMAKE_CURRENT_SOURCE_DIR}/BusCreator.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/BusSelector.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/Constant.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/DataTypeConversion.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/Delay.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/Demux.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/DiscreteTimeIntegrator.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/Gain.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/Ground.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/In1.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/Integrator.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/LogicalOperator.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/Mux.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/Out1.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/Product.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/RelationalOperator.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/Saturation.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/Scope.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/Subsystem.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/Sum.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/Switch.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/Terminator.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/VectorConcatenate.cxx
)

set(CommonlyUsedBlocks_HDRS
    ${CMAKE_CURRENT_SOURCE_DIR}/BusCreator.h
    ${CMAKE_CURRENT_SOURCE_DIR}/BusSelector.h
    ${CMAKE_CURRENT_SOURCE_DIR}/Constant.h
    ${CMAKE_CURRENT_SOURCE_DIR}/DataTypeConversion.h
    ${CMAKE_CURRENT_SOURCE_DIR}/Delay.h
    ${CMAKE_CURRENT_SOURCE_DIR}/Demux.h
    ${CMAKE_CURRENT_SOURCE_DIR}/DiscreteTimeIntegrator.h
    ${CMAKE_CURRENT_SOURCE_DIR}/Gain.h
    ${CMAKE_CURRENT_SOURCE_DIR}/Ground.h
    ${CMAKE_CURRENT_SOURCE_DIR}/In1.h
    ${CMAKE_CURRENT_SOURCE_DIR}/Integrator.h
    ${CMAKE_CURRENT_SOURCE_DIR}/LogicalOperator.h
    ${CMAKE_CURRENT_SOURCE_DIR}/Mux.h
    ${CMAKE_CURRENT_SOURCE_DIR}/Out1.h
    ${CMAKE_CURRENT_SOURCE_DIR}/Product.h
    ${CMAKE_CURRENT_SOURCE_DIR}/RelationalOperator.h
    ${CMAKE_CURRENT_SOURCE_DIR}/Saturation.h
    ${CMAKE_CURRENT_SOURCE_DIR}/Scope.h
    ${CMAKE_CURRENT_SOURCE_DIR}/Subsystem.h
    ${CMAKE_CURRENT_SOURCE_DIR}/Sum.h
    ${CMAKE_CURRENT_SOURCE_DIR}/Switch.h
    ${CMAKE_CURRENT_SOURCE_DIR}/Terminator.h
    ${CMAKE_CURRENT_SOURCE_DIR}/VectorConcatenate.h
)


set(CommonlyUsedBlocks_HDRS ${CommonlyUsedBlocks_HDRS} PARENT_SCOPE)
set(CommonlyUsedBlocks_SRCS ${CommonlyUsedBlocks_SRCS} PARENT_SCOPE)
