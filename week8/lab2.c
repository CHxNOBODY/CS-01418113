#include <stdio.h>
#include <string.h>

typedef struct {
    char id[12]; 
    int score;   
} studentRecord;

void init(studentRecord list[], int size) {

    strcpy(list[0].id, "55100001");
    list[0].score = 0;
    
    strcpy(list[1].id, "55100002");
    list[1].score = 0;
    
    strcpy(list[2].id, "55100003");
    list[2].score = 0;
}

void enterScore(studentRecord list[], int size) {
    char input_id[12];
    int input_score;
    
    scanf("%s %d", input_id, &input_score); 
    
    for (int i = 0; i < size; i++) {
        if (strlen(input_id) <= strlen(list[i].id) &&
            strcmp(list[i].id + (strlen(list[i].id) - strlen(input_id)), input_id) == 0) {
            list[i].score = input_score;
            break; 
        }
    }
}

void printRecords(studentRecord list[], int size) {
    printf("   ID        Score\n");
    for (int i = 0; i < size; i++) {
        printf("%s       %d\n", list[i].id, list[i].score);
    }
}

int main() {
    studentRecord list[3];

    init(list, 3); 
    enterScore(list, 3); 
    printRecords(list, 3); 
    
    return 0;
}
