#include <stdio.h>

struct vector {
    double x, y, z;
};

int main() {
    struct vector u, v, result;

    printf("Enter u: ");
    scanf("%lf %lf %lf", &u.x, &u.y, &u.z);

    printf("Enter v: ");
    scanf("%lf %lf %lf", &v.x, &v.y, &v.z);

    result.x = u.y * v.z - u.z * v.y;
    result.y = u.z * v.x - u.x * v.z;
    result.z = u.x * v.y - u.y * v.x;

    printf("u x v = %.1f %.1f %.1f\n", result.x, result.y, result.z);

    return 0;
}
