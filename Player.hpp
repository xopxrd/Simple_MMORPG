#ifndef __PLAYER
#define __PLAYER

#include <string>
#include "Weapon.hpp"
#include "Attribute.hpp"

class Player{
    private:
        std::string name, role;
        Weapon* weapon;
        Player* player;
        Attribute* attribute;
        int health;

    public:
        Player(const char*, const char*, int);
        void display();
        void displayAfterBattle();

        // setter
        void equipWeapon(Weapon*);
        void equipAtttribute(Attribute*);
        void attack(Player*);
        void defeat();
};

#endif