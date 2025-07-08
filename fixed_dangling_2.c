// Description: Correct version with braces to avoid dangling else ambiguity.
// The else now clearly belongs to the outer if.

#include <stdio.h>

int main() {
    int num = 9;

    // Outer if is true, inner if is false
    // But the else belongs to the outer if (num < 10), so it is skipped
    if (num < 10) {
        if (num % 2 == 0)
            printf("num is less than 10 and even\n");
    } else {
        printf("I don't know");  // Not executed
    }
}