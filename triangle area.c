#include<stdio.h>
int main()
{
    int b,h;
    printf("Welcome to Area of Triangle Calculation\n");
    printf("Please enter the height :");
    scanf("%d", &h);
    printf("Now, enter the breadth:");
    scanf("%d", &b);

    float Area = 0.5 * h * b;
    printf("The area of triangle is : %f", Area);
    return 0;
}
