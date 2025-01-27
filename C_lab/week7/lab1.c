#include <stdio.h>

int main() {
    char str[50];
    int count = 0;

    printf("String (without a space): ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            printf("%c ", c);
            count++;
        }
    }

    if (count > 0) {
        printf("\nThis string contains %d vowel%s.\n", count, count > 1 ? "s" : "");
    } else {
        printf("\nThis string contains 0 vowel.\n");
    }

    return 0;
}
