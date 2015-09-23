/* 
 * File:   PacketBuilder.h
 * Author: Anuj
 *
 * Created on 23 September, 2015, 5:56 PM
 */

#include "ReadReqPacket.h"

#ifndef PACKETBUILDER_H
#define	PACKETBUILDER_H



class PacketBuilder {
public:
    static unsigned char dataBuffer[20];
    static ReadReqPacket readReqPacket;
    static ReadReqPacket * builderReadPacket(unsigned char serviceId);
};


#endif	/* PACKETBUILDER_H */

