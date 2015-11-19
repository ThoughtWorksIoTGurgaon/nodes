/* 
 * File:   WriteReqPacket.cpp
 * Author: Anuj
 * 
 * Created on 16 October, 2015, 5:18 PM
 */

#include "WriteReqPacket.h"

struct __attribute__ ((__packed__)) WriteCommandStruct {
    Header header;
    unsigned char count;
    unsigned char characteristicsRef;
};

WriteReqPacket::WriteReqPacket() {}

WriteReqPacket::WriteReqPacket(int len, unsigned char * data): Packet(len, data) {}

unsigned char WriteReqPacket::getCharCount() {
    WriteCommandStruct * packet = (WriteCommandStruct * ) data;
    return packet->count;
}

unsigned char* WriteReqPacket::getCharData() {
    WriteCommandStruct * packet = (WriteCommandStruct * ) data;
    return &(packet->characteristicsRef);
}

void WriteReqPacket::construct(unsigned char serviceId, unsigned char chCount, unsigned char * buffer) {
	WriteCommandStruct * packet = (WriteCommandStruct * ) buffer;

	packet->header.version = 1;
	packet->header.type = PacketType::Write;
	packet->header.serviceId = serviceId;
	packet->count = chCount;

	data = buffer;
	length = sizeof(Header) + 1;
}

