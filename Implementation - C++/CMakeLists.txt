cmake_minimum_required(VERSION 3.19)
project(Implementation___C__)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Implementation___C__
        Dog.cpp
        Dog.h
        DogBreeder.cpp
        DogCondition.h
        DogRegister.cpp
        DogRegister.h)
