// Extension(copying lower bit numbers to higher bit number)

#include<stdio.h>
int main()
{
    short int y = -9; // y is a signed 16-bit integer with value -9 
    unsigned int iy = y; // y is converted to unsigned int: 2^32 - 9 = 4294967287 
    printf("%d\n",y); // prints -9 (signed representation) 
    printf("%u\n",y); // prints 4294967287 (y promoted to int, interpreted as unsigned)  
    printf("%d\n",iy); // prints -9 (iy has value 4294967287, interpreted as signed)
    printf("%u\n",iy); // prints 4294967287 (unsigned representation)

}