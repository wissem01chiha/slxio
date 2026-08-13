target_sources(SimulinkLibrary
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/BlockSupportTable.cxx
        ${CMAKE_CURRENT_SOURCE_DIR}/Docblock.cxx
        ${CMAKE_CURRENT_SOURCE_DIR}/ModelInfo.cxx
        ${CMAKE_CURRENT_SOURCE_DIR}/TimedBasedLinearization.cxx
        ${CMAKE_CURRENT_SOURCE_DIR}/TriggerBasedLinearization.cxx

        ${CMAKE_CURRENT_SOURCE_DIR}/BlockSupportTable.h
        ${CMAKE_CURRENT_SOURCE_DIR}/Docblock.h
        ${CMAKE_CURRENT_SOURCE_DIR}/ModelInfo.h
        ${CMAKE_CURRENT_SOURCE_DIR}/TimedBasedLinearization.h
        ${CMAKE_CURRENT_SOURCE_DIR}/TriggerBasedLinearization.h
)
