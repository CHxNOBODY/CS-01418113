#include <string.h>
#include <stdlib.h>

void str_extract(char** source, char** vowel);

int main() {
    char* str = malloc(201);
    scanf("[^\n]s", str);
    char* vowel = NULL;

    str_extract(&str, &vowel);

    printf("Consonants: \"%s\"\n", str);
    printf("    Vowels: \"%s\"\n", vowel);

    free(str);
    free(vowel);
    return 0;
}

void str_extract(char **source, char **vowel) {
    char* src = *source;  
    int len = strlen(src);

    char* vowels = malloc(len + 1);
    char* consonants = malloc(len + 1);

    int vIndex = 0; 
    int cIndex = 0; 

    for (int i = 0; i < len; i++) {
        char ch = src[i];
        if ((ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
             ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) {
            vowels[vIndex++] = ch;
        } else {
            consonants[cIndex++] = ch;  
        }
    }

    vowels[vIndex] = '\0';    
    consonants[cIndex] = '\0'; 

    free(*source);
    *source = consonants;  
    *vowel = vowels;       
}
