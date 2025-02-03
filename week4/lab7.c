#include <stdio.h>
#include <stdlib.h>

void draw_triangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    char input[20];
    int n;

    fgets(input, 20, stdin);
    n = atoi(input);

    draw_triangle(n);
    return 0;
}