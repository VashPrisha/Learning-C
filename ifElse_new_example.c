#include<stdio.h>
int main()
{
    int i=1,j=5,k=4,num;
    if(i>j)
     if(i>k)
      num=i;
    else
      num=k;
    else // the program skips the previous parts and goes to this line automatically due to no braces being present + if condition being false
     if(j>k) //this stands true as 5>4
      num=j; // j is printed as output
    else
      num=k; // this is not executed due to if condition being true
    printf("%d",num); // output: 5
}