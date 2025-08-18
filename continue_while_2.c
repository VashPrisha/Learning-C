#include <stdio.h>

int main()
{
    int n = 1;  // Start counting from 1

    // Loop runs while n is less than or equal to 5
    while(n <= 5)
    {
        if(n == 3)      // If n is 3
        {
            n++;        // Increase n to avoid infinite loop
            continue;   // Skip printing 3 and go to next iteration
        }

        printf("%d\n", n);  // Print n if it is not 3
        n++;                // Increase n after printing
    }

    return 0; // Program ends successfully
}
