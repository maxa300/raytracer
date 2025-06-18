cmake_minimum_required(VERSION 3.30)
project(raytracer)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(raytracer
    color.h
    main.cpp
    vec3.cpp
    vec3.h
        camera.h)
