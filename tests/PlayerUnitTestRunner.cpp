/*
 * File:   PlayerUnitTestRunner.cpp
 * Author: Kyle
 *
 * Created on 12/10/2013, 9:44:22 PM
 */

#include "PlayerUnitTestRunner.h"

#include "../Player.h"
#include "../Item.h"
#include "../Inventory.h"

CPPUNIT_TEST_SUITE_REGISTRATION(PlayerUnitTestRunner);

PlayerUnitTestRunner::PlayerUnitTestRunner() {
}

PlayerUnitTestRunner::~PlayerUnitTestRunner() {
}

void PlayerUnitTestRunner::testPlayerIdentify()
{
    Player *me = new Player("Kyle", "Weary Adventurer");
    
    CPPUNIT_ASSERT( (me->are_you("me") && me->are_you("inventory")) );
    
    delete(me);
}

void PlayerUnitTestRunner::testLocateItem()
{
    Player *me = new Player("Kyle", "Weary Adventurer");
    
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
    
    me->get_inventory()->put_item(shovel);
    me->get_inventory()->put_item(pen);
        
    CPPUNIT_ASSERT( ( me->locate("spade") && me->locate("BiRo")) );
    
    delete(me, shovel, pen);
}

void PlayerUnitTestRunner::testLocateSelf()
{
    Player *me = new Player("Kyle", "Weary Adventurer");
    
    std::vector<std::string> ids;
    ids.push_back("shovel");
    ids.push_back("spade");
    
    Item *shovel = new Item(ids, "a shovel", 
            "This is a pretty average...");
    
    me->get_inventory()->put_item(shovel);
        
    CPPUNIT_ASSERT( ( me->locate("me")) );
    
    delete(me, shovel);
}

void PlayerUnitTestRunner::testLocateNothing()
{
    Player *me = new Player("Kyle", "Weary Adventurer");
    
    std::vector<std::string> ids;
    ids.push_back("shovel");
    ids.push_back("spade");
    
    Item *shovel = new Item(ids, "a shovel", 
            "This is a pretty average...");
    
    me->get_inventory()->put_item(shovel);
    
    CPPUNIT_ASSERT( !( me->locate("axe")) );
    
    delete(me, shovel);
}

void PlayerUnitTestRunner::testFullDescription()
{
    Player *me = new Player("Kyle", "Weary Adventurer");
    
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
    
    me->get_inventory()->put_item(shovel);
    me->get_inventory()->put_item(pen);
    
    me->get_full_description();
        
    CPPUNIT_ASSERT( 1 );
    
    delete(me, shovel, pen);
}
