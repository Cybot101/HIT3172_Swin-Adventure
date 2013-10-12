/*
 * File:   ItemUnitTest.h
 * Author: Kyle
 *
 * Created on 12/10/2013, 5:28:25 PM
 */

#ifndef ITEMUNITTEST_H
#define	ITEMUNITTEST_H

#include <cppunit/extensions/HelperMacros.h>

class ItemUnitTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(ItemUnitTest);

    CPPUNIT_TEST(testIdentifiable);
    CPPUNIT_TEST(testShortDescription);
    CPPUNIT_TEST(testFullDescription);
   
    CPPUNIT_TEST_SUITE_END();

public:
    ItemUnitTest();
    virtual ~ItemUnitTest();

private:
    void testIdentifiable();
    void testShortDescription();
    void testFullDescription();
};

#endif	/* ITEMUNITTEST_H */

