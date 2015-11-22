/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BroadcastDiscoveryPacket.h
 * Author: syedatifakhtar
 *
 * Created on November 22, 2015, 11:58 PM
 */

#ifndef BROADCASTDISCOVERYPACKET_H
#define	BROADCASTDISCOVERYPACKET_H

class Packet;

class BroadcastDiscoveryPacket: public Packet {
public:
    BroadcastDiscoveryPacket();
    BroadcastDiscoveryPacket(unsigned int len,unsigned char* data);
    unsigned char getServiceCount();
    unsigned char* getServiceData();
    unsigned char* getDeviceTypeId();
    
    void construct(unsigned char serviceCount, unsigned char * buffer);

};

#endif	/* BROADCASTDISCOVERYPACKET_H */


