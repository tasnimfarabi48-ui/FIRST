#include <stdio.h>

int main()
{
    double price = 4.00;
    char is_student;
    char is_rush_hour;

    printf("Are you a student? (y/n): ");
    scanf(" %c", &is_student);

    printf("Is it rush hour? (y/n): ");
    scanf(" %c", &is_rush_hour);

    if(is_student=='y' && is_rush_hour=='y')
        price += 0.50;

    else if(is_student== 'y' && is_rush_hour=='n')
        price -= (price * 0.10);

    printf("Final price is:%.2f\n", price);

    return 0;

}
