#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Please, enter the first angle:");
    scanf("%d", &a);
    printf("Now,enter the second angle:");
    scanf("%d", &b);

    // Three sides of triangle consists of 180 degrees.
    c = 180 - (a+b);
    printf("The third angle will be: %d", c);
    return 0;
}
