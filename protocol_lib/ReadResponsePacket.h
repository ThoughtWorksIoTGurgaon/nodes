/* 
 * File:   ReadResponsePacket.h
 * Author: Anuj
 *
 * Created on 24 September, 2015, 11:21 PM
 */

#include "Packet.h"

#ifndef READRESPONSEPACKET_H
#define	READRESPONSEPACKET_H

class ReadResponsePacket: public Packet {
public:
    ReadResponsePacket();
    ReadResponsePacket(int len, unsigned char * data);
private:

};

#endif	/* READRESPONSEPACKET_H */

