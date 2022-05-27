#include <iostream>
#include <string>

#include "Player.hpp"
#include "Weapon.hpp"
#include "Attribute.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
    Player* player1 = new Player("Lancelot","Assassin",1000);
    Weapon* weapon1 = new Weapon("Totsuka Sword",350);
    Attribute* BladeArmor = new Attribute("Blade Armor",5,5,5,5);

    Player* player2 = new Player("Gusion","Assassin/Mage",1100);
    Weapon* weapon2 = new Weapon("Magic Dagger",330);

    // implementasi setter untuk mengequip weapon
    player1->equipWeapon(weapon1);
    player1->equipAtttribute(BladeArmor);
    player1->display();

    cout << endl;

    player2->equipWeapon(weapon2);
    player2->equipAtttribute(BladeArmor);
    player2->display();

    cout << endl;

    // kegiatan bertarung
    player1->attack(player2);
    player1->attack(player2);
    player1->attack(player2);
    player1->attack(player2);

    // player2->attack(player1);

    player1->display();
    cout << endl;
    player2->display();
    cout << &BladeArmor;
    // weapon1->display();

    delete player1;
    delete weapon1;

    delete player2;
    delete weapon2;

    // cout << player1 << " " << weapon1 << endl;
    
    return 0;
}
