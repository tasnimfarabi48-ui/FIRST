#include<stdio.h>
int main()
{
    int year;
    printf("Please enter the year:");
    scanf(" %d", &year);

    if(year %400 == 0 || year % 4 == 0 && year % 100 !=0)
    {
        printf("It is a leap year");
    }else
    {
        printf("It`s not a leap year");
    }
    return 0;
}
