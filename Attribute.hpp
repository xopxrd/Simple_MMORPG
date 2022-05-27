#ifndef __ATTRIBUTE
#define __ATTRIBUTE

#include <string>

class Attribute{
    private:
        std::string name;
        int offense, defense, agility, luck;
    
    public:
        Attribute(const char*, int, int, int, int);
        void display();
};


#endif