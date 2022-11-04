cmake_minimum_required(VERSION 3.16.3)

project(simul VERSION 1.0)

configure_file(simulConfig.h.in simulConfig.h)

add_executable(${PROJECT_NAME} main.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_BINARY_DIR})

add_subdirectory(linalg)

target_include_directories(${PROJECT_NAME} PUBLIC linalg)

target_link_directories(${PROJECT_NAME} PRIVATE linalg/)

target_link_libraries(${PROJECT_NAME} linalg)
