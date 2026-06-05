#include<stdio.h>
int main()
{
    float principal, time, rate;

    printf("Please enter the principal:");
    scanf("%f", &principal);
    printf("Now, enter the rate:");
    scanf("%f", &rate);
    printf("Kindly, enter the time:");
    scanf("%f", &time);

    float compound_interest = principal*(1 + rate/100)*time;
    printf("The compound interest is : %f", compound_interest);
    return 0;
}
