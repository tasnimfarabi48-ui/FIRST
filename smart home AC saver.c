#include<stdio.h>
int main()
{
    float temp;
    char window;

    printf("Enter the temperature:");
    scanf("%f", &temp);
    printf("Is the window open(y/n):");
    scanf(" %c", &window);

    if(temp > 35)
    {
        printf("Turn on the AC");
    }
    else if(window == 'n' && temp>26)
    {
        printf("Turn on the AC");
    }else if(window == 'y')
    {
        printf("Don`t turn on the AC.");
    }
    else
    {
        printf("No need.");
    }


    return 0;

}
