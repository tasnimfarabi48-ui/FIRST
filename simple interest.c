#include<stdio.h>
int main()
{
    float principal, time, rate;

    printf("Please enter the principal:");
    scanf("%f", &principal);
    printf("Now, enter the rate of interest:");
    scanf("%f", &rate);
    printf("Kindly, enter the time:");
    scanf("%f", &time);

    float simple_interest = (principal * time * rate)/ 100;
    printf("The simple interest is : %f", simple_interest);
    return 0;
}
