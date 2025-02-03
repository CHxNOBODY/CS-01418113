#include <stdio.h>
#include <stdlib.h>

int main() {
    char number_input[10];
    int number, i;

    fgets(number_input , 10, stdin);
    number = atoi(number_input);

    if (number >= 0) {
        for (i = number; i >= 0 ; i--) {
            printf("%d\n", i);
        } 
    }

    return 0;
}