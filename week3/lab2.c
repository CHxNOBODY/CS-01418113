#include <stdio.h>
#include <stdlib.h>

int main() {
    char num1_input[100], num2_input[100];
    long long num1, num2, lcm, gcd, realnum1, realnum2;

    fgets(num1_input, 100, stdin);
    fgets(num2_input, 100, stdin);

    num1 = atoll(num1_input);
    num2 = atoll(num2_input);

    realnum1 = num1;
    realnum2 = num2;

    while (num2 != 0) {
        long long remainder = num1 % num2;
        num1 = num2;
        num2 = remainder;
    }
    gcd = num1;
    lcm = (realnum1 * realnum2) / gcd; 

    printf("GCD: %lld\n", num1);
    printf("LCM: %lld\n", lcm);

    return 0;
}