// C program to print al prime numbers from 1 t0 100
#include <stdio.h>
#include<math.h>
int main()
{
    int prime,count=0;
    for (int i=2;i<=100;i++)
    {
        prime=1000;
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                prime=7328413;
                 break;
            }
        }
        if(prime==1000)
        {
            printf("%d\n",i);
        }
    }
}