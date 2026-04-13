#include <stdio.h>

#include "stats.h"

static int assert_equal_int(int expected, int actual, const char *msg) {
    if (expected != actual) {
        printf("FAIL: %s expected=%d actual=%d\n", msg, expected, actual);
        return 1;
    }
    return 0;
}

static int assert_equal_double(double expected, double actual, const char *msg) {
    double diff = expected - actual;
    if (diff < 0) {
        diff = -diff;
    }
    if (diff > 0.0001) {
        printf("FAIL: %s expected=%.2f actual=%.2f\n", msg, expected, actual);
        return 1;
    }
    return 0;
}

int main(void) {
    int data[] = {10, 5, 40, 15};
    int failures = 0;

    failures += assert_equal_int(5, min_value(data, 4), "min_value");
    failures += assert_equal_int(40, max_value(data, 4), "max_value");
    failures += assert_equal_double(17.5, mean(data, 4), "mean");

    if (failures == 0) {
        printf("All tests passed.\n");
    }

    return failures == 0 ? 0 : 1;
}
