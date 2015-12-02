/* 
 * File:   ServiceDelegate.cpp
 * Author: Anuj
 * 
 * Created on 29 November, 2015, 10:13 AM
 */

#include "ServiceDelegate.h"

ServiceDelegate::ServiceDelegate() {
}

void ServiceDelegate::didWriteToCharacteristic(char id, int len, char * value)  {}
void ServiceDelegate::didReadFromCharacteristic(char id, int len, char * value) {}
void ServiceDelegate::didCompleteWritingToCharacteristics() {}

