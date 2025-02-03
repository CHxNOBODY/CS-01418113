#include <stdio.h>
#include <stdlib.h>

void decimalToBinary(int n) {
    if (n == 0) {
        return;
    }
    decimalToBinary(n / 2);
    printf("%d", n % 2);
}

int main() {
    char input[20];
    int number;

    fgets(input, 20, stdin);
    number = atoi(input);

    if (number == 0) {
        printf("0");
    } else {
        decimalToBinary(number);
    }

    printf("\n");
    return 0;
}