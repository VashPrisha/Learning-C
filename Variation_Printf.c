// This is in continuation to the printf and type of variable code done previously

#include<stdio.h>

int main()
{
    unsigned int y=-9;
    printf("%d\n",y);
    printf("%u",y);
}
/* even though we have explicitly declared 'y' as an unsigned integer still when the printf function gives the output in the terminal,
it outputs the signed integer -9 in case of the first printf function being called & in the second line it gives the unsigned value of
y as it is in the 32 bit format. Therefore, the printf function does not care what kind of declaration is given in the code initially
for a type of variable, it acts upon what is written inside the following brackets after the function.*/