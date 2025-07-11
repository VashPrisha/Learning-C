#include<stdio.h>

int main()
{
    int num = 2;

    switch(num + 2)  // switch(4): no matching case, so default runs
    {
        printf("Hey!");  // unreachable, not part of any case

        case 1:
            printf("Case 1: Value is %d", num);  // skipped

        case 2:
            printf("Case 2: Value is %d", num);  // skipped

        case 3:
            printf("Case 3: Value is %d", num);  // skipped

        default:
            printf("The value is %d", num);  // executed
    }

    return 0;
}
