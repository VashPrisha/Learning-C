#include <stdio.h>

int main()
{
    int n = 0, m = 1;

    // Do-while loop executes the block at least once
    do
    {
        printf("%d", m); // Prints 1
        m++;             // m becomes 2
    }
    while(m <= n);       // Condition false (2 <= 0), loop ends

    return 0;
}
