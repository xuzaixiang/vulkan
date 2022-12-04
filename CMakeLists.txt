cmake_minimum_required(VERSION 3.23)
project(vulkan)
set(CMAKE_CXX_STANDARD 17)

include_directories(libs/glfw/include)
include_directories(libs/glm/include)
include_directories(libs/vulkan/include)

set(link_libs
        ${CMAKE_CURRENT_SOURCE_DIR}/libs/glfw/vs/glfw3.lib
        ${CMAKE_CURRENT_SOURCE_DIR}/libs/vulkan/vs/vulkan-1.lib)

add_subdirectory(examples)
