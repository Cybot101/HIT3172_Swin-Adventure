/* 
 * File:   Player.h
 * Author: Kyle
 *
 */

#ifndef PLAYER_H
#define	PLAYER_H

#include "GameObject.h"
#include "Inventory.h"
#include <string>

class Player : public GameObject
{
public:
    Player(std::string _aName, std::string _aDesc);
    virtual ~Player();
    
    GameObject *        locate(std::string _aId);
    std::string         get_full_description();
    Inventory *         get_inventory();
private:
    Inventory *         _inventory;
};

#endif	/* PLAYER_H */

