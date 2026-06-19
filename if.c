#include<stdio.h>
int main ()
{
    int age;
    printf("Welcome to ARTO.\nPlease, enter your age:");
    scanf("%d" , &age);

    if (age>= 18)
    {
    printf("Your`e eligible for a license.");
    }

    printf("Your age is : %d", age);
    return 0;
}
