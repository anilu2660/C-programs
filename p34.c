//program on illustustion of arimethic operator
#include<stdio.h>
int main ()
{
    int a, b ,s,m,d,min, mo;

    printf("Enter any two numbers whose arithmetic operation need to be done \n");
    scanf("%d%d", &a,&b);
    s= a+b;
    m = a*b;
    min = a-b;
    d= a/b;
    mo= a%b;
    printf("Sum of two numbers are = %i \n",s);
    printf("multiplication  of two numbers are = %i \n",m);
    printf("subtraction  of two numbers are = %i \n",min);
    printf("division of two numbers are = %i \n",d);
    printf("modular of two numbers are = %i \n",mo);
return 0;
}


