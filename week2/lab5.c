#include <stdio.h>
#include <stdlib.h>

int main() {
    char input[100];
    int sideA, sideB, sideC;

    printf("Enter length of side A: ");
    fgets(input, 100, stdin);
    sideA = atoi(input); 

    printf("Enter length of side B: ");
    fgets(input, 100, stdin);
    sideB = atoi(input); 

    printf("Enter length of side C: ");
    fgets(input, 100, stdin);
    sideC = atoi(input); 

    if (sideA <= 0 || sideB <= 0 || sideC <= 0) {
        printf("Triangle type is invalid.\n");
    }
    else if (sideA + sideB <= sideC || sideA + sideC <= sideB || sideB + sideC <= sideA) {
        printf("Triangle type is invalid.\n");
    }
    else if (sideA == sideB && sideB == sideC) {
        printf("Triangle type is equilateral.\n");
    }
    else if (sideA == sideB || sideA == sideC || sideB == sideC) {
        printf("Triangle type is isosceles.\n");
    }
    else {
        printf("Triangle type is scalene.\n");
    }

    return 0;
}
