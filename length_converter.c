#include<stdio.h>
int main()
{
    int l;
    printf("Enter the length of book in cm:");
    scanf("%d", &l);

    int inch = (l/2.54);
    printf("The desired length in inch is :%d", inch);

    return 0;
}
