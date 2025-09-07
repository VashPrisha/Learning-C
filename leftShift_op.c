#include <stdio.h>

int main()
{
    int x = 10;      // binary: 00001010
    int y = x << 1;  // shift all bits one place to the left

    printf("Result of %d << 1 = %d\n", x, y);

    return 0;
}
