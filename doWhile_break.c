#include <stdio.h>

int main()
{
    int num = 1;  // Initialize number to 1

    // do-while loop will execute at least once
    do
    {
        printf("%d\n", num);  // Print the current value of num

        if(num == 3)  // Check if num is 3
        {
            break;  // Exit the loop if num is 3
        }

        num++;  // Increment num by 1

    } while(num <= 5);  // Continue looping while num <= 5

    return 0;  // End program successfully
}
