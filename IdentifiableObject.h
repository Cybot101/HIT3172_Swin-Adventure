/* 
 * File:   IdentifiableObject.h
 * Author: Kyle
 *
 */

#ifndef IDENTIFIABLEOBJECT_H
#define	IDENTIFIABLEOBJECT_H

#include <string>
#include <vector>

using namespace std;

class IdentifiableObject 
{
public:
    IdentifiableObject( vector<string> _aIdents );
    
    bool        are_you(string _aId);
    string      first_id();    
private:
    vector<string>         _identifiers;
protected:
    void        add_identifier(string _aId);
};

#endif	/* IDENTIFIABLEOBJECT_H */

