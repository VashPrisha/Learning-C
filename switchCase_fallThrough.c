#include<stdio.h>

int main()
{
    int num = 3;

    switch(num)  // switch(3) → matches case 3
    {
        printf("Hey!");  // not executed; outside all cases

        case 1:
            printf("Case 1: Value is %d\n", num);  // skipped

        case 2:
            printf("Case 2: Value is %d\n", num);  // skipped

        case 3:
            printf("Case 3: Value is %d\n", num);  // ✅ executed

        default:
            printf("Default: The value is %d", num);  // ✅ falls through (no break)
    }

    return 0;
}
