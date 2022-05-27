#include "Weapon.hpp"
#include <iostream>
#include <string>

// setter
Weapon::Weapon(const char* name,int attackPower){
    this->name = name;
    this->attackPower = attackPower;
}

void Weapon::display(){
    std::cout << "Weapon ini adalah: " << this->name << ", Power: ";
    std::cout << this->attackPower << std::endl;
}

// getter
std::string Weapon::getName(){
    return this->name;
}

int Weapon::getDamage(){
    return this->attackPower;
}

void Weapon::dropWeapon(){

}