#include<stdio.h>

int main()
{
    char inChar = 'A';

    switch(inChar)  // switch('A') → matches case 'A'
    {
        case 'A':
            printf("Choice A\n");  // ✅ executed

        case 'B':  // ✅ fall-through

        case 'C':
            printf("Choice B");  // ✅ executed

        case 'D':  // ✅ fall-through

        case 'E':  // ✅ fall-through

        default:
            printf("No Choice");  // ✅ executed
    }
}
// ➡️ No break statements → full fall-through from case 'A' to default.
// Doesn't matter whether a case has an executable part like the printf or not, it still gets executed due to fall-through