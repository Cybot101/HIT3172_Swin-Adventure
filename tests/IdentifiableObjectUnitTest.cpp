/*
 * File:   IdentifiableObjectUnitTest.cpp
 * Author: Kyle
 *
 * Created on 12/10/2013, 11:15:44 AM
 */

#include "IdentifiableObjectUnitTest.h"
#include "../IdentifiableObject.h"

CPPUNIT_TEST_SUITE_REGISTRATION(IdentifiableObjectUnitTest);

IdentifiableObjectUnitTest::IdentifiableObjectUnitTest() {
}

IdentifiableObjectUnitTest::~IdentifiableObjectUnitTest() {
}

void IdentifiableObjectUnitTest::testCreation()
{
    std::vector<string> ids;
    ids.push_back("pen");
    ids.push_back("biro");
    
    IdentifiableObject *id = new IdentifiableObject(ids);
    
    CPPUNIT_ASSERT( (id != NULL) );
    
    delete(id);
}

void IdentifiableObjectUnitTest::testAreYou()
{
    std::vector<string> ids;
    ids.push_back("fred");
    ids.push_back("bob");
    
    IdentifiableObject *id = new IdentifiableObject(ids);
    
    CPPUNIT_ASSERT( id->are_you("fred") );
    
    delete(id);
}

void IdentifiableObjectUnitTest::testNotAreYou()
{
    std::vector<string> ids;
    ids.push_back("fred");
    ids.push_back("bob");
    
    IdentifiableObject *id = new IdentifiableObject(ids);
    
    CPPUNIT_ASSERT( !(id->are_you("jim")) );
    
    delete(id);
}
void IdentifiableObjectUnitTest::testCaseSensitive()
{
    std::vector<string> ids;
    ids.push_back("fred");
    ids.push_back("bob");
    
    IdentifiableObject *id = new IdentifiableObject(ids);
    
    CPPUNIT_ASSERT( (id->are_you("FRed")) );
    
    delete(id);
}

void IdentifiableObjectUnitTest::testFirstId()
{
    std::vector<string> ids;
    ids.push_back("fred");
    ids.push_back("bob");
    
    IdentifiableObject *id = new IdentifiableObject(ids);
    
    CPPUNIT_ASSERT( (id->first_id() == "fred") );
    
    delete(id);
}

void IdentifiableObjectUnitTest::testAddId()
{
    /*std::vector<string> ids;
    ids.push_back("fred");
    ids.push_back("bob");
    
    IdentifiableObject *id = new IdentifiableObject(ids);
    
    id->add_identifier("wilma");
   */ 
    //CPPUNIT_ASSERT( (id->are_you("fred") && id->are_you("wilma")) );
    
    //delete(id);
}