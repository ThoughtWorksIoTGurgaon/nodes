/* 
 * File:   protocoltest.cpp
 * Author: Anuj
 *
 * Created on 23 Sep, 2015, 6:00:06 PM
 */

#include <stdlib.h>
#include <iostream>

#include "Protocol.h"
#include "test_helper.h"
/*
 * Simple C++ Test Suite
 */

void shouldCreateReadAllChPacket() {
    Protocol protocol;
    ReadReqPacket * packet = protocol.readAll(12);
    
    assertTrue(packet->getLength() == 7, "Length should be 7");
    
    unsigned char * data = packet->getData();
    assertTrue(data[0] == 1, "Version should be 1");
    assertTrue(data[1] == PacketType::Read, "Type should be Read");
    assertTrue(data[5] == 12, "Service Id should be correct");
    assertTrue(data[6] == 0, "Char count should be 0");
}

int main(int argc, char** argv) {
    std::cout << "%SUITE_STARTING% protocoltest" << std::endl;
    std::cout << "%SUITE_STARTED%" << std::endl;

    shouldCreateReadAllChPacket();
 
    return (EXIT_SUCCESS);
}

