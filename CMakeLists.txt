cmake_minimum_required(VERSION 3.21)
project(algorithms_and_data_structures)

set(CMAKE_CXX_STANDARD 20)

# Data Structures
add_executable(normal_arrays
        data_structures/arrays/normal_arrays/main.cpp)

add_executable(vectors
        data_structures/arrays/vectors/main.cpp)

add_executable(stacks
        data_structures/stacks/main.cpp)

add_executable(normal_queues
        "data_structures/queues/normal_queues/main.cpp")

add_executable(priority_queues
        data_structures/queues/priority_queues/main.cpp)

add_executable(singly_linked_lists
        "data_structures/linked_lists/singly_linked_lists/main.cpp")

add_executable(normal_sets
        "data_structures/sets/normal_sets/main.cpp")

add_executable(unordered_sets
        "data_structures/sets/unordered_sets/main.cpp")

# Solutions
add_executable(217_contain_duplicate
        "leetcode_problems/217_contain_duplicate/main.cpp" data_structures/arrays/vectors/main.cpp)

