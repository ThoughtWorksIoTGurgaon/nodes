/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BroadcastDiscoveryPacket.cpp
 * Author: syedatifakhtar
 * 
 * Created on November 22, 2015, 11:58 PM
 */

#include "BroadcastDiscoveryPacket.h"

void BroadcastDiscoveryPacket::construct(unsigned int serviceCount, unsigned char* data) {
}

BroadcastDiscoveryPacket::BroadcastDiscoveryPacket(int len, unsigned char * data): Packet(serviceCount, data) {}


