cmake_minimum_required(VERSION 3.21)
project(algorithms_and_data_structures)

set(CMAKE_CXX_STANDARD 20)

add_executable(1-Arrays
        data-structures/1-Arrays/main.cpp)

add_executable(2-Stacks
        data-structures/2-Stacks/main.cpp)

add_executable(3-Queues
        "data-structures/3-Queues/normal_queues/main.cpp")

add_executable(4-Priority_queues
        data-structures/3-Queues/priority_queues/main.cpp)

add_executable(5-Singly_linked_lists
        "data-structures/4-Linked lists/singly_linked_lists/main.cpp")

