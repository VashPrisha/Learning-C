#include <stdio.h>

int main() {
    int a = 1, b = 1, c = 1;

    // Short-circuit OR (||): 
    // Since (a == b) is true, (c++) will NOT be evaluated.
    // This prevents unnecessary computation.
    if (a == b || c++) {
        // c remains 1 because c++ was skipped.
        printf("%d\n", c);
    }

    return 0;
}
