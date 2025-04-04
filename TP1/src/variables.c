#include <stdio.h>

int main() {
    // Types caractère
    signed char c_signed = -65;
    unsigned char c_unsigned = 200;

    // Types short
    signed short s_signed = -12345;
    unsigned short s_unsigned = 54321;

    // Types int
    signed int i_signed = -100000;
    unsigned int i_unsigned = 100000;

    // Types long int
    signed long int l_signed = -1000000000L;
    unsigned long int l_unsigned = 1000000000UL;

    // Types long long int
    signed long long int ll_signed = -5000000000LL;
    unsigned long long int ll_unsigned = 5000000000ULL;

    // Types à virgule flottante
    float f = 3.14f;
    double d = 2.718281828;
    long double ld = 1.61803398875L;

    // Affichage des valeurs
    printf("signed char           : %d\n", c_signed);
    printf("unsigned char         : %u\n", c_unsigned);

    printf("signed short          : %d\n", s_signed);
    printf("unsigned short        : %u\n", s_unsigned);

    printf("signed int            : %d\n", i_signed);
    printf("unsigned int          : %u\n", i_unsigned);

    printf("signed long int       : %ld\n", l_signed);
    printf("unsigned long int     : %lu\n", l_unsigned);

    printf("signed long long int  : %lld\n", ll_signed);
    printf("unsigned long long int: %llu\n", ll_unsigned);

    printf("float                 : %.2f\n", f);
    printf("double                : %.9f\n", d);
    printf("long double           : %.11Lf\n", ld);

    return 0;
}
