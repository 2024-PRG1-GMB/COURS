cmake_minimum_required(VERSION 3.25)
project(03_Moving_Point_SDL)

set(CMAKE_CXX_STANDARD 20)

add_executable(${PROJECT_NAME}
        03_Moving_Point_SDL_MacOS.cpp
        )

target_link_libraries(
        ${PROJECT_NAME} PRIVATE
        /Library/Frameworks/SDL2.framework/Versions/Current/SDL2
)

target_include_directories(
        ${PROJECT_NAME} PRIVATE
        /Library/Frameworks/SDL2.framework/Versions/Current/Headers
)