#include<stdio.h>
int main()
{
    int r,a;
    const float PI = 3.14159;
    printf("Enter the radius:");
    scanf("%d", &r);

    float sph_vol = 4.0/3 * PI * (r * r * r);
    printf("Volume of sphere is :%f", sph_vol);


    printf("\nEnter the side:");
    scanf("%d", &a);

    int cb_vol = a * a *a;
    printf("Volume of cube is :%d", cb_vol);


    return 0;
}
