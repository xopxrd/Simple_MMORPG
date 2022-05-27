#include "Player.hpp"
#include <iostream>

// setter
Player::Player(const char* name, const char* role, int health){
    this->name = name;
    this->role = role;
    this->health = health;
}

// senjata player
void Player::equipWeapon(Weapon* weapon){
    this->weapon = weapon;
}

// atribut
void Player::equipAtttribute(Attribute* attribute){
    this->attribute = attribute;
}

// kegiatan bertarung
void Player::attack(Player* player){
    this->player = player;
    int damage;
    damage = this->weapon->getDamage();
    player->health -= damage;
    std::cout << this->name << " has attacked " << player->name << std::endl;
    if(player->health <= 0){
        player->health = 0;
        std::cout << player->name << " has defeated" << std::endl << std::endl;
    }
}

// menampilkan data
void Player::display(){
    std::cout << "Player Name: " << this->name << std::endl;
    std::cout << "Health: " << this->health << std::endl;
    std::cout << "Equipment: " << this->weapon->getName() << " (" << this->weapon->getDamage();
    if(this->role == "Assassin" ){
        std::cout << "+ Physical Attack)" << std::endl;
    }else if(this->role == "Fighter" ){
        std::cout << "+ Physical Attack)" << std::endl;
    }else if(this->role == "Marksman" ){
        std::cout << "+ Physical Attack)" << std::endl;
    }else if(this->role == "Tank" ){
        std::cout << "+ Physical Attack)" << std::endl;
    }else{
        std::cout << "+ Magic Damage)" << std::endl;
    }
    // std::cout << std::endl;
    // std::cout << "Item:" << std::endl;
    // this->attribute->display();
}

void Player::displayAfterBattle(){
    std::cout << "Player Name: " << this->name << std::endl;
    std::cout << "Health: " << this->health << std::endl;
}