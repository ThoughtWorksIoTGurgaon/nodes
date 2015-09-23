/* 
 * File:   Packet.cpp
 * Author: Anuj
 * 
 * Created on 23 September, 2015, 5:55 PM
 */

#include "Packet.h"

int Packet::getLength() {
	return length;
}

unsigned char* Packet::getData() {
	return data;
}

