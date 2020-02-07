cmake_minimum_required(VERSION 3.0.0)

project(CloudMeshEditor VERSION 0.0.1 LANGUAGES CXX)

enable_testing()

add_subdirectory(src)
add_subdirectory(tests)

set(EXEC_SOURCES ${EXEC_SOURCES} main.cpp)

add_executable(CloudMeshEditor ${EXEC_SOURCES})

target_link_libraries(CloudMeshEditor Arithmetic)
