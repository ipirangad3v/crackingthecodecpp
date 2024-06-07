cmake_minimum_required(VERSION 3.28)
project(crackingthecode)

set(CMAKE_CXX_STANDARD 20)

add_executable(crackingthecode main.cpp
        sorting_and_searching/merge_sort/merge_sort.cpp
        sorting_and_searching/merge_sort/merge_sort.h
        sorting_and_searching/quick_sort/quick_sort.h
        sorting_and_searching/quick_sort/quick_sort.cpp
        sorting_and_searching/quick_sort/quick_sort.cpp
)
