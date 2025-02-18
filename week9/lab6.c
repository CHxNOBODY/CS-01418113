#include <stdio.h>

int main()
{   
    unsigned char x;
    int n;

    printf("Enter an 8-bit number: ");
    scanf("%d", &n);
    x = (unsigned char)n;

    int numbits = 0;
    while (x > 0) {
        numbits += (x & 1); 
        x >>= 1; 
    }

    printf("The number %d has %d non-zero bits\n", x, numbits);
    return 0;
}
