#include <stdio.h>

int main()
{
    int x = 13;    // binary: 00001101
    int y = 25;    // binary: 00011001
    int z;

    // Bitwise OR compares each bit:
    // If either bit is 1 → result is 1
    z = x | y;

    // Print the decimal result
    printf("Result of %d | %d = %d\n", x, y, z);

    return 0;
}
