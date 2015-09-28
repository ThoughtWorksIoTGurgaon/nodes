/*
 * File:   ServiceTest.cpp
 * Author: Anuj
 *
 * Created on 25 Sep, 2015, 8:12:19 AM
 */

#include "Service.h"
#include "ServiceTest.h"

CPPUNIT_TEST_SUITE_REGISTRATION(ServiceTest);

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
    CPPUNIT_ASSERT_EQUAL(serviceImpl.serialize()[0], (char)0);
    CPPUNIT_ASSERT_EQUAL(serviceImpl.serialize()[1], (char)1);
    CPPUNIT_ASSERT_EQUAL(serviceImpl.serialize()[2], (char)0);
    CPPUNIT_ASSERT_EQUAL(serviceImpl.serialize()[3], data);
    CPPUNIT_ASSERT_EQUAL(serviceImpl.serialize()[4], (char)1);
    CPPUNIT_ASSERT_EQUAL(serviceImpl.serialize()[5], (char)1);
    CPPUNIT_ASSERT_EQUAL(serviceImpl.serialize()[6], (char)0);
}