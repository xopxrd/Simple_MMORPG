#include "Element.hpp"
#include "Player.hpp"

Element::Element(const char* name, double dmg){
    this->name = name;
    this->dmg = dmg;
}

std::string Element::getElement(){
    return this->name;
}

int Element::getDamage(){
    return this->dmg;
}

/*
std::string Element::elementEffect(std::string effect, Player* target){
    this->target = target;
    if(effect == "Burn"){
        this->target->getHealth() -= this->
    }
}
*/