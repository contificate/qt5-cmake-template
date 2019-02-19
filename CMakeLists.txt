cmake_minimum_required(VERSION 3.13)

# name project
project(template)

# auto meta object compilation
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

# use C++17, of course
set(CMAKE_CXX_STANDARD 17)

# use an include directory
include_directories(include)

# require Qt5Widgets
find_package(Qt5 REQUIRED COMPONENTS Core Widgets)

# tell Qt where to find our .ui files (it defaults to directory of source files)
set(CMAKE_AUTOUIC_SEARCH_PATHS ui)

# add files to target
add_executable(template src/main.cc include/ui/main_window.h src/ui/main_window.cc)

# link our project against Qt5Widgets
target_link_libraries(template Qt5::Core Qt5::Widgets)
