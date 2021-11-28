#!/bin/bash
g++ main.cpp engine.cpp StateMachine.cpp -I /home/guest/Downloads/SFML-2.5.1/include -o ENGINE  -L /home/guest/Downloads/SFML-2.5.1/lib -lsfml-graphics -lsfml-window -lsfml-system
export LD_LIBRARY_PATH=/home/guest/Downloads/SFML-2.5.1/lib && ./ENGINE
exit 0