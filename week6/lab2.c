#include <stdio.h>
#include <stdlib.h>

unsigned long *fibo_array(unsigned int n, double *golden_ratio);

int main() {
    unsigned int n = 10;
    double golden_ratio;
    unsigned long *fib_array = fibo_array(n, &golden_ratio);

    if (fib_array) {
        printf("Fibonacci array: ");
        for (unsigned int i = 0; i < n; i++) {
            printf("%lu ", fib_array[i]);
        }
        printf("\nGolden Ratio: %.10f\n", golden_ratio);

        free(fib_array);
    } else {
        printf("Memory allocation failed or invalid input.\n");
    }

    return 0;
}
