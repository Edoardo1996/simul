cmake_minimum_required(VERSION 3.16.3)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

project(simul)

add_subdirectory(
    linalg
)

add_executable(${PROJECT_NAME} main.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC 
    linalg
)

target_link_directories(${PROJECT_NAME} PRIVATE
    linalg/
)

target_link_libraries(${PROJECT_NAME} 
    linalg
)

