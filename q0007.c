//to print maximum of two numbers 
#include<stdio.h>

int main()
{
    int a,b;
    printf("give two numbers \n");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("%d",a);
    }
    else
    printf("%d",b);
}