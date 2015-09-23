/* 
 * File:   Protocol.cpp
 * Author: Anuj
 * 
 * Created on 23 September, 2015, 5:54 PM
 */

#include "Protocol.h"
#include "PacketBuilder.h"

ReadReqPacket* Protocol::readAll(unsigned char serviceId) {
    return PacketBuilder::builderReadPacket(serviceId);
}

