// 2. WAP to illustrate working of Bitwise Operators.
#include<stdio.h>
int main ()
{
   int a, b , and , or, xor;
   printf("Enter the number whose bitwise operation you want \n");
   scanf(" %d%d",&a,&b);
   and = a&b;
   or = a|b;
   xor = a^b;
printf("the bitwise and operation is = %d\n",and );
printf("the bitwise or operation is = %d\n",or);
printf("the bitwise xor operation is = %d\n",xor );

    return 0;
}

