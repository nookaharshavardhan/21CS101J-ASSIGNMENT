//C program to find sum of first n natural numbers 
#include<stdio.h>

int main ()
{
    int num,sum=0;
    printf("give the number\n");
    scanf("%d",&num);
    for (int i=1;i<=num;i++)
    {
        sum+=i;
    }
    printf("the sum is %d\n",sum);
}