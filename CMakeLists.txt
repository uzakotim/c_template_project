cmake_minimum_required(VERSION 3.10)
project(HelloWorld C)

set(CMAKE_C_STANDARD 11)

# Include directories
include_directories(include)

# Add source files
file(GLOB SOURCES "src/*.c")

# Add executable
add_executable(hello.exe ${SOURCES})

# Link pthread library
find_package(Threads REQUIRED)
target_link_libraries(hello.exe Threads::Threads)