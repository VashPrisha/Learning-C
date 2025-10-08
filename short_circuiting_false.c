#include <stdio.h>

int main() {
    int a = 1, b = 2, c = 1;  // a != b

    // Since a != b, left side of || is false
    // Right side (c++) will be evaluated due to short-circuiting
    if (a == b || c++) {
        // Post-increment: value of c used in condition first (1), then incremented
        // So inside printf, c is now 2
        printf("%d\n", c);
    }

    return 0;
}
