#include <iostream>
#include <string>
#include "Attribute.hpp"

Attribute::Attribute(const char* name, int offense, int defense, int agility, int luck){
    this->name = name;
    this->offense = offense;
    this->defense = defense;
    this->agility = agility;
    this->luck = luck;
}

void Attribute::display(){
    std::cout << "Name: " << this->name << std::endl;
    std::cout << "Offense: " << this->offense << std::endl;
    std::cout << "Defense: " << this->defense << std::endl;
    std::cout << "Agility: " << this->agility << std::endl;
    std::cout << "Luck: " << this->luck << std::endl;
}



    