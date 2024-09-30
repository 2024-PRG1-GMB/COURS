#file CMakeLists.txt
cmake_minimum_required(VERSION 3.23)
project(03_Moving_Point_SDL)
set(CMAKE_CXX_STANDARD 20)
# Configuration du projet pour Windows
if(${CMAKE_SYSTEM_NAME} STREQUAL "Windows")
    set(SDL2_INCLUDE_DIR c:/libs/sdl2/include)
    set(SDL2_LIB_DIR path c:/libs/sdl2/lib/x64)
    include_directories(${SDL2_INCLUDE_DIR})
    link_directories(${SDL2_LIB_DIR})
endif()
set(PRJ_SOURCE_FILES
        03_Moving_Point_SDL_Windows.cpp
)
# déclaration de la target snake
add_executable(${PROJECT_NAME}
        ${PRJ_SOURCE_FILES}
)
# Spécification des librairies pour la target snake
target_link_libraries(${PROJECT_NAME}
        SDL2main
        SDL2
)