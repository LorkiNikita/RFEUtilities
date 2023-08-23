cmake_minimum_required(VERSION 3.20) 
project(RFEUtilities)

file(GLOB HELPER_INCLUDES ${CMAKE_SOURCE_DIR}/helpers/inc/*.h)
file(GLOB MODULE_INCLUDES ${CMAKE_SOURCE_DIR}/modules/inc/*.h)
file(GLOB SOURCE_INCLUDES ${CMAKE_SOURCE_DIR}/source/inc/*.h)
file(GLOB HELPER_SOURCES ${CMAKE_SOURCE_DIR}/helpers/src/*.cpp)
file(GLOB MODULE_SOURCES ${CMAKE_SOURCE_DIR}/modules/src/*.cpp)
file(GLOB SOURCE_SOURCES ${CMAKE_SOURCE_DIR}/source/src/*.cpp)

set(SOURCES 
    main.cpp
    
    ${HELPER_INCLUDES}
    ${MODULE_INCLUDES}
    ${SOURCE_INCLUDES}
    ${HELPER_SOURCES}
    ${MODULE_SOURCES}
    ${SOURCE_SOURCES}
)
add_library(RFEUtilities SHARED ${SOURCES})