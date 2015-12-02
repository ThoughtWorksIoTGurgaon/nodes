/* 
 * File:   WriteReqPacket.h
 * Author: Anuj
 *
 * Created on 16 October, 2015, 5:18 PM
 */

#ifndef WRITEREQPACKET_H
#define	WRITEREQPACKET_H
#include "Packet.h"

class WriteReqPacket: public Packet {
public:
    WriteReqPacket();
    WriteReqPacket(int len, unsigned char * data);
    unsigned char getCharCount();
    unsigned char* getCharData();
    
    void construct(unsigned char serviceId, unsigned char chCount, unsigned char * buffer);

};

#endif	/* WRITEREQPACKET_H */

