// Program to demonstrate the use of break statement in a for loop.
// The loop prints numbers from 1 to 5, but stops when the number is 3.

#include <stdio.h>

int main()
{
    // Loop from 1 to 5
    for(int i = 1; i <= 5; i++)
    {
        printf("%d\n", i);  // Print the current value of i

        if(i == 3)  // Check if i equals 3
        {
            break;  // Exit the loop when i is 3
        }
    }

    return 0;  // Program ends successfully
}
