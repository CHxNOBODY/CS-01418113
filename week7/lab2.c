#include <stdio.h>

int remove_vowel(char *str)
{
    int i = 0, j = 0;

    while (str[i] != '\0') {
        char c = str[i];
        if (!(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')) {
            str[j] = c; 
            j++;
        }
        i++;
    }

    str[j] = '\0';
    return 0;  
}

int main()
{
    char str[80];

    printf(" Input: ");
    fgets(str, 80, stdin);  

    remove_vowel(str);  
    printf("Output: %s\n", str);  

    return 0;
}
