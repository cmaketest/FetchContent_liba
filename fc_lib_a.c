#include "fc_lib_a.h"
#include "fc_lib_b.h"

int fc_lib_a_func(int a) {
    return 3 * fc_lib_b_func(a);
}
