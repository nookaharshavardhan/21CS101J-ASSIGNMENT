// C program to find sum of all elements in an array
#include<stdio.h>
int main()
{
    int number[5],sum=0;
    printf("give the numbers\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&number[i]);
    }

    for(int i=0;i<5;i++)
    {
        sum+=number[i];
    }
    printf("%d",sum);
}