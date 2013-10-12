/* 
 * File:   Inventory.h
 * Author: Kyle
 *
 */

#ifndef INVENTORY_H
#define	INVENTORY_H

#include <vector>

#include "Item.h"

class Inventory {
public:
    Inventory();
    virtual ~Inventory();
    
    bool                has_item(std::string _aId);
    void                put_item(Item *_aItm);
    Item *              take(std::string _aId);
    Item *              fetch(std::string _aId);
    
    std::string         get_item_list();
private:
    std::vector<Item *> _items;
};

#endif	/* INVENTORY_H */

