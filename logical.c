#include<stdio.h>
int main ()
{
    int age;
    char is_indian;
    printf("Welcome to ARTO.\nPlease, enter your age:");
    scanf("%d" , &age);
    printf("\nAre you an Indian citeizen(Y/N):");
    scanf(" %c", &is_indian);

    if (is_indian =='Y' && age >=18 && age<70){
    printf("You`re eligible for a license.\n");
    }else{
     printf("You`re not eligible.");
    }

    /*if (is_indian == 'Y'){
        if (age<18)
        {
        printf("Your`e too young, please apply after your`e 18.");
        }
        else if(age > 70)
        {
        printf("You`re senior, you can`t apply anymore.");
        }
        else
        {
        printf("\nSorry, you`re not eligible for a license.");
        }
        }
        else
        {
        printf("Only Indian citizens can apply. ");
        }
        printf("\nYour age is: %d", age);*/

        return 0;
}



