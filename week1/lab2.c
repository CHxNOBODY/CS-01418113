#include <stdio.h>
#include <stdlib.h>

// กำหนดค่าคงที่ PI มีค่า 22.0/7
#define PI 22.0/7

int main()
{
    float radius = 1.5;  // สามารถเปลี่ยนค่ารัศมีได้
    float volume;

    // คำนวณปริมาตรของทรงกลม
    volume = (4.0 / 3.0) * PI * radius * radius * radius;

    // แสดงผลลัพธ์ในรูปทศนิยม 2 ตำแหน่ง
    printf("The volume of this sphere is %.2f\n", volume);

    return 0;
}
