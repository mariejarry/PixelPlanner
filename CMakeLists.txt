cmake_minimum_required(VERSION 3.28)
project(CMakeSFMLProject LANGUAGES CXX)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/..)
set(BUILD_SHARED_LIBS ON)
set(TGUI_BACKEND SFML_GRAPHICS)
set(CMAKE_BUILD_TYPE Release)

include(FetchContent)
FetchContent_Declare(SFML
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG 3.0.0
    GIT_SHALLOW ON
    EXCLUDE_FROM_ALL
    SYSTEM)
FetchContent_Declare(TGUI
    GIT_REPOSITORY https://github.com/texus/TGUI
    GIT_TAG v1.7.0)
FetchContent_MakeAvailable(SFML TGUI)

add_executable(PixelPlanner src/main.cpp src/task.cpp)
target_compile_features(PixelPlanner PRIVATE cxx_std_14)
target_link_libraries(PixelPlanner PRIVATE SFML::Graphics SFML::Audio TGUI::TGUI)
