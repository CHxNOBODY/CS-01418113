#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fibo(int n) {
    double phi = (1 + sqrt(5)) / 2; 
    double psi = (1 - sqrt(5)) / 2; 
    return round((pow(phi, n) - pow(psi, n)) / sqrt(5)); 
}

int main() {
    char input_n[5];
    fgets(input_n, 5, stdin);
    int n = atoi(input_n); 

    for (int i = 0; i <= n; i++) { 
        printf("F(%d) = %d\n", i, fibo(i));
    }

    return 0;
}