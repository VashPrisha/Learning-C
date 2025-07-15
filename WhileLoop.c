#include<stdio.h>

int main()
{
    int count = 0;  // Loop counter to control the number of iterations

    while(count < 10)  // Repeat until the message is printed 10 times
    {
        printf("Programming is fun!\n");  // Output message
        count = count + 1;  // Update counter to avoid infinite loop
    }

    return 0;
}
