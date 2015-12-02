/* 
 * File:   Service.h
 * Author: Anuj
 *
 * Created on 24 September, 2015, 11:12 PM
 */

#ifndef SERVICE_H
#define	SERVICE_H

#include "ServiceDelegate.h"

class Service {
public:
    Service(unsigned char characteristicCount, char * data, ServiceDelegate *delegate);
    void initialize();
    
    const char * const serialize();
    unsigned char getCountOfCharacteristics();
    
    virtual int getDataSize() = 0;
    virtual int getDataSizeForCharacteristic(char id) = 0;
    virtual int getOffsetForCharacteristic(char id) = 0;
    
    const char * const getValueOfCharacteristic(char id);
    void setCharacteristics(unsigned char chCount, unsigned char * data);
    void setValueOfCharacteristic(char id, int len, char * data);
private:
    char * buffer;
    unsigned char characteristicCount;
    ServiceDelegate *delegate;
};

#endif	/* SERVICE_H */
