// Description: Correct version with braces to prevent dangling else ambiguity.
// With num = 8, both conditions are true, so "num is less than 10 and even" is printed.

#include <stdio.h>

int main() {
    int num = 8;

    // Braces ensure the else belongs to the outer if
    // Since num < 10 is true and num % 2 == 0 is also true,
    // the message is printed and else is skipped
    if (num < 10) {
        if (num % 2 == 0)
            printf("num is less than 10 and even\n");
    } else {
        printf("I don't know");
    }
}