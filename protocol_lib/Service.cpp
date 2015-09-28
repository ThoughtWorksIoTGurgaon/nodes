/* 
 * File:   Service.cpp
 * Author: Anuj
 * 
 * Created on 24 September, 2015, 11:12 PM
 */

#include "Service.h"
#include <iostream>
struct __attribute__((__packed__)) service_payload {
    char characteristicId;
    int16_t dataLength;
    char dataPointer;
};

Service::Service(unsigned char characteristicCount, char * data): buffer(data), characteristicCount(characteristicCount) {}

void Service::initialize() {
    int offset;
    service_payload *payload;
    for(char i = 0; i < characteristicCount; i++) {
        offset = getOffsetForCharacteristic(i);
        payload = (service_payload *) (buffer + offset);
        payload->characteristicId = i;
        payload->dataLength = getDataSizeForCharacteristic(i);
    }
}

const char* const Service::serialize() {
    return buffer;
}

unsigned char Service::getCountOfCharacteristics() {
    return characteristicCount;
}

const char* const Service::getValueOfCharacteristic(char id) {
    int offset = getOffsetForCharacteristic(id);
    service_payload *payload = (service_payload *) (buffer + offset);
    return &(payload->dataPointer);
}

void Service::setValueOfCharacteristic(char id, int len, char * value) {
    int offset = getOffsetForCharacteristic(id);
    service_payload *payload = (service_payload *) (buffer + offset);
    
    char * d = &(payload->dataPointer);
    for(; len > 0;) {
        len = len -1;
        d[len] = value[len];
    }
}
