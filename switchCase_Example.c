#include<stdio.h>

int main()
{
    int value = 0;

    switch(value)
    {
        default:
            value++; // value becomes 1, fall-through to case 2

        case 2:
            printf("Humans are human centric ");
            break;

        case 1:
            printf("This is inhuman"); // This won't execute due to break in case 2
    }

    printf("%d", value); // Outputs: 1
    return 0;
}
