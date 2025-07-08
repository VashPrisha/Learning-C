// Description: Demonstrates the dangling else problem in C.
// With num = 8, both if conditions are true, so "num is less than 10 and even" is printed.

#include <stdio.h>

int main() {
    int num = 8;

    // Outer if is true (8 < 10)
    // Inner if is also true (8 % 2 == 0)
    // So this prints the message from the inner if
    if (num < 10)
        if (num % 2 == 0)
            printf("num is less than 10 and even\n");
        else
            printf("I don't know");
}