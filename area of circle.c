#include<stdio.h>
int main()
{
    const float PI = 3.14159;
    int radius;
    printf("Please enter the radius of circle: ");
    scanf("%d", &radius);
    printf("The area of your circle  is %f", PI*radius*radius);
    return 0;
}
