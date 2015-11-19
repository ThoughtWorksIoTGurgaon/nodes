/* 
 * File:   Protocol.cpp
 * Author: Anuj
 * 
 * Created on 23 September, 2015, 5:54 PM
 */

#include "Protocol.h"
#include "WriteReqPacket.h"

static ReadReqPacket readReqPacket;
static unsigned char buffer[7];

static ReadResponsePacket readResponsePacket;
static unsigned char responseBuffer[20];

ReadReqPacket* Protocol::buildReadAllCharacteristicsPacketForServiceId(unsigned char serviceId) {
    readReqPacket.construct(serviceId, buffer);
    return &readReqPacket;
}

ReadResponsePacket* Protocol::buildResponsePacketForReadRequest(ReadReqPacket * packet, Service * service) {
    readResponsePacket.construct(packet, service, responseBuffer);
    return &readResponsePacket;
}

void Protocol::executeWriteCommand(WriteReqPacket * packet, Service * service) {
    service->setCharacteristics(packet->getCharCount(), packet->getCharData());
}

Packet* Protocol::parsePacket(int len, unsigned char * data) {
    return Packet::parse(len, data);
}
