//4. WAP to illustrate working of Comparison Operators.
#include<stdio.h>
int main()
{
    int a,b, s,m,g,t, q  ,r;

    printf("Enter the value of a and b = \n ");
    scanf("%d%d", &a, &b);
    s = a==b;
    m = a!=b;
    g = a>b;
    t = a<b;
    printf("equal operation= %d\n ",s);
    printf("not equal operation= %d\n  ",m);
    printf(" a greater than b operation =%d\n ",g);
    printf(" a smaller than b operation = %d\n ",t);
return 0;

}
