#include<stdio.h>
int main(){
    int num = 9;
    if(num>0) // outer if
    if(num<10) // inner if
    printf("num is between 0 and 10");// only if both conditions stand true then the printf statement will be executed, otherwise there will be no output
}