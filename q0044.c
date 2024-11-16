// C PROGRAM TO PRINT THE FIBBONACCI SEQUENCE
#include<stdio.h>
int fibbonacci(int n);

int main()
    {
        int num;
        printf("give the number of fibbonacci to print \n");
        scanf("%d",&num);
        int fib =fibbonacci(num);
        printf("%i\n",fib);
    }

    int fibbonacci(int n)
    {
        // fib(2)=fib(0)+fib(1)
        // fib(3)=fib(1)+fib(3)
        if(n==0)
        {
            return 0;
        }                                           //base case
        if(n==1)
        {
            return 1;
        }
       int num=fibbonacci(n-1)+fibbonacci(n-2);
       return num;
    }