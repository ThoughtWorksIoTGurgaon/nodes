/* 
 * File:   PacketBuilder.cpp
 * Author: Anuj
 * 
 * Created on 23 September, 2015, 5:56 PM
 */

#include "PacketBuilder.h"

unsigned char PacketBuilder::dataBuffer[20];
ReadReqPacket PacketBuilder::readReqPacket;

ReadReqPacket* PacketBuilder::builderReadPacket(unsigned char serviceId) {
	readReqPacket.construct(serviceId, dataBuffer);
	return &readReqPacket;
}

