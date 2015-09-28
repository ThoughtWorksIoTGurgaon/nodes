/* 
 * File:   ReadResponsePacket.h
 * Author: Anuj
 *
 * Created on 24 September, 2015, 11:21 PM
 */

#ifndef READRESPONSEPACKET_H
#define	READRESPONSEPACKET_H

#include "Packet.h"

class ReadResponsePacket: public Packet {
public:
    ReadResponsePacket();
    ReadResponsePacket(int len, unsigned char * data);
private:

};

#endif	/* READRESPONSEPACKET_H */

