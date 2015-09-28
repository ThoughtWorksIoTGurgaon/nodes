/*
 * File:   ServiceTest.cpp
 * Author: Anuj
 *
 * Created on 25 Sep, 2015, 8:12:19 AM
 */

#include "Service.h"
#include "ServiceTest.h"

CPPUNIT_TEST_SUITE_REGISTRATION(ServiceTest);

class ServiceImp : public Service {
public:
    ServiceImp(char count, char * data): Service(count, data) {}
    
    int getDataSizeForCharacteristic(char id) {
        return 1;
    }
    
    int getOffsetForCharacteristic(char id) {
        return id == 0 ? 0 : 4;
    }
    
    int getDataSize() {
        return 8;
    }
};

ServiceTest::ServiceTest() {
}

ServiceTest::~ServiceTest() {
}

void ServiceTest::setUp() {
}

void ServiceTest::tearDown() {
}

void ServiceTest::shouldGetDataForACharacteristic() {
    char *buffer = new char[8];
    
    ServiceImp serviceImpl(2, buffer);
    serviceImpl.initialize();
    char data = 'a';
    
    serviceImpl.setValueOfCharacteristic(0, 1, &data);
    
    CPPUNIT_ASSERT_EQUAL(*serviceImpl.getValueOfCharacteristic(0), data);
    CPPUNIT_ASSERT_EQUAL(serviceImpl.getData()[0], (char)0);
    CPPUNIT_ASSERT_EQUAL(serviceImpl.getData()[1], (char)1);
    CPPUNIT_ASSERT_EQUAL(serviceImpl.getData()[2], (char)0);
    CPPUNIT_ASSERT_EQUAL(serviceImpl.getData()[3], data);
    CPPUNIT_ASSERT_EQUAL(serviceImpl.getData()[4], (char)1);
    CPPUNIT_ASSERT_EQUAL(serviceImpl.getData()[5], (char)1);
    CPPUNIT_ASSERT_EQUAL(serviceImpl.getData()[6], (char)0);
}