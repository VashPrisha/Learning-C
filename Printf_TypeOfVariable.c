//This code basically demonstrates the use of printf function with regards to the declaration of the variable type and format specifier being used.

#include<stdio.h>
int main()
{
    int y = -9; // here I have declared the variable type as int and the value assigned to y is -9. Now in the subsequent lines of code I wish to check whether on declaring the value as a negative integer, the printf statement shall print the value assigned initally or will it work according to the format specifier.
    printf("%d\n",y);// The variable is declared as 'int' type and it's corresponding format specifier has been used therefore it will print the value as it is ie. -9.
    printf("%u",y);// However, in this line, &u is being sued which stands for unsigned decimal integer type, so when I tell printf to adhere to the format specifier '%u', it converts the -9 to the unsigned value type automatically no matter what the type of variable was specified initially.
}

/*Explanation for the output for the second printf statement
- The %u represents the unsigned decimal integer type & when we specif inside the printf function within double quotes; even though -9
is the inital value given to y, the %u converts the -9 to binary and without taking the 2's complement(used in case of signed integers)
converts the associated binary to decimal and therefore prints 4294967287 as output in case of 32-bit.
*/

