cmake_minimum_required(VERSION 3.26)
project(USM_Final)

set(CMAKE_CXX_STANDARD 23)

add_executable(USM_Final main.cpp
        cpp_files/cpp/data_control.cpp
        cpp_files/headers/data_control.h
        cpp_files/cpp/university.cpp
        cpp_files/headers/university.h
        cpp_files/cpp/course.cpp
        cpp_files/headers/course.h
        cpp_files/cpp/user.cpp
        cpp_files/headers/user.h
        cpp_files/cpp/student.cpp
        cpp_files/headers/student.h
        cpp_files/cpp/staff.cpp
        cpp_files/headers/staff.h
        cpp_files/cpp/menu.cpp
        cpp_files/headers/menu.h)
