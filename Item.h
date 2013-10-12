/* 
 * File:   Item.h
 * Author: Kyle
 *
 */

#ifndef ITEM_H
#define	ITEM_H

#include "GameObject.h"

class Item : public GameObject
{
public:
    Item(std::vector<std::string> _aIds, std::string _aName, std::string _aDesc);
};

#endif	/* ITEM_H */

