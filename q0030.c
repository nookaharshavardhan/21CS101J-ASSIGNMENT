//C program to remove duplicate element from an array

#include<stdio.h>
int main()
{
    printf("give the elements \n");
    int arr[10],temp=0;
    for(int i=1;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            temp=arr[i];
            if(temp==arr[j])
            {
                arr[j]=0;
            }
        }
        printf("%d\n",arr[i]);
    }
}