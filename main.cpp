/* 
 * File:   main.cpp
 * Author: Kyle
 *
 * Created on 12 October 2013, 10:34 AM
 */

#include <cstdlib>
#include <vector>
#include <iostream>

#include "Item.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    std::vector<std::string> ids;
    ids.push_back("shovel");
    ids.push_back("spade");
    
    Item *shovel = new Item(ids, "a shovel", 
            "This is a pretty average...");
    
    std::cout << shovel->are_you("spade") << endl;
    
    std::cout << shovel->get_short_description();
    
    delete(shovel);
    
    return 0;
}

