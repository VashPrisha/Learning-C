
#include<stdio.h>
int main()
{
    int x = -1;                     // x is a signed 32-bit integer with value -1
    unsigned int u = x;             // x converted to unsigned: 2^32 - 1 = 4294967295

    printf("%d\n", x);              // prints -1 (signed)
    printf("%u\n", x);              // prints 4294967295 (x interpreted as unsigned)
    printf("%d\n", u);              // prints -1 (u has value 4294967295, interpreted as signed)
    printf("%u\n", u);              // prints 4294967295 (unsigned)
}
