/*
 * File:   ProtocolTest.h
 * Author: Anuj
 *
 * Created on 24 Sep, 2015, 5:05:52 AM
 */

#ifndef PROTOCOLTEST_H
#define	PROTOCOLTEST_H

#include <cppunit/extensions/HelperMacros.h>

class ProtocolTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(ProtocolTest);

    CPPUNIT_TEST(shouldCreateReadAllChPacket);
    CPPUNIT_TEST(shouldParsePacketFromInputData);
    CPPUNIT_TEST(shouldReturnInvalidPacketIncasePacketTypeIsInvalid);

    CPPUNIT_TEST_SUITE_END();

public:
    ProtocolTest();
    virtual ~ProtocolTest();
    void setUp();
    void tearDown();

private:
    void shouldCreateReadAllChPacket();
    void shouldParsePacketFromInputData();
    void shouldReturnInvalidPacketIncasePacketTypeIsInvalid();
};

#endif	/* PROTOCOLTEST_H */

