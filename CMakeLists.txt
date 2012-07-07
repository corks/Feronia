cmake_minimum_required(VERSION 2.8.7)
project(Feronia)

set(CMAKE_BUILD_TYPE Debug)

if (CMAKE_COMPILER_IS_GNUCXX)
    set(CMAKE_CXX_FLAGS_DEBUG "-ansi -g -pedantic -pg -Wall -Werror -Wextra")
    set(CMAKE_CXX_FLAGS_RELEASE "-ansi -O2")
endif (CMAKE_COMPILER_IS_GNUCXX)

add_subdirectory(src)
