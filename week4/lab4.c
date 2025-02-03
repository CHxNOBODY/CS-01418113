#include <stdio.h>
#include <stdlib.h>

int main() {
    char input_1[20], input_2[20];
    int x, y;

    fgets(input_1, 20, stdin);
    fgets(input_2, 20, stdin);

    x = atoi(input_1);
    y = atoi(input_2);

    if (x < 4 || y < 4){
        return 0;
    }

    for (int i = 0; i < x; i++) {
        printf("*");
    }
    printf("\n");

    for (int i = 1; i < y - 1; i++) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        printf("*");
        for (int j = 0; j < x - 2; j++) {
            printf(" ");
        }
        printf("*\n");
    }

    for (int i = 0; i < y - 1; i++) {
        printf(" ");
    }
    for (int i = 0; i < x; i++) {
        printf("*");
    }
    printf("\n");

    return 0;
}