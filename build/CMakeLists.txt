cmake_minimum_required(VERSION 3.2)
project(Sattrak)

add_executable(${PROJECT_NAME} src/main.c)
target_sources(${PROJECT_NAME} PRIVATE ${PROJECT_SOURCES})
target_include_directories(${PROJECT_NAME} PRIVATE ${PROJECT_INCLUDE})
target_link_libraries(${PROJECT_NAME} PRIVATE raylib)