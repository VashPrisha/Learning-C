#include <stdio.h>

int main()
{
    int n = 1;  // Start from 1

    // do-while loop ensures the body runs at least once
    do
    {
        if(n == 3)      // If n is 3
        {
            n++;        // Increase n to avoid infinite loop
            continue;   // Skip printing this iteration
        }

        printf("%d\n", n); // Print n if it's not 3
        n++;               // Increase n after printing

    } while(n <= 5);  // Loop continues while n <= 5

    return 0; // End program
}
