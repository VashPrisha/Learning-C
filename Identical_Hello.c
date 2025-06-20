//The main aim of this little program is to demonstrate that the printf function istelf doesn't supply a newline automatically

#include<stdio.h>
int main() // no arguments passed
{
    printf("Hello,");// If we don't put a \n at the end of the string the cursor stays in the same line
    printf("World!");// World even though being put inside the agrument parantheses for printf function that too in the next line, still gets printed next to the comma
    printf("\n");// This line ensures the cursor moves to the next line
    printf("I am Prisha.");
}