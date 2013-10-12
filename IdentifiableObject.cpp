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
    for (int i=0; i<(_identifiers.size()-1); i++)
        if (_aId.compare( _identifiers[i] ) == 0)
            return true;
    
    return false;
}

void IdentifiableObject::add_identifier(string _aId)
{
    string tmp[_aId.size()];
    for (int i = 0; i < _aId.size()-1; i++)
        tmp[i] = tolower( _aId[i] );
    
    _identifiers.push_back( _aId );
}