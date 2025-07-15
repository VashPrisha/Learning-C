#include<stdio.h>

int main()
{
    int weight = 75;  // Initial weight set to simulate first condition

    // Continue prompting until the weight is 65 or less
    while(weight > 65)
    {
        printf("Go for some exercise, then come back\n");  // Suggest action
        printf("Enter your weight: ");  // Prompt for new weight
        scanf("%d", &weight);  // Take user input to update condition
    }

    return 0;  // Exit when goal is achieved
}
