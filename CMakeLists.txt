cmake_minimum_required(VERSION 3.21)
project(algorithms_and_data_structures)

set(CMAKE_CXX_STANDARD 20)

add_executable(Arrays
        data-structures/Arrays/main.cpp)

add_executable(Stacks
        data-structures/Stacks/main.cpp)

add_executable(normal_queues
        "data-structures/Queues/normal_queues/main.cpp")

add_executable(priority_queues
        data-structures/Queues/priority_queues/main.cpp)

add_executable(singly_linked_lists
        "data-structures/Linked Lists/singly_linked_lists/main.cpp")

