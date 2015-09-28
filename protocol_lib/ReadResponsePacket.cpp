/* 
 * File:   ReadResponsePacket.cpp
 * Author: Anuj
 * 
 * Created on 24 September, 2015, 11:21 PM
 */

#include "ReadResponsePacket.h"

struct __attribute__ ((__packed__)) ReadResponseStruct {
    Header header;
    unsigned char count;
    unsigned char characteristicsRef;
};

ReadResponsePacket::ReadResponsePacket() {}

ReadResponsePacket::ReadResponsePacket(int len, unsigned char * data): Packet(len, data) {}

void ReadResponsePacket::construct(ReadReqPacket * readPacket, Service * service, unsigned char * buffer) {
    ReadResponseStruct * packet = (ReadResponseStruct * ) buffer;
    int i = 0, payloadLength = service->getDataSize();
    unsigned char * payload = &(packet->characteristicsRef);
    packet->header.version = 1;
    packet->header.type = PacketType::Response;
    packet->header.serviceId = readPacket->getServiceId();
    packet->count = service->getCountOfCharacteristics();

    const char * serviceData = service->serialize();

    for(i = 0; i < payloadLength; i++ ) {
        payload[i] = serviceData[i];
    }
    
    data = buffer;
    length = sizeof(Header) + 1 + payloadLength;
}
