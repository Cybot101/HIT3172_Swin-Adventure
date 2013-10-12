/** 
 * File:   IdentifiableObject.cpp
 * Author: Kyle
 * 
 * Created on 12 October 2013, 10:37 AM
 */

#include <string.h>

#include "IdentifiableObject.h"

IdentifiableObject::IdentifiableObject( vector<string> _aIdents )
{
    _identifiers = _aIdents;
}

string IdentifiableObject::first_id()
{
    if (_identifiers.size() == 0)
        return "";
    else
        return _identifiers[0];
}

bool IdentifiableObject::are_you(string _aId)
{
    string tmp = _aId;
    for (int i = 0; i < _aId.size(); i++)
        tmp[i] = tolower( _aId[i] );
    
    for (int i=0; i<(_identifiers.size()); i++)
        if (_identifiers[i] == tmp )
            return true;
    
    return false;
}

void IdentifiableObject::add_identifier(string _aId)
{
    string tmp[_aId.size()];
    for (int i = 0; i < _aId.size(); i++)
        tmp[i] = tolower( _aId[i] );
    
    _identifiers.push_back( _aId );
}