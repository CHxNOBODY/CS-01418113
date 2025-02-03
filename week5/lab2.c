#include <stdio.h>

void find_pythagorean_triple(int n) {
    for (int a = 1; a < n / 2; a++) {
        for (int b = a + 1; b < n / 2; b++) {
            int c = n - a - b;
            if (a * a + b * b == c * c && a < b && b < c) {
                printf("(%d, %d, %d)\n", a, b, c);
                return; 
            }
        }
    }
    printf("No triple found.\n");
}

int main() {
    int n;
    scanf("%d", &n);

    find_pythagorean_triple(n);

    return 0;
}