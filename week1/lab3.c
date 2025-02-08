#include<stdio.h>

int main()
{
    // กำหนดค่าเริ่มต้น
    float preGrade = 1.75;       // เกรดเฉลี่ยสะสมที่ผ่านมา
    int preCredit = 21;          // หน่วยกิตสะสม
    int credit = 18;             // หน่วยกิตในเทอมนี้
    float requiredGrade = 2.00;  // เกรดเฉลี่ยรวมที่ต้องการ

    // ตัวแปรสำหรับคำนวณเกรดเฉลี่ยเทอมนี้
    float currentSemesterGPA;

    // คำนวณเกรดเฉลี่ยที่ต้องทำในเทอมนี้
    currentSemesterGPA = ((requiredGrade * (preCredit + credit)) - (preGrade * preCredit)) / credit;

    // แสดงผลลัพธ์
    printf("The GPA this semester should be %.2f\n", currentSemesterGPA);

    return 0;
}
