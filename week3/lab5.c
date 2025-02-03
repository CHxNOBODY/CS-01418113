#include <stdio.h>
#include <stdlib.h>

int main() {
    char input[100];
    int n;

    fgets(input, 100, stdin);
    n = atoi(input);

    if (n <= 0 || n > 26) { 
        printf("-\n");
        return 0;
    }

    for (int i = n - 1; i >= 0; i--){ //mid to left
        printf("%c", 'a' + i);
        if (i >= 0) {
            printf("-");
        }
    }
    for (int i = 1; i < n; i++){ //mid to right
        printf("-%c", 'a' +i);
    }
    
    printf("\n");
    return 0;
}