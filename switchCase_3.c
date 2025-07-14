#include<stdio.h>

int main()
{
    int month = 2;
    int year = 2000;
    int numDays = 0;

    switch(month){
        case month: // ❌ Error: 'case' label must be a constant expression
        // ✅ Fix: Replace with 'case 2:' since month = 2 is constant here
        printf("%d", numDays);
    }

    return 0;
}
