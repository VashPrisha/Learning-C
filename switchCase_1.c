#include<stdio.h>

int main()
{
    int num = 8;  // Initialize the variable with a value to test against multiple predefined cases

    // Use a switch-case to perform different actions based on the value of 'num'
    switch(num)
    {
        case 7: // If num is 7, execute the code below
            printf("The value is 7");
            break; // Prevents execution from falling through to the next case

        case 8: // If num is 8, this block runs
            printf("The value is 8");
            break; // Ends switch execution after this case

        case 9: // If num is 9, this block runs
            printf("The value is 9");
            break;

        default: // If num doesn't match any of the above cases
            printf("Value is out of range"); // Acts as a fallback for unexpected values
            break;
    }

    return 0; // Exit the program successfully
}
