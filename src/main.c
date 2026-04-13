#include <stdio.h>
#include <stdlib.h>

#include "stats.h"

int main(int argc, char *argv[]) {
    int i;
    int count;
    int *values;

    if (argc < 2) {
        fprintf(stderr, "Usage: %s <number1> <number2> ...\n", argv[0]);
        return 1;
    }

    count = argc - 1;
    values = (int *)malloc(sizeof(int) * count);
    if (values == 0) {
        fprintf(stderr, "Allocation failed.\n");
        return 1;
    }

    for (i = 0; i < count; i++) {
        values[i] = atoi(argv[i + 1]);
    }

    printf("Count: %d\n", count);
    printf("Min: %d\n", min_value(values, count));
    printf("Max: %d\n", max_value(values, count));
    printf("Mean: %.2f\n", mean(values, count));

    free(values);
    return 0;
}
