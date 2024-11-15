//c program to find the greatest numbers in a array
#include<stdio.h>
int main()
{
   int number[5],greatnumber;
   printf("give the numbers\n");
   for(int i=0;i<5;i++)
   {
        scanf("%d",&number[i]);
   }
    greatnumber=number[0];

   for(int j=0;j<5;j++)
   {
    if(greatnumber<number[j])
    {
        greatnumber=number[j];
    }
   }
   printf("great number is %d\n",greatnumber);
}