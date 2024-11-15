// sorting an array in ascending order

#include<stdio.h>
int main()
{
    int temp;
  int number[5]={2,3,4,5,6};
  int size=5;

    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-i-1;j++)
    {
        if(number[j]>number[j+1])
        {
            temp=number[j];
            number[j]=number[j+1];
            number[j+1]=temp;
        }
    }                         
    }
    for(int i=0;i<size;i++)
    {
        printf("-->%d\n",number[i]);
    }
}
