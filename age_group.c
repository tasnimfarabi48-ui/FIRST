#include<stdio.h>
int main()
{
    int age;
    printf("Welcome to age classifier.\nPlease enter your age:");
    scanf("%d", &age);

    if(age < 13 )
    {
        printf("You`re a child.");
    } else if(age < 20)
    {
        printf("You`re a teen.");
    }else if(age < 60)
    {
        printf("You are an adult.");
    }else if(age > 60)
    {
        printf("You`re a senior.");
    }
    return 0;
}
