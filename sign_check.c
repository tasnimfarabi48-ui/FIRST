#include<stdio.h>
int main()
{
    int number;
    printf("Please enter your number:");
    scanf("%d", &number);

    if (number > 0)
        {printf("The number is postive.");
        } else if (number < 0)
        {
            printf("The number is negative.");
        } else {
            printf("The number is zero.");
        }
    return 0;
}
