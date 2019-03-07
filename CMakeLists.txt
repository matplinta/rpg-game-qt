cmake_minimum_required(VERSION 3.12)
project(rpg_game_qt)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
SET(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
find_package(Qt5Widgets REQUIRED)

include_directories(.)
include_directories(resources/differentResources)
include_directories(resources/images)
include_directories(resources/maps)
include_directories(save)

add_executable(rpg_game_qt
        include/battle.h
        include/battlewindow.h
        include/boss.h
        include/door.h
        include/element.h
        include/entry.h
        include/interpreter.h
        include/inventory.h
        include/inventorywindow.h
        include/item.h
        include/keypresshandler.h
        include/loadgamewindow.h
        include/maps.h
        include/maptable.h
        include/newgamewindow.h
        include/opponent.h
        include/save.h
        include/subtitle.h
        include/player.h
        include/location.h
        include/villager.h
        include/mainwindow.h
        src/battlewindow.cpp
        src/battlewindow.ui
        src/entry.cpp
        src/entry.ui
        src/inventorywindow.cpp
        src/inventorywindow.ui
        src/item.cpp
        src/loadgamewindow.cpp
        src/loadgamewindow.ui
        src/location.cpp
        src/main.cpp
        src/mainwindow.cpp
        src/mainwindow.ui
        src/maptable.cpp
        src/maptable.ui
        src/newgamewindow.cpp
        src/newgamewindow.ui
        src/opponent.cpp
        src/player.cpp
        resources/resfile.qrc
        )

target_link_libraries(rpg_game_qt Qt5::Widgets)
