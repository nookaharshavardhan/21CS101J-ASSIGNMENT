// C Program to reverse an array

#include<stdio.h>

int main()
{
    int number[5];
    printf("give the numbers\n");
    for (int i=0;i<5;i++)
    {
        scanf("%d",&number[i]);
    }
    for(int i=4;i>=0;i--)
    {
        printf("-->%d\n",number[i]);
    }
}