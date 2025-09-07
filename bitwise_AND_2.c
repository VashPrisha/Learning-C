#include <stdio.h>
int main() {
    int num = 25;  

    // Bitwise AND with 1 checks the Least Significant Bit (LSB)
    // If LSB = 1 → number is odd
    // If LSB = 0 → number is even
    if (num & 1)    
        printf("Odd\n");   // condition true → print Odd
    else
        printf("Even\n");  // condition false → print Even

    return 0;
}
