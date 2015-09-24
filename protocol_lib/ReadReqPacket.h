/* 
 * File:   ReadReqPacket.h
 * Author: Anuj
 *
 * Created on 23 September, 2015, 5:57 PM
 */
#include "Packet.h"

#ifndef READREQPACKET_H
#define	READREQPACKET_H

struct ReadCommandPacket {
	Header header;
	unsigned char count;
	unsigned char * characteristics;
};

class ReadReqPacket: public Packet {
public:
    ReadReqPacket();
    ReadReqPacket(int len, unsigned char * data);
    
    void construct(unsigned char serviceId, unsigned char * buffer);
};

#endif	/* READREQPACKET_H */

