cmake_minimum_required(VERSION 3.21)
project(algorithms_and_data_structures)

set(CMAKE_CXX_STANDARD 20)

add_executable(arrays
        data-structures/arrays/main.cpp)

add_executable(stacks
        data-structures/stacks/main.cpp)

add_executable(normal_queues
        "data-structures/queues/normal_queues/main.cpp")

add_executable(priority_queues
        data-structures/queues/priority_queues/main.cpp)

add_executable(singly_linked_lists
        "data-structures/linked lists/singly_linked_lists/main.cpp")

