cmake_minimum_required(VERSION 3.14)

project(Finding_Connectivity_Components LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ../bin/)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ../bin/)
set(EXECUTABLE_OUTPUT_PATH ../bin/)

add_executable(Finding_Connectivity_Components
  main.cpp
  resource/input7.txt
  resource/input8.txt
)
