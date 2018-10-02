cmake_minimum_required(VERSION 3.12)
project(GameRPG)

set(CMAKE_CXX_STANDARD 17)

add_executable(GameRPG
        main.cpp
        Core/Characters/Character.cpp
        Core/Characters/Character.hpp
        Core/Characters/NPC/Monster.cpp
        Core/Characters/NPC/Monster.hpp
        Core/Objects/Object.cpp
        Core/Objects/Object.hpp
        Core/Characters/Player.cpp
        Core/Characters/Player.hpp
        Core/Characters/Utiles/Inventory.cpp
        Core/Characters/Utiles/Inventory.hpp
        Core/Objects/Weapons/Sword.cpp
        Core/Objects/Weapons/Sword.hpp
        Core/Objects/Item.cpp
        Core/Objects/Item.hpp
        Core/Actions/Action.cpp
        Core/Actions/Action.hpp
        Core/Actions/Exceptions/ActionException.hpp
        Core/Exceptions/Exception.hpp
        Core/Exceptions/Handler.cpp
        Core/Exceptions/Handler.hpp
        Core/Actions/Combat/AttackAction.cpp
        Core/Actions/Combat/AttackAction.hpp
        Core/Actions/Exceptions/DeadTargetAttackException.hpp)