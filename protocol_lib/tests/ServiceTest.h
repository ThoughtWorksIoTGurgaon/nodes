/*
 * File:   ServiceTest.h
 * Author: Anuj
 *
 * Created on 25 Sep, 2015, 8:12:18 AM
 */

#ifndef SERVICETEST_H
#define	SERVICETEST_H

#include <cppunit/extensions/HelperMacros.h>
#include "../Service.h"

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

class ServiceTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(ServiceTest);

    CPPUNIT_TEST(shouldGetDataForACharacteristic);

    CPPUNIT_TEST_SUITE_END();

public:
    ServiceTest();
    virtual ~ServiceTest();
    void setUp();
    void tearDown();

private:
    void shouldGetDataForACharacteristic();
};

#endif	/* SERVICETEST_H */

