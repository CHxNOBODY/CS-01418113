#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int is_automorphic(int n) {
    int square = pow(n, 2);
    
    while (n != 0) {
        if (n % 10 != square % 10) {
            return 0; 
        }
        n /= 10; 
        square /= 10; 
    }
    return 1; 
}

int main() {
    long long n;
    
    printf("Input n = ");
    scanf("%lld", &n);
    
    long long square = pow(n, 2);
    
    if (is_automorphic(n)) {
        printf("n^2 = %lld\n", square);
        printf("Yes. %lld is automorphic number.\n", n);
    } else {
        printf("n^2 = %lld\n", square);
        printf("No. %lld is not automorphic number.\n", n);
    }
    
    return 0;
}