cmake_minimum_required(VERSION 3.28)
project(DP C)

set(CMAKE_C_STANDARD 11)

add_executable(DP
        buffer_overflow.c
        commandinjection.c
        doublefree.c
        format_string.c
        heapoverflow.c
        insecureimplementation.c
        integer_overflow.c
        NullPoiinter.c
        useafterfree.c
        race_condition.c)
