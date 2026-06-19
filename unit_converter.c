#include<stdio.h>
int main()
{
    float km;
    printf("Please enter the distance in km:");
    scanf("%f", &km);

    float m = km * 1000;
    float cm = km * 1000 * 100;
    float inch = (km *1000 * 100)/2.54;
    float feet = (inch)/12;

    printf("\nThe distance in m is %f m", m);
    printf("\nThe distance in cm is %f cm", cm);
    printf("\nThe distance in inch is %f inch", inch);
    printf("\nThe distance in feet is %f" feet, feet);

    return 0;

}
