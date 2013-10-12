/*
 * File:   InventoryUnitTest.h
 * Author: Kyle
 *
 * Created on 12/10/2013, 6:36:53 PM
 */

#ifndef INVENTORYUNITTEST_H
#define	INVENTORYUNITTEST_H

#include <cppunit/extensions/HelperMacros.h>

class InventoryUnitTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(InventoryUnitTest);

    CPPUNIT_TEST(testFindItem);
    CPPUNIT_TEST(testFindNoItem);
    CPPUNIT_TEST(testFetch);
    CPPUNIT_TEST(testTake);
    CPPUNIT_TEST(testItemList);

    CPPUNIT_TEST_SUITE_END();

public:
    InventoryUnitTest();
    virtual ~InventoryUnitTest();

private:
    void testFindItem();
    void testFindNoItem();
    void testFetch();
    void testTake();
    void testItemList();
};

#endif	/* INVENTORYUNITTEST_H */

