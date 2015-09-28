/* 
 * File:   ReadResponsePacket.cpp
 * Author: Anuj
 * 
 * Created on 24 September, 2015, 11:21 PM
 */

#include "ReadResponsePacket.h"

struct __attribute__ ((__packed__)) ReadCommandPacket {
    Header header;
    unsigned char count;
    unsigned char * characteristics;
};

