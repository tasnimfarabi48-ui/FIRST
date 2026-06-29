#include<stdio.h>
int main()
{
    float weight, fee;
    char ticket;

    printf("Please enter bag`s weight:");
    scanf("%f", &weight);

    printf("Is the ticket first class(y/n):");
    scanf(" %c", &ticket);

    if(weight > 40)
    {
        printf("Sorry. Weight is too much");
    }

    if(ticket == 'y')
    {
        {
        if(weight>32)
            fee = 50;
        }
    }

    else if(weight <= 23)
    {
        fee = 0.00;
    }
    else if(weight>23)
    {
        fee = 50.00;
    }

    printf("Baggage fee is:%.2f", fee);
    return 0;

}

