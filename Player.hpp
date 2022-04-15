#ifndef __PLAYER
#define __PLAYER

#include <iostream>
#include "Element.hpp"

class Player{
    private:
        std::string name;
        int hp;
        Player* player;
        Element* element;

    public:
        Player(const char*, int);
        void typeChakra(Element*);
        void displayData();
        void attack(Player*);
        void displayAfterBattle();
        int getHealth();
};

#endif