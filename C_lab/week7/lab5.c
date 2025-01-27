#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char* stoupper(const char* str) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }

    char* new_str = (char*)malloc((i + 1) * sizeof(char));  
    if (new_str == NULL) {
        return NULL;
    }

    for (int j = 0; j < i; j++) {
        new_str[j] = toupper(str[j]);  
    }
    new_str[i] = '\0';  
    return new_str;  
}

int main(){
	char s[100];
	char* result;

	scanf("%s",s);
	result = stoupper(s);
        if (result == s) printf("ERROR.\n");
	printf("%s\n",result);
}
