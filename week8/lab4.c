#include <stdio.h>
typedef struct {
    char id[11];  
    int midterm;
    int final;
} Student;

char calculateGrade(int midterm, int final) {
    int total = midterm + final;
    if (total >= 80) return 'A';
    else if (total >= 70) return 'B';
    else if (total >= 60) return 'C';
    else if (total >= 50) return 'D';
    else return 'F';
}

int main() {
    Student students[5]; 

    for (int i = 0; i < 5; i++) {
        printf("Enter Student ID: ");
        scanf("%s", students[i].id);
        printf("Enter Student Midterm: ");
        scanf("%d", &students[i].midterm);
        printf("Enter Student Final: ");
        scanf("%d", &students[i].final);
    }

    for (int i = 0; i < 5; i++) {
        char grade = calculateGrade(students[i].midterm, students[i].final);
        printf("Student ID %s receives grade %c.\n", students[i].id, grade);
    }

    return 0;
}