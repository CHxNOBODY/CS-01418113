#include <stdio.h>

int main() {
    char ch;

    ch = getchar(); 

    if (ch >= 'a' && ch <= 'z') {
        printf("Output: lower case\n");
    } else if (ch >= 'A' && ch <= 'Z') {
        printf("Output: upper case\n");
    } else if (ch >= '0' && ch <= '9') {
        printf("Output: digit\n");
    } else {
        printf("Output: others\n");
    }

    return 0;
}
