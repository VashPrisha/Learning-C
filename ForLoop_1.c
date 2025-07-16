#include <stdio.h>  // Required for printf()

int main()
{
    int p;

    // Countdown loop: prints numbers from 10 to 1 in decreasing order
    // Loop starts at p = 10 and decrements until p > 0 is false
    for(p = 10; p > 0; p--)
    {
        // Output the current value of p followed by a space
        printf("%d ", p);
    }

    // No newline is printed intentionally to keep output styling customizable
    return 0;
}
