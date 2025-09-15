#include<stdio.h>

int main()
{
    int i, j = 2;

    // Loop with comma operator in the condition:
    // i<=5 is evaluated then discarded, j>=0 decides the loop continuation.
    for(i = 0; i <= 5, j >= 0; i++)
    {
        // Print sum of current i and j
        printf("%d\n", i + j);
        // Decrement j each iteration
        j--;
    }

    return 0;
}
