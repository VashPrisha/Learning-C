#include<stdio.h>
int main()
{
    int num=20;
    if(num<10)
    if(num%2==0)
    printf("num is less than 10 and even\n ");
    else
    printf("I don't know");
}
// Dangling if-else is a classic nested if-else problem
/* Due to avoidance of braces, the compiler tends to attach the else to the nearest if condition present, due to which the overall output gets affected causing ambiguity.
In this case the else clause attaches itself to the preceeding if ie. if(num%2==0) and due to first if condition being false the entire next if block and else is skipped, thereby not producing any output.


The compiler perceives it:
if(num<10){
if(num%2==0)
printf("num is less than 10 and even\n");
else
printf("I don't know");
}


*/