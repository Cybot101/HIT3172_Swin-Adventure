/* 
 * File:   Inventory.cpp
 * Author: Kyle
 * 
 */

#include "Inventory.h"
#include "GameObject.h"

#include <sstream>

Inventory::Inventory() 
{
    _items = std::vector<Item *>();
}

Inventory::~Inventory() 
{
    
}

bool Inventory::has_item(std::string _aId)
{
    for (int i=0; i<_items.size(); i++)
        if ((_items[i])->are_you(_aId))
            return true;
    
    return false;
}

void Inventory::put_item(Item *_aItm)
{
    _items.push_back(_aItm);
}

Item *Inventory::take(std::string _aId)
{
    Item *tmp = NULL;
    
    for (int i=0; i<_items.size(); i++)
        if ((_items[i])->are_you(_aId))
        {
            tmp = _items[i];
            _items.erase(_items.begin() + i);
            break;
        }
    
    return tmp;
}

Item *Inventory::fetch(std::string _aId)
{
    for (int i=0; i<_items.size(); i++)
        if ((_items[i])->are_you(_aId))
        {
            return _items[i];
        }
}

std::string Inventory::get_item_list()
{
    std::stringstream str;
    str << "You are carrying" << endl;
    for (int i=0; i<(_items.size()); i++)
    {
        str << "   " << (_items[i])->get_short_description() << endl;
    }
    return str.str();
}