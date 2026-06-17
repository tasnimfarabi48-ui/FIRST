#include<stdio.h>
int main()
{
    int age;
    char is_bangladeshi;
    printf("Welcome to BRTA.\nPlease enter your age:");
    scanf("%d", &age);
    printf("Are you a Bangladeshi citizen(Y/N):");
    scanf(" %c", &is_bangladeshi);

    if (is_bangladeshi == 'Y' || (age>=18 && age < 70))
    {
    printf("You're eligible for a license.\n");
    }
    else{
    printf("You`re not eligible");
    }
    return 0;

}
