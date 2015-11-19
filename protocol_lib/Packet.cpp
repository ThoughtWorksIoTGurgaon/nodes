/* 
 * File:   Packet.cpp
 * Author: Anuj
 * 
 * Created on 23 September, 2015, 5:55 PM
 */

#include "Packet.h"
#include "ReadReqPacket.h"
#include "ReadResponsePacket.h"
#include "WriteReqPacket.h"

Packet::Packet() {}

Packet::Packet(int len, unsigned char * data): length(len), data(data) {}

int Packet::getLength() {
    return length;
}

unsigned char* Packet::getData() {
    return data;
}

char Packet::getServiceId() {
    return ((Header *)data)->serviceId;
}

char Packet::getType() {
    return ((Header *)data)->type;
}

Packet* Packet::parse(int len, unsigned char * data) {
    Header * header = (Header *)data;
    switch(header->type) {
        case PacketType::Read:
            return new ReadReqPacket(len, data);
        case PacketType::Response:
            return new ReadResponsePacket(len, data);
        case PacketType::Write:
            return new WriteReqPacket(len, data);
        default:
            header->type = PacketType::Invalid;
            return new Packet(len, data);
    }
}

