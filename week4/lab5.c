#include <stdio.h>
#include <stdlib.h>

int main() {
    char input[10];
    int n;

    // Read input
    fgets(input, 10, stdin);
    n = atoi(input);

    // Validate input
    if (n <= 0 || n > 26) {
        printf("-\n");
        return 0;
    }

    int width = 4 * n - 3; // Total width of the Rangoli

    // Generate the Rangoli pattern
    for (int i = 0; i < n; i++) {
        // Padding for the left side
        for (int j = 0; j < (width - (4 * i + 1)) / 2; j++) {
            printf("-");
        }

        // Print the left side of the row
        for (int j = 0; j <= i; j++) {
            printf("%c", 'a' + n - 1 - j);
            if (j < i) {
                printf("-");
            }
        }

        // Print the right side of the row
        for (int j = i - 1; j >= 0; j--) {
            printf("-%c", 'a' + n - 1 - j);
        }

        // Padding for the right side
        for (int j = 0; j < (width - (4 * i + 1)) / 2; j++) {
            printf("-");
        }

        printf("\n");
    }

    // Generate the bottom half (mirror of the top half)
    for (int i = n - 2; i >= 0; i--) {
        // Padding for the left side
        for (int j = 0; j < (width - (4 * i + 1)) / 2; j++) {
            printf("-");
        }

        // Print the left side of the row
        for (int j = 0; j <= i; j++) {
            printf("%c", 'a' + n - 1 - j);
            if (j < i) {
                printf("-");
            }
        }

        // Print the right side of the row
        for (int j = i - 1; j >= 0; j--) {
            printf("-%c", 'a' + n - 1 - j);
        }

        // Padding for the right side
        for (int j = 0; j < (width - (4 * i + 1)) / 2; j++) {
            printf("-");
        }

        printf("\n");
    }

    return 0;
}