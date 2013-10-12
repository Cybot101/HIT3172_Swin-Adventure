/* 
 * File:   Player.cpp
 * Author: Kyle
 * 
 */

#include "Player.h"

#include <sstream>

Player::Player(std::string _aName, std::string _aDesc)
        : GameObject(std::vector<std::string>(), _aName, _aDesc)
{
    add_identifier("me");
    add_identifier("inventory");
    _inventory = new Inventory();
}

Player::~Player() 
{
    delete(_inventory);
}

GameObject *Player::locate(std::string _aId)
{
    if (this->are_you(_aId))
        return this;
    
    return _inventory->fetch(_aId);
}

std::string Player::get_full_description()
{
    std::stringstream str;
    str << get_name() << endl << _inventory->get_item_list() << endl;
    return str.str();
}

Inventory *Player::get_inventory()
{
    return _inventory;
}