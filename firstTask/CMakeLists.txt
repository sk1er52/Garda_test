cmake_minimum_required(VERSION 3.30)

set(VCPKG_TARGET_TRIPLET x64-windows)
include("D:\\Projects\\repos\\vcpkg\\scripts\\buildsystems\\vcpkg.cmake")
project(Garda_test)

add_executable(program_test test/addTest.cpp src/add.cpp include/add.h)
include_directories(include)

enable_testing()
find_package(GTest CONFIG REQUIRED)

target_link_libraries(program_test PRIVATE GTest::gtest GTest::gtest_main)

add_test(NAME all_tests COMMAND program_test)