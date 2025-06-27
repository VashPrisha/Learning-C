#include<stdio.h>
int main()
{
    unsigned short int y = -9;      // y is unsigned 16-bit; -9 becomes 65527 due to wraparound (2^16 - 9)
    int iy = y;                     // iy gets value 65527 (no sign change, just widening to 32-bit)

    printf("%d\n", y);              // prints 65527 (y promoted to int, interpreted as signed)
    printf("%u\n", y);              // prints 65527 (y promoted to unsigned int)
    printf("%d\n", iy);             // prints 65527 (signed int)
    printf("%u\n", iy);             // prints 65527 (unsigned int)
}
