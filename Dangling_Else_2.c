// Description: Demonstrates the dangling else problem in C.
// When braces are not used, else gets associated with the nearest unmatched if.

#include <stdio.h>

int main() {
    int num = 9;

    // Outer if is true, inner if is false
    // The else goes to the inner if (num % 2 == 0)
    if (num < 10)
        if (num % 2 == 0)
            printf("num is less than 10 and even\n");
        else
            printf("I don't know");  // This gets printed
}