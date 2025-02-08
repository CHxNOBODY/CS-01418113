#include <stdio.h>
//#include <stdlib.h>

int main(){
    int computer_time = 785;
    int days, hours, minutes;

    // คำนวณจำนวนวัน ชั่วโมง และนาที
    days = computer_time / (60 * 24); // 1 วัน = 60 นาที * 24 ชั่วโมง
    hours = (computer_time % (60 * 24)) / 60; // คำนวณชั่วโมงที่เหลือ
    minutes = computer_time % 60; // คำนวณนาทีที่เหลือ

    // แสดงผลลัพธ์
    printf("It is %d days %d hours and %d minutes.\n", days, hours, minutes);

}