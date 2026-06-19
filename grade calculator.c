#include<stdio.h>
int main()
{
 int marks;
 printf("Welcome to grade calculator.\nPlease enter your marks:");
 scanf("%d", &marks);

 if(marks > 90 && marks <=100)
 {
     printf("Congratulations!!!\nYour grade is A");
 }else if(marks > 75)
 {
     printf("Well done.\nYour grade is B");
 }else if(marks > 60)
 {
     printf("Better luck next time.\nYour grade is C");
 }else if(marks > 30)
 {
     printf("Needs improvement.\nYour grade is D");
 }else if(marks < 30)
 {
     printf("You`ve failed.\nYour grade is F.");
 }
 return 0;
}

