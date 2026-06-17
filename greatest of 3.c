#include<stdio.h>
int main()
{
    int first, second, third;
    printf("Please,enter the first number:");
    scanf("%d" , &first);
    printf("Now enter the second number:");
    scanf("%d" , &second);
    printf("Finally, enter the third number:");
    scanf("%d" , &third);

    if(first > second && first > third)
    {
        printf("%d is the greatest", first);
    }else if(second > first && second>third)
    {
        printf("%d is the greatest", second);
    }else
    {
        printf("%d is the greatest", third);
    }
    return 0;

}
