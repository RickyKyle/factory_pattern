cmake_minimum_required(VERSION 3.22)
project(factory_pattern)

set(CMAKE_CXX_STANDARD 14)

add_executable(factory_pattern main.cpp
                               plane.cpp
                               ship.cpp
                               truck.cpp
                               vehicle_factory.cpp)
