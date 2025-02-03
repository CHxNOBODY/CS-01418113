#include <stdio.h>

void removeTarget(int *array, int size, int target) {
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] == target) {
            found = 1; 
        }
        if (found && i < size - 1) {
            array[i] = array[i + 1]; 
        }
    }
    if (found) {
        array[size - 1] = 0; 
    }
}

int main() {
    int num, count, target;

    scanf("%d", &num);
    scanf("%d", &count);

    int numbers[num];
    int *numbersPtr = &numbers[0];

    for (int i = 0; i < num; i++) {
        numbersPtr[i] = i + 1;
    }

    for (int i = 0; i < count; i++) {
        scanf("%d", &target);
        removeTarget(numbers, num, target);
    }

    numbersPtr = &numbers[0];

    for (int i = 0; i < num; i++) {
        printf("%d ", numbersPtr[i]);
    }
    puts("");

    return 0;
}
