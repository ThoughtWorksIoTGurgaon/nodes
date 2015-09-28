/*
 * File:   ReadResponsePacketTest.cpp
 * Author: Anuj
 *
 * Created on 29 Sep, 2015, 2:57:13 AM
 */

#include "ReadResponsePacketTest.h"
#include "../ReadReqPacket.h"
#include "../ReadResponsePacket.h"
#include "../Packet.h"
#include "ServiceTest.h"


CPPUNIT_TEST_SUITE_REGISTRATION(ReadResponsePacketTest);

ReadResponsePacketTest::ReadResponsePacketTest() {
}

ReadResponsePacketTest::~ReadResponsePacketTest() {
}

void ReadResponsePacketTest::setUp() {
}

void ReadResponsePacketTest::tearDown() {
}


void ReadResponsePacketTest::shouldConstructReadResponsePacketForService() {
    char serviceBuffer[] = {1,1,0,'a',2,1,0,'b'};
    ServiceImp service(2, serviceBuffer);
    unsigned char readPacketBuffer[] = {1, PacketType::Read, 0,0,0, 31, 0};
    ReadReqPacket readReqPacket(7, readPacketBuffer);
    
    unsigned char * responsePacketBuffer = new unsigned char[15];
    ReadResponsePacket responsePacket;
    responsePacket.construct(&readReqPacket, &service, responsePacketBuffer);
    
    CPPUNIT_ASSERT_EQUAL((char)responsePacket.getData()[0], (char)1);
    CPPUNIT_ASSERT_EQUAL((char)responsePacket.getData()[1], (char)4);
    CPPUNIT_ASSERT_EQUAL((char)responsePacket.getData()[5], readReqPacket.getServiceId());
    CPPUNIT_ASSERT_EQUAL((char)responsePacket.getData()[6], (char)2);
    CPPUNIT_ASSERT_EQUAL((char)responsePacket.getData()[7], (char)1);
    CPPUNIT_ASSERT_EQUAL((char)responsePacket.getData()[8], (char)1);
    CPPUNIT_ASSERT_EQUAL((char)responsePacket.getData()[9], (char)0);
    CPPUNIT_ASSERT_EQUAL((char)responsePacket.getData()[10], 'a');
    CPPUNIT_ASSERT_EQUAL((char)responsePacket.getData()[11], (char)2);
    CPPUNIT_ASSERT_EQUAL((char)responsePacket.getData()[12], (char)1);
    CPPUNIT_ASSERT_EQUAL((char)responsePacket.getData()[13], (char)0);
    CPPUNIT_ASSERT_EQUAL((char)responsePacket.getData()[14], 'b');
    
}
