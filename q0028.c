// c program to sort an array in decending order
#include<stdio.h>
int main ()
{
    int size;
    printf("give the size of array\n");
    scanf("%d",&size);
    int number[size];
    int temp;
    for(int i=0;i<size;i++)
    {
        scanf("%d",&number[i]);
    }
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(number[j]<number[j+1])
            {
                temp=number[j+1];
                number[j+1]=number[j];
                number[j]=temp;
            }
        }
    }
    for (int i=0;i<size;i++)
    {
        printf("-->%d\n",number[i]);
    }
}