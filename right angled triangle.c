#include<stdio.h>
int main()
{
    double a,b,c;
    double lhs,rhs;
    printf("Please, enter the first side:");
    scanf("%lf", &a);
    printf("Now, enter the second side:");
    scanf("%lf", &b);
    printf("Finally, enter the third side:");
    scanf("%lf", &c);

    if(a>b && a>c)
    {
        lhs = a * a;
        rhs = (b * b) + (c * c);
    }else if(b>a && b>c)
    {
        lhs = b * b;
        rhs =(a * a) + (c * c);
    } else if(c>a && c>b)
    {
        lhs = c * c;
        rhs = (a * a) + (b * b);
    }

    if(lhs == rhs)
    {
        printf("It`s a right angled triangle.");
    } else if(lhs != rhs)
    {
        printf("It`s not a right angled triangle.");
    }else
    {
        printf("It`s not a valid triangle");
    }
    return 0;
}


