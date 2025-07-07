//In this case there will be no output due to value of num not being able to satify either of the conditions stated i.e. 60 is neither greater nor smaller than 60.
#include<stdio.h>
int main()
{
    int num=60;
    if(num>60)
    {
        printf("bigger than 60");
    }
    if(num<60)
    {
        printf("smaller than 60");
    }
}