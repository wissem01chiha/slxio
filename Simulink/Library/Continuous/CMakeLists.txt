set(Continuous_SRCS
    ${CMAKE_CURRENT_SOURCE_DIR}/Derivative.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/DescriptorStateSpace.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/EntityTransportDelay.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/FirstOrderHold.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/Integrator.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/IntegratorLimited.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/IntegratorSecondOrder.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/IntegratorSecondOrderLimited.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/PidController.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/PidController2dof.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/StateSpace.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/TransferFcn.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/TransportDelay.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/VariableTimeDelay.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/VariableTransportDelay.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/ZeroPole.cxx
)

set(Continuous_HDRS
    ${CMAKE_CURRENT_SOURCE_DIR}/Derivative.h
    ${CMAKE_CURRENT_SOURCE_DIR}/DescriptorStateSpace.h
    ${CMAKE_CURRENT_SOURCE_DIR}/EntityTransportDelay.h
    ${CMAKE_CURRENT_SOURCE_DIR}/FirstOrderHold.h
    ${CMAKE_CURRENT_SOURCE_DIR}/Integrator.h
    ${CMAKE_CURRENT_SOURCE_DIR}/IntegratorLimited.h
    ${CMAKE_CURRENT_SOURCE_DIR}/IntegratorSecondOrder.h
    ${CMAKE_CURRENT_SOURCE_DIR}/IntegratorSecondOrderLimited.h
    ${CMAKE_CURRENT_SOURCE_DIR}/PidController.h
    ${CMAKE_CURRENT_SOURCE_DIR}/PidController2dof.h
    ${CMAKE_CURRENT_SOURCE_DIR}/StateSpace.h
    ${CMAKE_CURRENT_SOURCE_DIR}/TransferFcn.h
    ${CMAKE_CURRENT_SOURCE_DIR}/TransportDelay.h
    ${CMAKE_CURRENT_SOURCE_DIR}/VariableTimeDelay.h
    ${CMAKE_CURRENT_SOURCE_DIR}/VariableTransportDelay.h
    ${CMAKE_CURRENT_SOURCE_DIR}/ZeroPole.h
)


set(Continuous_HDRS ${Continuous_HDRS} PARENT_SCOPE)
set(Continuous_SRCS ${Continuous_SRCS} PARENT_SCOPE)
