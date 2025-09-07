#include <stdio.h>
int main()
{
    int x = 13;    // binary: 00001101
    int y = 25;    // binary: 00011001
    int z;

    z = x & y;     // bitwise AND
    printf("%d", z);
    return 0;
}
