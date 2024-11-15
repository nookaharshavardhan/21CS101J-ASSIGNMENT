// c program to find if a number is prime or not

#include <stdio.h>

int main ()
{
    int number,count=0;
    printf("give the number\n");
    scanf("%d",&number);
    int prime=1;
    for(int i=2;i<=number/2;i++)
    {
       if(number%i==0)
       {
          count++;
       }
    }
    if (count<1)
    {
        printf("it is a prime number\n");
    }
    else{
        printf("it is not a prime number\n");
    }
}