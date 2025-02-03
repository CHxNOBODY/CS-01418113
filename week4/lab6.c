#include <stdio.h>
#include <stdlib.h>

int main() {
    char input_goal[20], input_today[20];
    float goal, collect = 0.0, today;
    int day = 0;

    printf("Enter your goal amount: ");
    fgets(input_goal, 20, stdin);
    goal = atof(input_goal); 

    while (collect < goal) {
        printf("Enter money collected today: ");
        fgets(input_today, 20, stdin);
        today = atof(input_today); 

        collect += today; 
        day++; 

        
        if (collect >= goal) {
            if (day == 1){
                printf("Congratulations! You take %d day to reach your goal.\n", day);
            }
            else {
                printf("Congratulations! You take %d days to reach your goal.\n", day);
            }
        }
        else {
            printf("Total money collected up to day %d is %.2f. You need %.2f more.\n", day, collect, goal - collect);
        }
        
    }

    return 0;
}
