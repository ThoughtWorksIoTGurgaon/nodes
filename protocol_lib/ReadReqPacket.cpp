/* 
 * File:   ReadReqPacket.cpp
 * Author: Anuj
 * 
 * Created on 23 September, 2015, 5:57 PM
 */

#include "ReadReqPacket.h"

struct __attribute__ ((__packed__)) ReadCommandPacket {
    Header header;
    unsigned char count;
    unsigned char characteristicsRef;
};

ReadReqPacket::ReadReqPacket() {}

ReadReqPacket::ReadReqPacket(int len, unsigned char * data): Packet(len, data) {}

void ReadReqPacket::construct(unsigned char serviceId, unsigned char * buffer) {
	ReadCommandPacket * packet = (ReadCommandPacket * ) buffer;

	packet->header.version = 1;
	packet->header.type = PacketType::Read;
	packet->header.serviceId = serviceId;
	packet->count = 0;

	data = buffer;
	length = sizeof(Header) + 1;
}

