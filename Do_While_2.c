#include<stdio.h>

int main()
{
    int n = 4, m = 1;

    // Loop will run while m <= n (i.e., 1 to 4)
    do
    {
        printf("%d", m); // Print current value of m
        m++;             // Increment m
    }
    while(m <= n);       // Check condition after each iteration

    return 0;
}
