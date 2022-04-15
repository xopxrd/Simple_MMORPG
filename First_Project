#include <iostream>

#include "Element.hpp"
#include "Player.hpp"

int main(int argc, char const *argv[])
{
    Player* Zuko = new Player("Zuko",1000);
    Element* Fire = new Element("Fire",100);

    Player* Saka = new Player("Saka",1200);
    Element* Water = new Element("Water",80);

    Zuko->typeChakra(Fire);
    Zuko->displayData();

    std::cout << std::endl;

    Saka->typeChakra(Water);
    Saka->displayData();

    std::cout << std::endl;

    Zuko->attack(Saka);

    std::cout << std::endl;

    Saka->displayAfterBattle();

    delete Zuko;
    delete Fire;

    delete Saka;
    delete Water;

    return 0;
}
