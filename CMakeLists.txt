cmake_minimum_required(VERSION 3.7)

project(HELLOWORLD)

add_subdirectory(../msggen ../msggen)

# add_library(msgbuilder msgbuilder.cpp)
# target_include_directories(msgbuilder PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(helloworld helloworld.cc)

target_link_libraries(helloworld LINK_PUBLIC msggen)

# add_subdirectory(blah)
# add_subdirectory(blaz)



