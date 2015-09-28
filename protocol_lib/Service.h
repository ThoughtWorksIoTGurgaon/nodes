/* 
 * File:   Service.h
 * Author: Anuj
 *
 * Created on 24 September, 2015, 11:12 PM
 */

#ifndef SERVICE_H
#define	SERVICE_H

class Service {
public:
    Service(char count, char * data);
    void initialize();
    
    char * getData();
    int getCountOfCharacteristics();
    
    virtual int getDataSize() = 0;
    virtual int getDataSizeForCharacteristic(char id) = 0;
    virtual int getOffsetForCharacteristic(char id) = 0;
    
    char * getValueOfCharacteristic(char id);
    void setValueOfCharacteristic(char id, int len, char * data);
private:
    char * data;
    int count;
};

#endif	/* SERVICE_H */

