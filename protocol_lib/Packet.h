/* 
 * File:   Packet.h
 * Author: Anuj
 *
 * Created on 23 September, 2015, 5:55 PM
 */

#ifndef PACKET_H
#define	PACKET_H

class PacketType {
public:
	static const char  Read = 1, 
                Write = 2, 
                Observe = 3, 
                Response = 4, 
                Ack = 5, 
                Invalid = 255;
};

class Packet {
protected:
    int length;
    unsigned char * data;
public:
    Packet();
    Packet(int len, unsigned char * data);

    int getLength();
    unsigned char * getData();
    char getServiceId();
    char getType();

    static Packet* parse(int len, unsigned char * data);
};

struct Header {
	char version;
	char type;
	char unused[3];
	char serviceId;
};

#endif	/* PACKET_H */

