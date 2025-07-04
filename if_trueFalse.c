#include<stdio.h>
int main(){
    if(0)// 0 means false: so the if consdition is false hence the next following line will not be printed, only statement 2 will get printed as output
    printf("statement 1\n");
    printf("statement 2\n");

    if(1)// any number besides 0 indicates the statment is true, therefore both the statements will get printed
    printf("statement 3\n");
    printf("statement 4");
}
// In case no braces are put after the if condition, it is assumed that the next single statement is falling inside the if block and in case the if condition stands true it gets printed.
// However, the subsequent lines after the first line get printed no matter what whether if condition-> true or false