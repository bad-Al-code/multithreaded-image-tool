cmake_minimum_required(VERSION 3.10)
project(multithreaded-image-tool CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCES
    src/main.cpp
    src/ImageProcessor.cpp
)

set(HEADERS
    include/ImageProcessor.h
)

add_executable(multithreaded-image-tool ${SOURCES} ${HEADERS})

target_include_directories(multithreaded-image-tool PRIVATE include)
