#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Please, enter the first number:");
    scanf("%d", &a);
    printf("Now, enter the second number:");
    scanf("%d", &b);
    printf("Finally, enter the third number:");
    scanf("%d", &c);

    if(a<b && a<c)
    {
        printf("The smallest number is: %d", a);
    }else if(b<a && b<c)
    {
        printf("The smallest number is: %d", b);
    }else
    {
        printf("The smallest number is: %d", c);
    }
    return 0;
}
