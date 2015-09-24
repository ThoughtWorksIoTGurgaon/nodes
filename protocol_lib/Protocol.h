/* 
 * File:   Protocol.h
 * Author: Anuj
 *
 * Created on 23 September, 2015, 5:54 PM
 */
#ifndef PROTOCOL_H
#define	PROTOCOL_H

#include "ReadReqPacket.h"

class Protocol {
public:
    ReadReqPacket * buildReadAllCharacteristicsPacketForServiceId(unsigned char serviceId);
    Packet * parsePacket(int len, unsigned char * data);
private:

};

#endif	/* PROTOCOL_H */

