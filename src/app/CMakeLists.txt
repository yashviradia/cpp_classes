add_executable(classes main.cpp
        House.cpp
        Messenger.h
        Messenger.cpp
        Accumulator.h)

target_link_libraries(classes Persons)