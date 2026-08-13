set(MessagesEvents_SRCS
    ${CMAKE_CURRENT_SOURCE_DIR}/HitCrossingProbe.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/HitScheduler.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/MessageMerge.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/MessagePollingSubsystem.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/MessageTriggeredSubsystem.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/Out1.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/Queue.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/Receive.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/Send.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/SequenceViewer.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/Trigger.cxx
)

set(MessagesEvents_HDRS
    ${CMAKE_CURRENT_SOURCE_DIR}/HitCrossingProbe.h
    ${CMAKE_CURRENT_SOURCE_DIR}/HitScheduler.h
    ${CMAKE_CURRENT_SOURCE_DIR}/MessageMerge.h
    ${CMAKE_CURRENT_SOURCE_DIR}/MessagePollingSubsystem.h
    ${CMAKE_CURRENT_SOURCE_DIR}/MessageTriggeredSubsystem.h
    ${CMAKE_CURRENT_SOURCE_DIR}/Out1.h
    ${CMAKE_CURRENT_SOURCE_DIR}/Queue.h
    ${CMAKE_CURRENT_SOURCE_DIR}/Receive.h
    ${CMAKE_CURRENT_SOURCE_DIR}/Send.h
    ${CMAKE_CURRENT_SOURCE_DIR}/SequenceViewer.h
    ${CMAKE_CURRENT_SOURCE_DIR}/Trigger.h
)


set(MessagesEvents_HDRS ${MessagesEvents_HDRS} PARENT_SCOPE)
set(MessagesEvents_SRCS ${MessagesEvents_SRCS} PARENT_SCOPE)
