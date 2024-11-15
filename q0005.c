#include<stdio.h>
int main()
{
    int a,b,c;
    printf("give 2 numbers ");
    scanf("%i%i",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("%i,%i",a,b);
}