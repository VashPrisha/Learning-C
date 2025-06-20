#include<stdio.h>
int main()
{
    int x = 9; // int here is the datatype, x here is the variable in which we store the value 9, coukd be any value of the integer type within the data range
    int y = 18;
    printf("%d\n",x); // %d here is the format specifier, used while accessing the integer datatype and different datatypes have different format specifiers
    // There can be variations as well to understand the working better
    // 1)
    printf("hey %d \n",x); // even the presence of a character string doesn't affect the working of a format specifier as it will still fetch the value of the variable written after the comma outside the double quotes
    // 2)
    printf("%d is smaller than %d \n",x,y);//more than variable values can also be fetched, just declare format specifiers equal times to the number of variables being called
    // 3)
    printf("9+18 \n"); // without the use of format specifiers and appropriate variables one cannot directly add two numbers, as anything inside the double quotes would be treated as a string in that case
    // 4) 
    printf("%d",x+y);// one can also directly write the operation to be performed between variables outside the double quotes after the comma, however, the specifier should be written correctly inside the braces
    
    return 0; // successful termination of program


}
