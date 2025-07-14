#include<stdio.h>

int main()
{
    int num = 3;

    switch(num)  // switch(3) → matches case 3
    {
        case 1:
            printf("Case 1: Value is %d\n", num);  // skipped

        case 3:
            printf("Case 3: Value is %d\n", num);  // ✅ executed

        case 2:
            printf("Case 2: Value is %d\n", num);  // ✅ falls through

        default:
            printf("Default case : Value is %d\n", num);  // ✅ falls through
    }

    return 0;
}
