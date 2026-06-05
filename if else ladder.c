#include<stdio.h>
int main ()
{
    int age;
    printf("Welcome to ARTO.\nPlease, enter your age:");
    scanf("%d" , &age);

    if (age<18)
    {
    printf("Your`e too young, please apply after your`e 18.");
    }

    else if(age > 70)
    {
    printf("You`re senior, you can`t apply anymore.");
    }

    else
    {
    printf("\nSorry, you`re eligible for a license.");
    printf("\nYour age is : %d", age);
    }

    return 0;
}

