set(Discrete_SRCS
    ${CMAKE_CURRENT_SOURCE_DIR}/Delay.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/Difference.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/DiscreteDerivative.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/DiscreteFilter.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/DiscreteFirFilter.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/DiscretePidController.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/DiscretePidController2dof.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/DiscreteStateSpace.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/DiscreteTimeIntegrator.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/DiscreteTransferFcn.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/DiscreteZeroPole.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/EnabledDelay.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/Memory.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/PropagationDelay.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/ResettableDelay.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/TappedDelay.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/TransferFcnFirstOrder.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/TransferFcnLeadOrLag.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/TransferFcnRealZero.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/UnitDelay.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/VariableIntegerDelay.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/ZeroOrderHold.cxx
)

set(Discrete_HDRS
    ${CMAKE_CURRENT_SOURCE_DIR}/Delay.h
    ${CMAKE_CURRENT_SOURCE_DIR}/Difference.h
    ${CMAKE_CURRENT_SOURCE_DIR}/DiscreteDerivative.h
    ${CMAKE_CURRENT_SOURCE_DIR}/DiscreteFilter.h
    ${CMAKE_CURRENT_SOURCE_DIR}/DiscreteFirFilter.h
    ${CMAKE_CURRENT_SOURCE_DIR}/DiscretePidController.h
    ${CMAKE_CURRENT_SOURCE_DIR}/DiscretePidController2dof.h
    ${CMAKE_CURRENT_SOURCE_DIR}/DiscreteStateSpace.h
    ${CMAKE_CURRENT_SOURCE_DIR}/DiscreteTimeIntegrator.h
    ${CMAKE_CURRENT_SOURCE_DIR}/DiscreteTransferFcn.h
    ${CMAKE_CURRENT_SOURCE_DIR}/DiscreteZeroPole.h
    ${CMAKE_CURRENT_SOURCE_DIR}/EnabledDelay.h
    ${CMAKE_CURRENT_SOURCE_DIR}/Memory.h
    ${CMAKE_CURRENT_SOURCE_DIR}/PropagationDelay.h
    ${CMAKE_CURRENT_SOURCE_DIR}/ResettableDelay.h
    ${CMAKE_CURRENT_SOURCE_DIR}/TappedDelay.h
    ${CMAKE_CURRENT_SOURCE_DIR}/TransferFcnFirstOrder.h
    ${CMAKE_CURRENT_SOURCE_DIR}/TransferFcnLeadOrLag.h
    ${CMAKE_CURRENT_SOURCE_DIR}/TransferFcnRealZero.h
    ${CMAKE_CURRENT_SOURCE_DIR}/UnitDelay.h
    ${CMAKE_CURRENT_SOURCE_DIR}/VariableIntegerDelay.h
    ${CMAKE_CURRENT_SOURCE_DIR}/ZeroOrderHold.h
)


set(Discrete_HDRS ${Discrete_HDRS} PARENT_SCOPE)
set(Discrete_SRCS ${Discrete_SRCS} PARENT_SCOPE)
