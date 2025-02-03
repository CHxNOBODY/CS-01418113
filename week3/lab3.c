#include <stdio.h>
#include <stdlib.h>

int main() {
    char num1_input[100], num2_input[100];
    long long num1, num2, gcd, numerator, denominator;

    fgets(num1_input, 100, stdin);
    fgets(num2_input, 100, stdin);

    numerator = atoll(num1_input); 
    denominator = atoll(num2_input); 

    long long a = numerator, b = denominator;
    while (b != 0) {
        long long remainder = a % b;
        a = b;
        b = remainder;
    }
    gcd = a;

    numerator /= gcd;
    denominator /= gcd;

    if (denominator == 1) {
        printf("= %lld\n", numerator); 
    } else {
        printf("= %lld/%lld\n", numerator, denominator); 
    }

    return 0;
}