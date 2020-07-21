cmake_minimum_required(VERSION 3.16)
project(Ex4)

set(CMAKE_CXX_STANDARD 20)

add_executable(Ex4 DemoGame.cpp Board.hpp DemoGame.hpp Board.cpp  Soldier.cpp Soldier.hpp FootSoldier.cpp FootSoldier.hpp FootCommander.cpp FootCommander.hpp Sniper.cpp Sniper.hpp SniperCommander.cpp SniperCommander.hpp Paramedic.cpp Paramedic.hpp ParamedicCommander.cpp ParamedicCommander.hpp Attacker.cpp Attacker.hpp)