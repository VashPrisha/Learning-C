#include <stdio.h>  // Required for printf()

int main()
{
    int i = 0;  // Initialize loop counter

    // For loop without initialization and increment expressions;
    // loop runs as long as i <= 9
    for(; i <= 9;)
    {
        i++;  // Increment counter manually inside loop body

        // Print the current value of i followed by a newline for clean vertical output
        printf("The value is : %d\n", i);
    }

    return 0;
}
