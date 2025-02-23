#include <stdio.h>

double findAverage(char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Unable to open file %s\n", filename);
        return 0.0;
    }
    
    int score, count = 0;
    double sum = 0.0;
    
    while (fscanf(file, "%d", &score) == 1) {
        sum += score;
        count++;
    }
    
    fclose(file);
    
    return (count > 0) ? (sum / count) : 0.0;
}

int main() {
    char filename[20];
    double average;
    
    scanf("%s", filename);
    average = findAverage(filename);
    
    printf("Average score is %.4lf\n", average);
    
    return 0;
}
