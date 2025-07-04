//Demonstrating Integer Promotion and Overflow with signed char in C 
//char and short are referred to as small integer types and when they are used in an expression they are implicitly converted to int by C.

#include <stdio.h>

int main() {
    signed char x = 130; // Overflows signed char, becomes -126 (2's complement)

    printf("%d\n", x);   // Prints -126 (interpreted as signed int)
    printf("%u\n", x);   // Prints 4294967170 (same bits interpreted as unsigned int)

    return 0;
}
// there can be multiple variations within this topic, For example: using a value for the varaible that fits in 9 bits only, nothing less than that(i.e. 258 etc.), then it would require truncation.
