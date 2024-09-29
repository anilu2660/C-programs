#include<stdio.h>
int main()
{
 float c = 0, f= 0, k = 02;
 int choice;
 printf("1. farhenheit to celsuis \n");
 printf("2.celsuis to farhenheit \n ");
 printf("3. kelvin to celsuis\n");
printf("Enter the choice\n");
scanf("%d",&choice);
switch(choice)
{
    case 1 :
    printf("enter the temperature in farhenheit\n");
    scanf("%f", &f);
    c = 5*(f-32)/9;
    printf("The temperature in celsuis  is %f ", c);
    break;
    case 2 :
    printf("enter the temperature in celsuis \n");
    scanf("%f",&c);
    f = 9*c/5 + 32;
    printf("the temperature value in farhenheit is %f\n", f);
    break;
    case 3 :
    printf("enter the temperature in kelvin \n");
    scanf("%f",&k);
    c = k-273.15;
    printf("the temperature in celsuis is  %f\n", c);
    break;    
}
   return 0;
}