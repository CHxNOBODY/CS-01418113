#include <stdio.h>

void print_stairs(int num_stairs, int current_step) {
    for (int i = 0; i < num_stairs; i++) {
        if (i == current_step) {
            printf("|-O-|\n");  
            printf("|-^-|\n");  
        } else {
            printf("|---|\n");  
        }
    }
}

int main() {
    int num_stairs;
    printf("Input number of stairs: ");
    scanf("%d", &num_stairs);

    int current_step = num_stairs - 1;  
    int step_command;
    int round_number = 1;

    while (1) {
        printf("---- round %d ----\n", round_number);
        print_stairs(num_stairs, current_step);
        
        printf("Input step command: ");
        scanf("%d", &step_command);
        
        if (step_command == 0) {
            break;  
        }
        
        int new_step = current_step + step_command;
        
        if (new_step < 0) {
            new_step = 0;
        } else if (new_step >= num_stairs) {
            new_step = num_stairs - 1;
        }
        
        current_step = new_step;
        round_number++;
    }

    return 0;
}