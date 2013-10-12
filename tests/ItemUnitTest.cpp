/*
 * File:   ItemUnitTest.cpp
 * Author: Kyle
 *
 */

#include "ItemUnitTest.h"

#include <string>
#include <vector>

#include "../Item.h"

CPPUNIT_TEST_SUITE_REGISTRATION(ItemUnitTest);

ItemUnitTest::ItemUnitTest() {
}

ItemUnitTest::~ItemUnitTest() {
}

void ItemUnitTest::testIdentifiable()
{
    std::vector<std::string> ids;
    ids.push_back("shovel");
    ids.push_back("spade");
    
    Item *shovel = new Item(ids, "a shovel", 
            "This is a pretty average...");
    
    CPPUNIT_ASSERT( (shovel->are_you("spade")) );
    
    delete(shovel);
}

void ItemUnitTest::testShortDescription()
{
    std::vector<std::string> ids;
    ids.push_back("shovel");
    ids.push_back("spade");
    
    Item *shovel = new Item(ids, "a shovel", 
            "This is a pretty average...");
        
    CPPUNIT_ASSERT( (shovel->get_short_description() == "a shovel (shovel)\n") );
    
    delete(shovel);
}

void ItemUnitTest::testFullDescription()
{
    std::vector<std::string> ids;
    ids.push_back("shovel");
    ids.push_back("spade");
    
    Item *shovel = new Item(ids, "a shovel", 
            "This is a pretty average...");
        
    CPPUNIT_ASSERT( (shovel->get_full_description() == "This is a pretty average...") );
    
    delete(shovel);
}