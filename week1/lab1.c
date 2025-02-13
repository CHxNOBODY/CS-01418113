#include <stdio.h>
//#include <stdlib.h>

int main(){
    int computer_time = 785;
    int days, hours, minutes;

    days = computer_time / (60 * 24); 
    hours = (computer_time % (60 * 24)) / 60; 
    minutes = computer_time % 60; 

    printf("It is %d days %d hours and %d minutes.\n", days, hours, minutes);

}