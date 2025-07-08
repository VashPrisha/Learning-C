#include<stdio.h>
int main()
{
    int num=20;
    if(num<10){
    if(num%2==0)
    printf("num is less than 10 and even\n ");
    }
    else
    printf("I don't know");
}
// due to defined braces being present the first if condition turns out to be false and therefore the else part now associated with the first if condition gets executed printing the output.