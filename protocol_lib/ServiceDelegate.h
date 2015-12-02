/* 
 * File:   ServiceDelegate.h
 * Author: Anuj
 *
 * Created on 29 November, 2015, 10:13 AM
 */

#ifndef SERVICEDELEGATE_H
#define	SERVICEDELEGATE_H

class ServiceDelegate {
public:
    ServiceDelegate();
    
    virtual void didWriteToCharacteristic(char id, int len, char * value) = 0;
    virtual void didReadFromCharacteristic(char id, int len, char * value) = 0;
private:

};

#endif	/* SERVICEDELEGATE_H */

