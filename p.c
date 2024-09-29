//swapping of two numbers without using temporary variable
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the two numbers whose swapping to be done \n");
    scanf("%d%d", &a,&b),

    a=a+b;
    b=a-b;
    a=a-b;

    printf("The swapped numbers are = %d %d \n ", a,b);
     return 0;

}
