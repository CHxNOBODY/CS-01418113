#include <stdio.h>
#include <string.h>

void roman2arabic(char input[], char output[]) {
    char roman[][4] = {"I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    char arabic[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    
    int i, j, k = 0;
    int len = strlen(input);
    
    // การคัดลอกข้อมูลจาก input ไปยัง output
    for (i = 0; i < len; i++) {
        // ตรวจสอบว่าตัวอักษรใน input ตรงกับเลขโรมันที่เราต้องการแปลง
        for (j = 0; j < 9; j++) {
            int roman_len = strlen(roman[j]);
            if (i + roman_len <= len && strncmp(&input[i], roman[j], roman_len) == 0) {
                output[k++] = arabic[j];  // ใส่เลขอารบิกที่แปลงแล้วลงใน output
                i += roman_len - 1;       // เลื่อนตำแหน่งของ i เพื่อข้ามเลขโรมันที่เพิ่งแปลง
                break;
            }
        }
        // หากไม่มีการแปลงให้คัดลอกอักขระจาก input ไปยัง output โดยตรง
        if (j == 9) {
            output[k++] = input[i];
        }
    }
    output[k] = '\0';  // ใส่เครื่องหมาย null ที่ท้าย output
}

int main() {
    char input[80], output[80];

    printf("Input: ");
    fgets(input, 80, stdin);

    // ลบเครื่องหมาย newline ที่ fgets() ใส่มา
    char *ch = input;
    while (*ch++ != '\n' || (*(--ch) = 0));

    roman2arabic(input, output);
    printf("Output: %s\n", output);

    return 0;
}
