cmake_minimum_required(VERSION 3.9)
project(MC_Exercises C)

set(CMAKE_C_STANDARD 99)

include_directories("${PROJECT_SOURCE_DIR}/SW01/")
add_subdirectory(SW01)

include_directories("${PROJECT_SOURCE_DIR}/SW02/")
add_subdirectory(SW02)

include_directories("${PROJECT_SOURCE_DIR}/SW03/")
add_subdirectory(SW03)

include_directories("${PROJECT_SOURCE_DIR}/SW05/")
add_subdirectory(SW05)

include_directories("${PROJECT_SOURCE_DIR}/SW06/")
add_subdirectory(SW06)

include_directories("${PROJECT_SOURCE_DIR}/address_administration/")
add_subdirectory(address_administration)


add_executable(MC test_bitshifting.c)