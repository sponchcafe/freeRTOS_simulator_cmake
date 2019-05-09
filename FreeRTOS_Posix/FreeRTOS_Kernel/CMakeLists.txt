add_subdirectory(portable)

add_library(freeRTOS_Kernel
    croutine.c
    list.c
    queue.c
    tasks.c
)

target_include_directories(freeRTOS_Kernel
    PUBLIC
        include
        ..
)

target_link_libraries(freeRTOS_Kernel
    PUBLIC
        freeRTOS_portable
        rt
        pthread
)

