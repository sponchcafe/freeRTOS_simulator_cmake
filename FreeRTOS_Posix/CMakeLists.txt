# At LEAST 2.8 but newer is better
cmake_minimum_required(VERSION 3.6 FATAL_ERROR)
project(freeRTOS-Simulator VERSION 1.0 LANGUAGES C)

add_subdirectory(${CMAKE_SOURCE_DIR}/FreeRTOS_Kernel/)

add_executable(main
    main.c)

target_link_libraries(main
    PRIVATE
        freeRTOS_Kernel
)
