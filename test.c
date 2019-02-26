#include "fc_lib_a.h"
#include <stdio.h>

int main(void) {
    int test_value = 2;
    printf("Calling fc_lib_a_func with '%d': %d\n", test_value, fc_lib_a_func(test_value));
    return 0;
}

