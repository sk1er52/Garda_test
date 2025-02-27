# CMake generated Testfile for 
# Source directory: D:/Projects/repos/Garda_test/firstTask
# Build directory: D:/Projects/repos/Garda_test/firstTask/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
if(CTEST_CONFIGURATION_TYPE MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
  add_test([=[all_tests]=] "D:/Projects/repos/Garda_test/firstTask/build/Debug/program_test.exe")
  set_tests_properties([=[all_tests]=] PROPERTIES  _BACKTRACE_TRIPLES "D:/Projects/repos/Garda_test/firstTask/CMakeLists.txt;15;add_test;D:/Projects/repos/Garda_test/firstTask/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
  add_test([=[all_tests]=] "D:/Projects/repos/Garda_test/firstTask/build/Release/program_test.exe")
  set_tests_properties([=[all_tests]=] PROPERTIES  _BACKTRACE_TRIPLES "D:/Projects/repos/Garda_test/firstTask/CMakeLists.txt;15;add_test;D:/Projects/repos/Garda_test/firstTask/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
  add_test([=[all_tests]=] "D:/Projects/repos/Garda_test/firstTask/build/MinSizeRel/program_test.exe")
  set_tests_properties([=[all_tests]=] PROPERTIES  _BACKTRACE_TRIPLES "D:/Projects/repos/Garda_test/firstTask/CMakeLists.txt;15;add_test;D:/Projects/repos/Garda_test/firstTask/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
  add_test([=[all_tests]=] "D:/Projects/repos/Garda_test/firstTask/build/RelWithDebInfo/program_test.exe")
  set_tests_properties([=[all_tests]=] PROPERTIES  _BACKTRACE_TRIPLES "D:/Projects/repos/Garda_test/firstTask/CMakeLists.txt;15;add_test;D:/Projects/repos/Garda_test/firstTask/CMakeLists.txt;0;")
else()
  add_test([=[all_tests]=] NOT_AVAILABLE)
endif()
