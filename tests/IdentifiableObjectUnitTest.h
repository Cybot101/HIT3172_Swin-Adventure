/*
 * File:   IdentifiableObjectUnitTest.h
 * Author: Kyle
 *
 * Created on 12/10/2013, 11:15:43 AM
 */

#ifndef IDENTIFIABLEOBJECTUNITTEST_H
#define	IDENTIFIABLEOBJECTUNITTEST_H

#include <cppunit/extensions/HelperMacros.h>

class IdentifiableObjectUnitTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(IdentifiableObjectUnitTest);

    CPPUNIT_TEST(testCreation);
    CPPUNIT_TEST(testAreYou);
    CPPUNIT_TEST(testNotAreYou);
    CPPUNIT_TEST(testCaseSensitive);
    CPPUNIT_TEST(testFirstId);
    CPPUNIT_TEST(testAddId);
        
    CPPUNIT_TEST_SUITE_END();

public:
    IdentifiableObjectUnitTest();
    virtual ~IdentifiableObjectUnitTest();

private:
    void testCreation();
    void testAreYou();
    void testNotAreYou();
    void testCaseSensitive();
    void testFirstId();
    void testAddId();
};

#endif	/* IDENTIFIABLEOBJECTUNITTEST_H */

