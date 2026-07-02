#include<stdio.h>
int main()
{
    int hours,minutes,seconds, total_seconds;
    printf("Time taken is(HH:MM:SS):");
    scanf("%d:%d:%d", &hours,&minutes,&seconds);

    total_seconds = (hours*3600) + (minutes*60) + seconds;

    printf("Output will be:%d", total_seconds);

    return 0;
}
