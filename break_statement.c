#include <stdio.h>

int main()
{
    int a;  // Variable to store user input
    
    while(1)  // Infinite loop, will keep running until 'break' is encountered
    {
        printf("Enter a number : ");  // Prompt the user for input
        scanf("%d", &a);              // Read the input number
        
        if(a == 0)  // Check if the entered number is 0
        {
            break;  // Exit the loop if 0 is entered
        }
        // Loop continues if the number is not 0
    }

    return 0; // Program ends successfully
}
