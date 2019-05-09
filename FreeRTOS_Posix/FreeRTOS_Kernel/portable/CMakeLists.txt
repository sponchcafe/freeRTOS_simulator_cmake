add_library(freeRTOS_portable
    GCC/Posix/port.c
    MemMang/heap_3.c
)

target_include_directories(freeRTOS_portable
    PUBLIC
        GCC/Posix/
    PRIVATE
        ../include
        ../../
)
