#include<stdio.h>
int main()
{
    char is_action;
    int sound;

    printf("Is it an action movie?(y/n):");
    scanf("%c", &is_action);
    printf("Please enter the sound:");
    scanf("%dDB", &sound);

    if(is_action == 'y' && sound>100)
    {
        printf("Warning!!");
    }
    else if(is_action == 'y' && sound>115)
    {
        printf("Lower!!");
    }  //else
    //{
      //  printf("\nThe sound is okay.");
    //}


     if(is_action == 'n' && sound>90)
    {
        printf("Warning!!");
    }
    else if(is_action == 'n' && sound>105)
    {
        printf("Lower!!");
    }else
    {
        printf("\nThe sound is okayyyyyyyyyyy.");
    }

    return 0;


}
