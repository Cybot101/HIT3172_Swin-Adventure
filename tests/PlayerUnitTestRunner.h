/*
 * File:   PlayerUnitTestRunner.h
 * Author: Kyle
 *
 * Created on 12/10/2013, 9:44:22 PM
 */

#ifndef PLAYERUNITTESTRUNNER_H
#define	PLAYERUNITTESTRUNNER_H

#include <cppunit/extensions/HelperMacros.h>

class PlayerUnitTestRunner : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(PlayerUnitTestRunner);

    CPPUNIT_TEST(testPlayerIdentify);
    CPPUNIT_TEST(testLocateItem);
    CPPUNIT_TEST(testLocateSelf);
    CPPUNIT_TEST(testLocateNothing);
    CPPUNIT_TEST(testFullDescription);

    CPPUNIT_TEST_SUITE_END();

public:
    PlayerUnitTestRunner();
    virtual ~PlayerUnitTestRunner();


private:
    void testPlayerIdentify();
    void testLocateItem();
    void testLocateSelf();
    void testLocateNothing();
    void testFullDescription();
};

#endif	/* PLAYERUNITTESTRUNNER_H */

