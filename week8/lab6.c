#include <stdio.h>

struct complex {
    double real;
    double imag;
};

struct complex add_complex(struct complex C, struct complex D) {
    struct complex result;
    result.real = C.real + D.real;
    result.imag = C.imag + D.imag;
    return result;
}

struct complex multiply_complex(struct complex C, struct complex D) {
    struct complex result;
    result.real = C.real * D.real - C.imag * D.imag;
    result.imag = C.real * D.imag + C.imag * D.real;
    return result;
}

void print_complex(const char *label, struct complex num) {
    printf("%s", label);
    if (num.real == 0 && num.imag != 0) {
        printf("%.1fi\n", num.imag); 
    } else if (num.imag == 0) {
        printf("%.1f\n", num.real); 
    } else if (num.imag > 0) {
        printf("%.1f + %.1fi\n", num.real, num.imag); 
    } else {
        printf("%.1f - %.1fi\n", num.real, -num.imag); 
    }
}

int main() {
    struct complex C, D, E, F;

    printf("Enter C: ");
    scanf("%lf %lf", &C.real, &C.imag);

    printf("Enter D: ");
    scanf("%lf %lf", &D.real, &D.imag);

    E = add_complex(C, D);
    F = multiply_complex(C, D);

    print_complex("C + D = ", E);
    print_complex("C x D = ", F);

    return 0;
}
