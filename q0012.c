// find the factorial of a number
#include<stdio.h>

int main()
{
    int num,factorial=1;
    printf("give the number \n");
    scanf("%d",&num);
    for (int i=1;i<=num;i++)
    {
        factorial=factorial*i;
    }
    printf("%d\n",factorial);
}