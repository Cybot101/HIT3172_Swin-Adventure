/* 
 * File:   GameObject.h
 * Author: Kyle
 *
 */

#ifndef GAMEOBJECT_H
#define	GAMEOBJECT_H

#include <string>
#include <vector>
#include "IdentifiableObject.h"

class GameObject : public IdentifiableObject
{
public:
    GameObject( 
            std::vector<std::string>    _aIds, 
            std::string                 _aName, 
            std::string                 _aDesc );
    virtual ~GameObject();
    
    std::string         get_name();
    std::string         get_short_description();
    virtual std::string get_full_description();
    
private:
    std::string         _description;
    std::string         _name;
    
};

#endif	/* GAMEOBJECT_H */

