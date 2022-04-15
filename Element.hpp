#ifndef __ELEMENT
#define __ELEMENT

#include <iostream>

class Element{
    private:
    std::string name;
    double dmg;
    Player* target;

    public:
    Element(const char*, double);
    std::string getElement();
    int getDamage();
    void display();
    std::string elementEffect(std::string, Player*);
};

#endif