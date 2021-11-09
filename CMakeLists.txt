cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
project(test_serial_port)
set( CMAKE_CXX_FLAGS "-std=c++11" )
add_library(device_lib
        serialport_driver.cpp
        serialport_driver.h
        )
add_executable(test_serial_port test_serial_port.cpp)
target_link_libraries(test_serial_port device_lib)