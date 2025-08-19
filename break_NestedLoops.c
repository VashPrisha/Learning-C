//Break Statement with Nested Loops
#include<stdio.h>
int main()
{
    for(int i=0;i<5;i++)           // Outer loop runs 5 times (i = 0 to 4)
{
    for(int j=1;j<=10;j++)     // Inner loop runs 10 times (j = 1 to 10)
    {
        if(j>3)                // If j is greater than 3
            break;             // Exit the inner loop
        else
            printf("*");       // Otherwise, print "*"
    }
    printf("\n");              // Move to next line after inner loop
}

}