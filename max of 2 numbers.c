#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the first number:");
    scanf("%d", &x);
    printf("Now, enter the second number:");
    scanf("%d", &y);

    if(x>y)
    {
        printf("The biggest number is: %d", x);
    }else
    {
        printf("The biggest number is: %d", y);
    }
    return 0;
}
