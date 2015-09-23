#include "test_helper.h"
#include "stdio.h"

void assertTrue(int boolResult, char * message) {
    if (boolResult == 0)
        printf("Failed: %s\n", message);    
}
