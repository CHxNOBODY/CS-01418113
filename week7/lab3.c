#include <stdio.h>

void stringcat(char src[], char dest[]) {
    int i = 0;
    while (dest[i] != '\0') {
        i++;
    }

    int j = 0;
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0';
}

int main() {
    char in1[100], in2[100];

    printf("Input 1: ");
    gets(in1);  
    printf("Input 2: ");
    gets(in2);  
    stringcat(in1, in2);  
    printf(" Output: ");
    printf("%s\n", in2);  
    return 0;
}
