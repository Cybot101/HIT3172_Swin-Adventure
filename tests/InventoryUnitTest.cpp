/*
 * File:   InventoryUnitTest.cpp
 * Author: Kyle
 *
 * Created on 12/10/2013, 6:36:53 PM
 */

#include "InventoryUnitTest.h"

#include "../Item.h"
#include "../Inventory.h"
#include <vector>
#include <string>

CPPUNIT_TEST_SUITE_REGISTRATION(InventoryUnitTest);

InventoryUnitTest::InventoryUnitTest() {
}

InventoryUnitTest::~InventoryUnitTest() {
}

void InventoryUnitTest::testFindItem()
{
    std::vector<std::string> ids;
    ids.push_back("shovel");
    ids.push_back("spade");
    
    Item *shovel = new Item(ids, "a shovel", 
            "This is a pretty average...");
    
    std::vector<std::string> ids2;
    ids2.push_back("pen");
    ids2.push_back("biro");
    
    Item *pen = new Item(ids2, "a pen", 
            "Writes things...");
    
    Inventory *inv = new Inventory();
    inv->put_item(shovel);
    inv->put_item(pen);
        
    CPPUNIT_ASSERT( (inv->has_item("bIRo")) );
    
    delete(shovel, pen, inv);
}
void InventoryUnitTest::testFindNoItem()
{
    std::vector<std::string> ids;
    ids.push_back("shovel");
    ids.push_back("spade");
    
    Item *shovel = new Item(ids, "a shovel", 
            "This is a pretty average...");
    
    std::vector<std::string> ids2;
    ids2.push_back("pen");
    ids2.push_back("biro");
    
    Item *pen = new Item(ids2, "a pen", 
            "Writes things...");
    
    Inventory *inv = new Inventory();
    inv->put_item(shovel);
    inv->put_item(pen);
        
    CPPUNIT_ASSERT( !(inv->has_item("Sword")) );
    
    delete(shovel, pen, inv);
}

void InventoryUnitTest::testFetch()
{
    std::vector<std::string> ids;
    ids.push_back("shovel");
    ids.push_back("spade");
    
    Item *shovel = new Item(ids, "a shovel", 
            "This is a pretty average...");
    
    std::vector<std::string> ids2;
    ids2.push_back("pen");
    ids2.push_back("biro");
    
    Item *pen = new Item(ids2, "a pen", 
            "Writes things...");
    
    Inventory *inv = new Inventory();
    inv->put_item(shovel);
    inv->put_item(pen);
        
    CPPUNIT_ASSERT( ( (inv->fetch("pen")) == pen ) );
    
    delete(shovel, pen, inv);
}

void InventoryUnitTest::testTake()
{
    std::vector<std::string> ids;
    ids.push_back("shovel");
    ids.push_back("spade");
    
    Item *shovel = new Item(ids, "a shovel", 
            "This is a pretty average...");
    
    std::vector<std::string> ids2;
    ids2.push_back("pen");
    ids2.push_back("biro");
    
    Item *pen = new Item(ids2, "a pen", 
            "Writes things...");
    
    Inventory *inv = new Inventory();
    inv->put_item(shovel);
    inv->put_item(pen);
    
    inv->take("biro");
    
    CPPUNIT_ASSERT( !(inv->has_item("biro")) );
    
    delete(shovel, pen, inv);
}

void InventoryUnitTest::testItemList()
{
    std::vector<std::string> ids;
    ids.push_back("shovel");
    ids.push_back("spade");
    
    Item *shovel = new Item(ids, "a shovel", 
            "This is a pretty average...");
    
    std::vector<std::string> ids2;
    ids2.push_back("pen");
    ids2.push_back("biro");
    
    Item *pen = new Item(ids2, "a pen", 
            "Writes things...");
    
    Inventory *inv = new Inventory();
    inv->put_item(shovel);
    inv->put_item(pen);
    
    std::cout << inv->get_item_list();
    
    CPPUNIT_ASSERT( 1 );
    
    delete(shovel, pen, inv);
}
