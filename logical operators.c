// 5. WAP to illustrate working of Logical Operators.
#include<stdio.h>
int main()
{


int a, b , and , or, not;
 printf(" Enter the numbers whose logical operation to be peformed \n");
scanf("%d%d", &a,&b);
and = a&&b;
or =a||b;
not = !(a&&b);

printf(" The and operation of two numbers is = %i \n", and);
printf(" The or operation of two numbers is = %i\n", or);
printf(" The not  operation of two numbers is = %i\n", not);

return 0;

}
