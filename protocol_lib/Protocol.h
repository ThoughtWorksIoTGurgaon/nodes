/* 
 * File:   Protocol.h
 * Author: Anuj
 *
 * Created on 23 September, 2015, 5:54 PM
 */
#include "ReadReqPacket.h"

#ifndef PROTOCOL_H
#define	PROTOCOL_H

class Protocol {
public:
    ReadReqPacket * buildReadAllCharacteristicsPacketForServiceId(unsigned char serviceId);
private:

};

#endif	/* PROTOCOL_H */

