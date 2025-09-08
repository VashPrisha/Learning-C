#include <stdio.h>

int main()
{
    int x = 8;       // binary: 00001000
    printf("%d",-x-~x); // 2's complement is used to represent negative numbers in binary and (2's complement - 1's complement = 1)
}
