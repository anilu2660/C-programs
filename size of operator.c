//3. WAP to display size of integer, float, character and double by user.
#include<stdio.h>
int main ()
{
    int a;
    float b;
    char c;
    double d;
    a= 23;
    b= 5.67;
    c= 'm';
    d= 76.78;
printf("size of data types are as follows = \n");
     printf("the size of integer is =%d \n", sizeof(int));
     printf("the size of float is =%d\n", sizeof(float));
     printf("the size of character is =%d \n",sizeof(char));
     printf("the size of double is = %d \n ", sizeof(double));

return 0;
}
