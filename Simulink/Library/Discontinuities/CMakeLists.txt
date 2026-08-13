set(Discontinuities_SRCS
    ${CMAKE_CURRENT_SOURCE_DIR}/Backlash.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/CoulombViscousFriction.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/DeadZone.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/DeadZoneDynamic.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/HitCrossing.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/Pwm.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/Quantizer.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/RateLimiter.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/RateLimiterDynamic.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/Relay.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/Saturation.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/SaturationDynamic.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/VariablePulseGenerator.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/WrapToZero.cxx
)

set(Discontinuities_HDRS
    ${CMAKE_CURRENT_SOURCE_DIR}/Backlash.h
    ${CMAKE_CURRENT_SOURCE_DIR}/CoulombViscousFriction.h
    ${CMAKE_CURRENT_SOURCE_DIR}/DeadZone.h
    ${CMAKE_CURRENT_SOURCE_DIR}/DeadZoneDynamic.h
    ${CMAKE_CURRENT_SOURCE_DIR}/HitCrossing.h
    ${CMAKE_CURRENT_SOURCE_DIR}/Pwm.h
    ${CMAKE_CURRENT_SOURCE_DIR}/Quantizer.h
    ${CMAKE_CURRENT_SOURCE_DIR}/RateLimiter.h
    ${CMAKE_CURRENT_SOURCE_DIR}/RateLimiterDynamic.h
    ${CMAKE_CURRENT_SOURCE_DIR}/Relay.h
    ${CMAKE_CURRENT_SOURCE_DIR}/Saturation.h
    ${CMAKE_CURRENT_SOURCE_DIR}/SaturationDynamic.h
    ${CMAKE_CURRENT_SOURCE_DIR}/VariablePulseGenerator.h
    ${CMAKE_CURRENT_SOURCE_DIR}/WrapToZero.h
)


set(Discontinuities_HDRS ${Discontinuities_HDRS} PARENT_SCOPE)
set(Discontinuities_SRCS ${Discontinuities_SRCS} PARENT_SCOPE)
