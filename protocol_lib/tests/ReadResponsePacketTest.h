/*
 * File:   ReadResponsePacketTest.h
 * Author: Anuj
 *
 * Created on 29 Sep, 2015, 2:57:13 AM
 */

#ifndef READRESPONSEPACKETTEST_H
#define	READRESPONSEPACKETTEST_H

#include <cppunit/extensions/HelperMacros.h>

class ReadResponsePacketTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(ReadResponsePacketTest);

    CPPUNIT_TEST(shouldConstructReadResponsePacketForService);

    CPPUNIT_TEST_SUITE_END();

public:
    ReadResponsePacketTest();
    virtual ~ReadResponsePacketTest();
    void setUp();
    void tearDown();

private:
    void shouldConstructReadResponsePacketForService();
};

#endif	/* READRESPONSEPACKETTEST_H */

