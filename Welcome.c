#include<stdio.h>
int main()
{
    char name[20];
    printf("Please enter your name: ");
    scanf("%20s" , &name);
    printf("Welcome %s to Farabi`s Coding World\n", name);
    return 0;
}
