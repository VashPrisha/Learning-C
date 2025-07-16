#include <stdio.h>

int main()
{
    int i;

    // The loop runs while i <= 3.
    // It starts at i = 0 and increments i after each iteration.
    // Because of the semicolon, the loop body is empty — nothing happens inside the loop.
    for(i = 0; i <= 3; i++);

    // After the last increment (when i becomes 4), the loop stops.
    // Now we print the final value of i.
    printf("%d", i);  // Output: 4

    return 0;
}
