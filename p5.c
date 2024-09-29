#include<stdio.h>
int main()
{
    int p,n, r, interest = 0;
    printf("enter value of principal amount , no of years and rate of interest =  \n");
    scanf( "%d%d%d",&p, &n,&r );

     interest  = (p*n*r)/100;

     printf("Simple interest is = %d ", interest );
     return 0;

}
