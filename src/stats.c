#include "stats.h"

double mean(const int *arr, int count) {
    int i;
    int total = 0;
    if (arr == 0 || count <= 0) {
        return 0.0;
    }
    for (i = 0; i < count; i++) {
        total += arr[i];
    }
    return (double)total / (double)count;
}

int min_value(const int *arr, int count) {
    int i;
    int m = arr[0];
    for (i = 1; i < count; i++) {
        if (arr[i] < m) {
            m = arr[i];
        }
    }
    return m;
}

int max_value(const int *arr, int count) {
    int i;
    int m = arr[0];
    for (i = 1; i < count; i++) {
        if (arr[i] > m) {
            m = arr[i];
        }
    }
    return m;
}
