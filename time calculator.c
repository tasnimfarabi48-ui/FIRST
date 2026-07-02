#include<stdio.h>
int main()
{
    int seconds, hours, minutes , seconds2;
    printf("Enter total seconds:");
    scanf("%d", &seconds);

    hours = seconds / 3600 ;
    minutes = (seconds%3600) / 60 ;
    seconds2 = seconds%60 ;

    printf("Output will be(HH:MM:SS):%d:%d:%d", hours, minutes, seconds2);

    return 0;

}



