#include <stdio.h>

#include <math.h>

double calculate_pi(int n) {
    double pi = 0.0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            pi += 4.0 / (2 * i + 1);
        } else {
            pi -= 4.0 / (2 * i + 1);
        }
    }
    return pi;
}

int main() {
    int n;
    printf("Enter n: ");
    if (scanf("%d", &n) == 1 && n > 0) {
        double pi = calculate_pi(n);
        printf("%.10f\n", pi);
    } else {
        printf("Please enter a positive integer.\n");
    }
    return 0;
}