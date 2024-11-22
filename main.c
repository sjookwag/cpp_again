#include <stdio.h>
#include <stdlib.h>

void fib(int **sequence, const int count) {
    *sequence = (int*) calloc(count, sizeof(int));
    if (*sequence == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }

    if (count > 0) {
        (*sequence)[0] = 0;
    }
    if (count > 1) {
        (*sequence)[1] = 1;
    }
    for (int i = 2; i < count; i++) {
        (*sequence)[i] = (*sequence)[i - 1] + (*sequence)[i - 2];
    }
}

int main(int argc, char **argv) {
    /* do not change this main function */
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <count>\n", argv[0]);
        return 1;
    }

    const int count = strtol(argv[1], NULL, 10);
    if (count <= 0) {
        fprintf(stderr, "Count must be a positive integer\n");
        return 1;
    }

    int *fib_sequence;
    fib(&fib_sequence, count);

    for (int i = 0; i < count; i++) {
        printf("%d ", *(fib_sequence+i));
    }
    printf("\n");

    free(fib_sequence);
    return 0;
}
