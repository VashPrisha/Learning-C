#include <stdio.h>

// Program to demonstrate the use of 'continue' in a for loop.
// Prints numbers from 0 to 8, skipping the number 4.
int main()
{
    for(int j = 0; j <= 8; j++)  // Loop from 0 to 8
    {
        if(j == 4)  // Check if j equals 4
        {
            continue;  // Skip the rest of the code in this iteration
        }

        printf("%d ", j);  // Print the current value of j
    }

    return 0;  // Program ends successfully
}
