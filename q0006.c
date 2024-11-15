//c program to swap to numbers without temporary variables
#include<stdio.h>
int main ()
{
    int a,b;
    printf("give the two numbers to swap \n");
    scanf("%d%d",&a,&b);
     printf("a=%d,b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;

    printf("a=%d,b=%d",a,b);
}