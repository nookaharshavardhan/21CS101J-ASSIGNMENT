// to find the frequncy of elements in an array
#include<stdio.h>
int main()
{
    int number[5],count=0;
    printf("give the numbers\n");
    for (int i=0;i<5;i++)
    {
        scanf("%d",&number[i]);
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(number[i]==number[j])
            {
                count++;
            }
        }
        printf("%d--->%d times\n",number[i],count);
        count=0;
    }
}