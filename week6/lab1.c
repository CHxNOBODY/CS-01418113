#include <stdio.h>
#include <stdlib.h>

int main() {
    char ap[3];
    int hour, minute;

    printf("Enter a 12-hour time [eg. 12:34 am]: ");
    scanf("%d:%d %c", &hour, &minute, &ap);

    if ((ap[0] == 'a' || ap[0] == 'A') && hour == 12) {
        hour = 0; 
    } else if ((ap[0] == 'p' || ap[0] == 'P') && hour != 12) {
        hour += 12;
    }

    printf("Equivalent 24-hour time: %02d:%02d\n", hour, minute);

    return 0;
}