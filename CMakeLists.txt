cmake_minimum_required(VERSION 3.16.3)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

project(simul)

add_subdirectory(
    linalg
    onedim
)

add_executable(${PROJECT_NAME} main.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC 
    linalg
    onedim
)

target_link_directories(${PROJECT_NAME} PRIVATE
    linalg/
    onedim/
)

target_link_libraries(${PROJECT_NAME} 
    linalg
    onedim
)

