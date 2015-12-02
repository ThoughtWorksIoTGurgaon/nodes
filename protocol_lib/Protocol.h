/* 
 * File:   Protocol.h
 * Author: Anuj
 *
 * Created on 23 September, 2015, 5:54 PM
 */
#ifndef PROTOCOL_H
#define	PROTOCOL_H

#include "ReadReqPacket.h"
#include "WriteReqPacket.h"
#include "ReadResponsePacket.h"
#include "WriteReqPacket.h"

class Protocol {
public:
    ReadReqPacket * buildReadAllCharacteristicsPacketForServiceId(unsigned char serviceId);
    ReadResponsePacket * buildResponsePacketForReadRequest(ReadReqPacket * packet, Service * service);
    void executeWriteCommand(WriteReqPacket * packet, Service * service);
    Packet * parsePacket(int len, unsigned char * data);
private:

};

#endif	/* PROTOCOL_H */

