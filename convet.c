#include<stdio.h>
int main()
{

    int number;
    printf("Please enter a number:");
    scanf("%d", &number);


    printf("\n Original number is : %d", number);

    printf("\n Float converted is : %f",(float) number);
    return 0;
}
