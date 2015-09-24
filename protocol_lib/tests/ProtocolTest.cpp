/*
 * File:   ProtocolTest.cpp
 * Author: Anuj
 *
 * Created on 24 Sep, 2015, 5:05:53 AM
 */

#include "ProtocolTest.h"
#include "Protocol.h"


CPPUNIT_TEST_SUITE_REGISTRATION(ProtocolTest);

ProtocolTest::ProtocolTest() {
}

ProtocolTest::~ProtocolTest() {
}

void ProtocolTest::setUp() {
}

void ProtocolTest::tearDown() {
}

void ProtocolTest::shouldCreateReadAllChPacket() {
    Protocol protocol;
    ReadReqPacket * packet = protocol.buildReadAllCharacteristicsPacketForServiceId(12);
    
    CPPUNIT_ASSERT_EQUAL(packet->getLength(), 7);
    
    unsigned char * data = packet->getData();
    CPPUNIT_ASSERT_EQUAL(data[0], (unsigned char)1);
    CPPUNIT_ASSERT_EQUAL(data[1], (unsigned char)PacketType::Read);
    CPPUNIT_ASSERT_EQUAL(data[5], (unsigned char)12);
    CPPUNIT_ASSERT_EQUAL(data[6], (unsigned char)0);
}

void ProtocolTest::shouldParsePacketFromInputData() {
    unsigned char data[] = {1, PacketType::Read, 0,0,0, 31, 0};
    Protocol protocol;
    ReadReqPacket * packet = (ReadReqPacket*)protocol.parsePacket(7, data);
    
    CPPUNIT_ASSERT_EQUAL(packet->getServiceId(), (char)31);
    CPPUNIT_ASSERT_EQUAL(packet->getType(), (char)PacketType::Read);
}

void ProtocolTest::shouldReturnInvalidPacketIncasePacketTypeIsInvalid() {
    unsigned char data[] = {1, 99, 0,0,0, 31, 0};
    Protocol protocol;
    Packet * packet = protocol.parsePacket(7, data);
    
    CPPUNIT_ASSERT_EQUAL(packet->getType(), (char)PacketType::Invalid);
}
