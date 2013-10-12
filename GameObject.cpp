/* 
 * File:   GameObject.cpp
 * Author: Kyle
 * 
 * Created on 12 October 2013, 2:05 PM
 */

#include <sstream>
#include "GameObject.h"

/**
 * Base class for Game Objects.
 * @param _aIds List of identifiable text
 * @param _aName Name of game object
 * @param _aDesc Description of game object
 */
GameObject::GameObject(std::vector<std::string> _aIds, std::string _aName, std::string _aDesc) :
        IdentifiableObject( _aIds )
{
    _name = _aName;
    _description = _aDesc;
}

GameObject::~GameObject() 
{
    
}

/**
 * Name of Game Object
 * @return short A short name of the game object
 */
std::string GameObject::get_name()
{
    return _name;
}

/**
 * Short description of Game Object
 * @return string A short description of game object
 */
std::string GameObject::get_short_description()
{
    std::stringstream str;
    str << _name << " (" << first_id() << ")" << endl;
    return str.str();
}

/**
 * 
 * @return 
 */
std::string GameObject::get_full_description()
{
    return _description;
}