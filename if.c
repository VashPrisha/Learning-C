#include<stdio.h>
int main(){
    int grade; //grade variable takes up space in memory
    scanf("%d", &grade); // scanf is a function used to take input from user and &(address-of) operator is used with scanf to tell where to store the input

    if(grade <= 10){ // if the condition stands true then statement-block is executed, otheriwse doesn't print anything
        printf("you should study more!\n");
    
        printf("the Dennis Ritchie book for C is great though!");
    }
    
}
