project(voxel-engine)
cmake_minimum_required(VERSION 3.2)
aux_source_directory(. SRC_LIST)

set (CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")
find_package(FindSDL2)

add_executable(${PROJECT_NAME} ${SRC_LIST})

target_include_directories(voxel-engine ${SDL2_INCLUDE_DIR})

target_link_libraries(voxel-engine ${SDL2_LIBRARY})
