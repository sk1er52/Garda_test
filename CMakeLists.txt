cmake_minimum_required(VERSION 3.30)

if(DEFINED ENV{VCPKG_ROOT})
    set(VCPKG_ROOT $ENV{VCPKG_ROOT})
    set(CMAKE_TOOLCHAIN_FILE "${VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake" CACHE STRING "Vcpkg toolchain file")
    message(STATUS "Using vcpkg toolchain file: ${CMAKE_TOOLCHAIN_FILE}")
    include(${CMAKE_TOOLCHAIN_FILE})
endif()
# set(VCPKG_TARGET_TRIPLET x64-windows)
# include("C:\\Users\\qwert\\source\\repos\\vcpkg\\scripts\\buildsystems\\vcpkg.cmake")
project(Garda_test)

find_package(GTest CONFIG REQUIRED)

set(BASE_DIR ${CMAKE_CURRENT_SOURCE_DIR})

add_library(firstTask_lib firstTask/src/add.cpp)
target_include_directories(firstTask_lib PUBLIC firstTask/include)

add_executable(firstTask firstTask/test/addTest.cpp)
target_link_libraries(firstTask PRIVATE firstTask_lib GTest::gtest GTest::gtest_main)

add_library(secondTask_lib secondTask/src/protocol.cpp)
target_include_directories(secondTask_lib PUBLIC secondTask/include)

add_executable(secondTask secondTask/test/protocolTest.cpp)
target_link_libraries(secondTask PRIVATE secondTask_lib GTest::gtest GTest::gtest_main)

enable_testing()

add_test(NAME firstTask_tests COMMAND firstTask)
add_test(NAME secondTask_tests COMMAND secondTask)