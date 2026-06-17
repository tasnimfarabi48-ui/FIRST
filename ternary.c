#include<stdio.h>
int main()
{
    char gender;
    printf("Please enter your age(M/F): ");
    scanf(" %c", &gender);

    gender == 'M' ? printf("Male") : printf("Female");

  return 0;
}
