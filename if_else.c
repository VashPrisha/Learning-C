#include<stdio.h>
int main(){
    int a=18; // variable declaration and initialization
    if(a<15){ // states a condition inside the if braces, if true then the block of code inside the succeeding braces gets executed
        printf("a is less than 15\n");
    }
    else{ // when the if condition stands false, 'else' clause is defined to let the program execution be continued (it simply means otherwise)
        printf("a is greater than 15");
    }
    return 0;
}